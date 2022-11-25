extern crate glutin_window;
extern crate graphics;
extern crate opengl_graphics;
extern crate piston;
extern crate ndarray as nd;

use piston::window::WindowSettings;
use piston::event_loop::{EventSettings, Events};
use glutin_window::GlutinWindow;
use opengl_graphics::{GlGraphics, OpenGL};
use piston::input::{RenderArgs,RenderEvent, UpdateEvent, UpdateArgs};
use nd::{array,Ix2,Array,Ix1};

pub struct Cube {
    gl: GlGraphics,
    rotation: f64,
    size: f64,
}

impl Cube {
    fn points()->Array::<f64,Ix2>{
        let points = array![
            [-1.,1.,-1.],
            [1.,1.,-1.],
            [1.,-1.,-1.],
            [-1.,-1.,-1.],
            [-1.,1.,1.],
            [1.,1.,1.],
            [1.,-1.,1.],
            [-1.,-1.,1.]
        ];
        points
    }
    fn projection() -> Array::<f64, Ix2>{
        let projection = array![
            [1.,0.,0.],
            [0.,1.,0.]
        ];
        projection
    }
    fn rotation_z(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [angle.cos(), -angle.sin(),0.],
            [angle.sin(), angle.cos(),0.],
            [0.,0.,1.]
        ];
        rotation
    }
    fn rotation_x(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [1., 0., 0.],
            [0., angle.cos(), -angle.sin()],
            [0., angle.sin(), angle.cos()]
        ];
        rotation
    }
    fn rotation_y(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [angle.cos(),0.,angle.sin()],
            [0., 1., 0.],
            [-angle.sin(),0., angle.cos()]
        ];
        rotation
    }
    fn render(&mut self, args: &RenderArgs){
        use graphics::*;
        let points = Cube::points();
        let mut projected : Vec<Array::<f64,Ix1>> = Vec::new();
        const BACKGROUND_COLOR: [f32;4] = [0.101,0.101,0.141,1.];
        const LINE_COLOR: [f32;4] = [1.,1.,1.0,0.5];
        const PANEL_COLORS: [[f32;4];6] = [
            [0.18,0.55,0.87,0.7],
            [0.94,0.35,0.37,0.7],
            [0.22,0.7,0.6,0.7],
            [0.64,0.57,0.91,0.7],
            [0.75,0.83,0.35,0.7],
            [0.25,0.33,0.15,0.7]
            ];
        let rotation = self.rotation;
        let (x, y) = (args.window_size[0] / 2., args.window_size[1] / 2.);
        self.gl.draw(args.viewport(), |c, gl| {
            clear(BACKGROUND_COLOR, gl);
            let transform = c
                .transform
                .trans(x,y);

            for i in 0..points.shape()[0]{
                let mut rotated = Cube::rotation_x(&rotation).dot(&points.row(i));
                rotated = Cube::rotation_y(&rotation).dot(&rotated);
                rotated = Cube::rotation_z(&rotation).dot(&rotated);
                let mut projected2d = Cube::projection().dot(&rotated);
                projected2d = self.size * projected2d;
                projected.push(projected2d);
            }
            
            polygon(PANEL_COLORS[0],&[
                [projected[0][0],projected[0][1]],
                [projected[3][0],projected[3][1]],
                [projected[7][0],projected[7][1]],
                [projected[4][0],projected[4][1]],
],transform,gl);           
            polygon(PANEL_COLORS[1],&[
                [projected[6][0],projected[6][1]],
                [projected[7][0],projected[7][1]],
                [projected[3][0],projected[3][1]],
                [projected[2][0],projected[2][1]],
],transform,gl);
            polygon(PANEL_COLORS[2],&[
                [projected[5][0],projected[5][1]],
                [projected[1][0],projected[1][1]],
                [projected[2][0],projected[2][1]],
                [projected[6][0],projected[6][1]],
],transform,gl);
            polygon(PANEL_COLORS[3],&[
                [projected[4][0],projected[4][1]],
                [projected[5][0],projected[5][1]],
                [projected[6][0],projected[6][1]],
                [projected[7][0],projected[7][1]],
                ],transform,gl);
            polygon(PANEL_COLORS[4],&[
                [projected[0][0],projected[0][1]],
                [projected[1][0],projected[1][1]],
                [projected[2][0],projected[2][1]],
                [projected[3][0],projected[3][1]],
   ],transform,gl);
            polygon(PANEL_COLORS[5],&[
                [projected[4][0],projected[4][1]],
                [projected[5][0],projected[5][1]],
                [projected[1][0],projected[1][1]],
                [projected[0][0],projected[0][1]],
   ],transform,gl);  

            for i in 0..4{
                let mut start = &projected[i];
                let mut end = &projected[i+4];
                line(LINE_COLOR,2.0,[start[0],start[1],end[0],end[1]],transform,gl);
                start = &projected[i];
                end = &projected[(i+1)%4];
                line(LINE_COLOR,2.0,[start[0],start[1],end[0],end[1]],transform,gl);
                start = &projected[i+4];
                end = &projected[((i+1)%4)+ 4];
                line(LINE_COLOR,3.0,[start[0],start[1],end[0],end[1]],transform,gl);

            }
        });
    }
    fn update(&mut self, args: &UpdateArgs){
        self.rotation += 0.9 * args.dt;
    }
}

fn main() {
    let opengl = OpenGL::V3_2;
    let mut window: GlutinWindow = WindowSettings::new("3D Cube - David Daza",[1000,1000])
        .graphics_api(opengl)
        .exit_on_esc(true)
        .build()
        .unwrap();
    let mut cube = Cube {
        gl: GlGraphics::new(opengl),
        rotation : 0.,
        size: 100.,
    };
    let mut events = Events::new(EventSettings::new());
    while let Some(e) = events.next(&mut window){
        if let Some(args) = e.render_args(){
            cube.render(&args);
        }
        if let Some(args) = e.update_args(){
            cube.update(&args);
        }
    }
}

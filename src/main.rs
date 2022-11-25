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
            [1.0,0.0,0.0],
            [0.0,1.0,0.0]
        ];
        projection
    }
    fn rotation_z(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [angle.cos(), -angle.sin(),0.0],
            [angle.sin(), angle.cos(),0.0],
            [0.0,0.0,1.0]
        ];
        rotation
    }
    fn rotation_x(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [1.0, 0.0, 0.0],
            [0.0, angle.cos(), -angle.sin()],
            [0.0, angle.sin(), angle.cos()]
        ];
        rotation
    }
    fn rotation_y(angle: &f64) -> Array::<f64, Ix2>{
        let rotation = array![
            [angle.cos(),0.0,angle.sin()],
            [0.0, 1.0, 0.0],
            [-angle.sin(),0.0, angle.cos()]
        ];
        rotation
    }
    fn render(&mut self, args: &RenderArgs){
        use graphics::*;
        let points = Cube::points();
        let mut projected : Vec<Array::<f64,Ix1>> = Vec::new();
        const BACKGROUND_COLOR: [f32;4] = [0.0,0.0,0.0,1.0];
        const CUBE_COLOR: [f32;4] = [0.6,0.6,1.0,1.0];
        let rotation = self.rotation;
        let (x, y) = (args.window_size[0] / 2.0, args.window_size[1] / 2.0);
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
                let point = rectangle::square(projected2d[0],projected2d[1],10.0);
                projected.push(projected2d);
            }
            for i in 0..4{
                let mut start = &projected[i];
                let mut end = &projected[i+4];
                line(CUBE_COLOR,1.0,[start[0],start[1],end[0],end[1]],transform,gl);
                start = &projected[i];
                end = &projected[(i+1)%4];
                line(CUBE_COLOR,1.0,[start[0],start[1],end[0],end[1]],transform,gl);
                start = &projected[i+4];
                end = &projected[((i+1)%4)+ 4];
                line(CUBE_COLOR,1.0,[start[0],start[1],end[0],end[1]],transform,gl);

            }
        });
    }
    fn update(&mut self, args: &UpdateArgs){
        self.rotation += 2.0 * args.dt;
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
        rotation : 0.0,
        size: 100.0,
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

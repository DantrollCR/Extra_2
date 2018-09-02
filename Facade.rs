pub struct FactoryFacade {
    let mut engine = Engine::new();
    let mut body = Body::new();
    let mut accessories = Accessories::new();

    fn produceCar() {
        engine.produceEngine()
        body.produceBody()
        accessories.produceAccessories()
    }
}

pub trait Engine {
    fn produceEngine() {
        print!("prodce engine");
    }
}

pub trait Body {
    fn produceBody() {
        print!("prodce body");
    }
}

pub trait Accessories {
    fn produceAccessories() {
        print!("prodce accessories");
    }
}


fn main() {
    let mut factoryFacade = FactoryFacade::new();
    factoryFacade.produceCar();

}

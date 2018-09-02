/*
 * Funciones del Cohete
 */
trait Cohete {
    fn encender(&self);
    fn apagar(&self);
    fn despegar(&self);
    fn volar(&self);
}

/*
 * struct basico para el cohete de la NASA
 */
struct CoheteNasa;

/*
 * Implementacion de cohete para agregar funcionalidades a el cohete de la NASA
 */
impl Cohete for CoheteNasa {
    fn encender(&self) {
        println!("El cohete de la Nasa esta encendido.")
    }

    fn apagar(&self) {
        println!("El cohete de la Nasa esta apagado.")
    }

    fn despegar(&self) {
        println!("El cohete de la Nasa esta despegando.")
    }

    fn volar(&self) {
        println!("El cohete de la Nasa esta volando.")
    }
}

/*
 * Aqui hay una un cohete de SpaceX con funcionalidades diferentes
 y en otro idioma
 */
trait CoheteSpaceX {
    fn ignition(&self);
    fn on(&self);
    fn off(&self);
    fn launch(&self);
    fn fly(&self);
}

/*
 * Struct basico para el cohete SpaceX Dragon
 */
struct SpaceXDragon;

/*
 * Implementacion del trait CoheteSpaceX para agregar funcionalidades
 * al cohete SpaceX Dragon
 */
impl CoheteSpaceX for SpaceXDragon {
    fn ignition(&self) {
        println!("Turning Dragon's ignition.")
    }

    fn on(&self) {
        println!("Turning on the Dragon.")
    }

    fn off(&self) {
        println!("Turning off the Dragon.")
    }

    fn launch(&self) {
        println!("Launching the Dragon")
    }

    fn fly(&self) {
        println!("The Dragon is flying away.")
    }
}



/*
 * Adapter para adaptar todas las funciones de CoheteSpaceX como
 * un Cohete de la NASA
 */
struct SpaceXAdapter {
    ship: SpaceXDragon
}

/*
 * SpaceX Adapter que añade el trait Cohete a CoheteSpaceX
 */
impl Cohete for SpaceXAdapter {
    fn encender(&self) {
        self.ship.ignition();
        self.ship.on();
    }

    fn apagar(&self) {
        self.ship.off();
    }

    fn despegar(&self) {
        self.ship.launch();
    }

    fn volar(&self) {
        self.ship.fly();
    }
}

/*
 * Basic function to pilot ships that implement the RocketShip trait
 */
fn piloto<S: Cohete>(ship: &S) {
    ship.encender();
    ship.despegar();
    ship.volar();
    ship.apagar();
    print!("\n");
}

fn main() {
    let saturn5 = CoheteNasa;

    println!("Pilotando el Saturn 5.");
    piloto(&saturn5);

    let dragon = SpaceXDragon;

    let dragon_adapter = SpaceXAdapter {
        ship: dragon
    };

    println!("Pilotando el Dragon mediante el Adapter.");
    piloto(&dragon_adapter);
}

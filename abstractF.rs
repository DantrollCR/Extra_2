//Aqui se definen un Celular

trait Cellphone{
    fn call(&self);
    fn message(&self);
}

/*
 * Aqui se define una Laptop
 */
trait Laptop {
    fn play_games(&self);
    fn edit_videos(&self);
}

/*
 * Aqui se define la Factory
 */
trait Factory<C: Cellphone, L: Laptop> {
    fn new_cellphone(&self) -> C;
    fn new_laptop(&self) -> L;
}


/*
 * Define our Apple products. Normally these structs would contain a lot more
 * data.
 */
struct IPhone;

impl Cellphone for IPhone {
    fn call(&self) {
        println!("Look! I'm calling on an IPhone!");
    }

    fn message(&self)  {
        println!("Look! I'm messaging on an IPhone!");
    }
}

struct MAC;

impl Laptop for MAC {
    fn play_games(&self) {
        println!("Just playing some games on my MAC.");
    }

    fn edit_videos(&self)  {
        println!("Look! I'm editing videos on a MAC!");
    }
}

/*
 * Create AppleFactory and implement it for our Apple devices
 */
struct AppleFactory;

impl Factory<IPhone, MAC> for AppleFactory {
    fn new_cellphone(&self) -> IPhone {
        return IPhone;
    }

    fn new_laptop(&self) -> MAC {
        return MAC;
    }
}

/*
 * Define our Google products. Like with Apple's products, these are
 * simplified.
 */

struct Pixel;

impl Cellphone for Pixel {
    fn call(&self) {
        println!("Look! I'm calling on a Google Pixel!");
    }

    fn message(&self) {
        println!("Look! I'm messaging on a Google Pixel!");
    }
}

struct Chromebook;

impl Laptop for Chromebook {
    fn play_games(&self) {
        println!("Just playing some games on my Chromebook.");
    }

    fn edit_videos(&self)  {
        println!("Just playing some games on my Chromebook.");
    }
}

/*
 * Create GoogleFactory and implement it for our Google devices
 */
struct GoogleFactory;

impl Factory<Pixel, Chromebook> for GoogleFactory {
    fn new_cellphone(&self) -> Pixel {
        return Pixel;
    }

    fn new_laptop(&self) -> Chromebook {
        return Chromebook;
    }
}


pub fn esto() {
    // Se crean dos Factory's.
    let apple = AppleFactory;
    let google = GoogleFactory;

    // Las dos fabricas usan la misma interfaz, entonces ahora la usaremos.



    // Test out creating phones
    let cellphone = apple.new_cellphone();
    cellphone.call();

    let cellphone = google.new_cellphone();
    cellphone.call();

    // Test out creating tablets
    let laptop = apple.new_laptop();
    laptop.play_games();

    let laptop = google.new_laptop();
    laptop.play_games();
}
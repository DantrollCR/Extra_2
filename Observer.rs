

pub trait EventListener {
    fn on_event(&self, event: u32);
}

pub struct Notifier {
    listeners: Vec<Box<EventListener>>,
}

impl Notifier {
    pub fn new() -> Self {
        Self { listeners: Vec::new() }
    }

    pub fn register<T: EventListener + 'static>(&mut self, listener: T) {
        self.listeners.push(Box::new(listener));
    }

    pub fn notify(&self, event: u32) {
        for listener in &self.listeners {
            listener.on_event(event);
        }
    }
}

impl<F: Fn(u32)> EventListener for F {
    fn on_event(&self, event: u32) {
        self(event);
    }
}
fn  main() {
    let mut notifier = Notifier::new();
        notifier.register(|event| println!("received [{}]", event));
        println!("notifying...");
        notifier.notify(42);
}

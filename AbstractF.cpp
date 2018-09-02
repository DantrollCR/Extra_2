//
// Created by dantroll on 9/2/18.
//


// Abstract product
#include <iostream>

using namespace std;

class Automovil {
public:
    virtual void readModel() = 0;

    virtual void readYear() = 0;
};

//Se hace una clase para un Automovil específico, un Lamborguini
class Lambo : public Automovil {
public:
    Lambo() {}

    void readModel() {
        cout << "Soy un Lamborguini Diablo" << endl;
    }

    void readYear() {
        cout << "Y soy año 2018" << endl;
    }
};

//Una clases para un auto SUV
class SUV : public Automovil {
public:
    SUV() {}

    void readModel() {
        cout << "Soy un LandRover Dicovery" << endl;
    }

    void readYear() {
        cout << " Soy año 2003" << endl;
    }
};

// Abstract Factory de Automovils
class FabricaAutomovils {
public:
    virtual Automovil *getProduct() = 0;
};

// Fabrica de un Lmborguini
class LamboFactory : public FabricaAutomovils {
public:
    Automovil *getProduct() {
        return new Lambo ();
    }

    ~LamboFactory() {}
};

// Fabrica de un SUV
class SUVFactory : public FabricaAutomovils {
public:
    Automovil *getProduct() {
        return new SUV ();
    }

    ~SUVFactory() {}
};


class Application {
public:
    Application(FabricaAutomovils *factory) {
        cout << "Abstract Factory: \n" << endl;
        Automovil *product = factory->getProduct ();
        product->readModel ();
        product->readYear ();
        delete product;
        delete factory;
    }
};

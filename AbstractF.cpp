//
// Created by dantroll on 9/2/18.
//

using namespace std;

// Abstract product
class Carro {
public:
    virtual void readModel() = 0;

    virtual void readYear() = 0;
};

//Se hace una clase para un carro específico, un Lamborguini
class Lambo : public Carro {
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
class SUV : public Carro {
public:
    SUV() {}

    void readModel() {
        cout << "Soy un LandRover Dicovery" << endl;
    }

    void readYear() {
        cout << " Soy año 2003" << endl;
    }
};

// Abstract Factory de Carros
class FabricaCarros {
public:
    virtual Carro *getProduct() = 0;
};

// Fabrica de un Lmborguini
class LamboFactory : public FabricaCarros {
public:
    Carro *getProduct() {
        return new Lambo ();
    }

    ~LamboFactory() {}
};

// Fabrica de un SUV
class SUVFactory : public FabricaCarros {
public:
    Carro *getProduct() {
        return new SUV ();
    }

    ~SUVFactory() {}
};


class Application {
public:
    Application(FabricaCarros *factory) {
        cout << "Abstract Factory: \n" << endl;
        Carro *product = factory->getProduct ();
        product->readModel ();
        product->readYear ();
        delete product;
        delete factory;
    }
};

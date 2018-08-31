#include <iostream>
#include <string>

using namespace std;


class Llanta {
public:
    int size;
};

class MotorB {
public:
    int potencia;
};

class Carroceria {
public:
    string forma;
};

/* Esta es la clase producto que definira las caracteristicas de el producto*/
class Auto {
public:
    Llanta* pllantas[4];
    MotorB* pmotor;
    Carroceria* pcarroceria;

    void specifications() {
        cout<<"Carroceria:"<<pcarroceria->forma<<endl;
        cout<<"Potencia del motor:"<<pmotor->potencia<<endl;
        cout<<"Medida de neumatico:"<<pllantas[0]->size<<"'"<<endl;
    }
};

/* Esta clase es el AbstractBuilder que define como se construye el producto*/
class Builder {
public:
    virtual Llanta* getLlanta() = 0;
    virtual MotorB* getMotor() = 0;
    virtual Carroceria* getCarroceria() = 0;
};

/* Esta es nuestra clase Director que recibe un ConcreteBuilder y se encarga de retornar la clase producto
 * segun se definio en el concreteBuilder que recibio como parametro*/
class Director
{
    Builder* builder;

public:
    void setBuilder(Builder* concreteBuilder)
    {
        builder = concreteBuilder;
    }

    Auto* getCar()
    {
        Auto* car = new Auto();

        car->pcarroceria = builder->getCarroceria();

        car->pmotor = builder->getMotor();

        for(int i = 0; i < 4; i++){
            car->pllantas[i] = builder->getLlanta();
        }
        return car;
    }
};

/* Esta clase es un ConcreteBuilder en el que se definieron valores predeterminados para el producto*/
class JeepBuilder : public Builder
{
public:
    Llanta* getLlanta()
    {
        Llanta* llanta = new Llanta();
        llanta->size = 22;
        return llanta;
    }

    MotorB* getMotor()
    {
        MotorB* motor = new MotorB();
        motor->potencia = 400;
        return motor;
    }

    Carroceria* getCarroceria()
    {
        Carroceria* carroceria = new Carroceria();
        carroceria->forma = "SUV";
    }
};

/* Esta clase es un ConcreteBuilder  */
class NissanBuilder : public Builder
{
public:
    Llanta* getLlanta()
    {
        Llanta* wheel = new Llanta();
        wheel->size = 16;
        return wheel;
    }

    MotorB* getMotor()
    {
        MotorB* engine = new MotorB();
        engine->potencia = 85;
        return engine;
    }

    Carroceria* getCarroceria()
    {
        Carroceria* body = new Carroceria();
        body->forma = "hatchback";
    }
};



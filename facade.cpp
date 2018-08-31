#include <iostream>

using namespace std;


class Tanque{
public:
    int cantCombust = 200;
};

class Motor{
public:
    int revoluciones = 0;
    bool encendido = false;

    void encender(){
        cout<<"Motor encendido"<<endl;
        encendido = true;
        revoluciones = 10;
    }

    void apagar(){
        cout<<"Motor apagado"<<endl;
        encendido = false;
        revoluciones = 0;
    }

    void inyectarCombustible(){
        if(revoluciones < 30) {
            revoluciones++;
            cout<<"Revoluciones: "<<revoluciones<<endl;
        }
    }
};

class Transmicion{
public:
    int marcha = 0;
    bool frenoMano = true;
    int velocidad = 0;

    void aumentarVel(){
        if(velocidad < 100) {
            velocidad += 5;
            if(velocidad > 20){
                if(velocidad > 40){
                    if(velocidad > 60){
                        if(velocidad >80){
                            marcha = 5;
                        }else{
                            marcha = 4;
                        }
                    }else{
                        marcha = 3;
                    }
                }else{
                    marcha = 2;
                }
            }else{
                marcha = 1;
            }
        }
        cout<<"Velocidad: "<<velocidad<<endl;
        cout<<"Marcha: "<<marcha<<endl;
    }

    void frenar(){
        if(velocidad > 0) {
            velocidad -= 5;
            if (velocidad > 20) {
                if (velocidad > 40) {
                    if (velocidad > 60) {
                        if (velocidad > 80) {
                            marcha = 5;
                        } else {
                            marcha = 4;
                        }
                    } else {
                        marcha = 3;
                    }
                } else {
                    marcha = 2;
                }
            } else {
                marcha = 1;
            }
        }
        cout<<"Velocidad: "<<velocidad<<endl;
        cout<<"Marcha: "<<marcha<<endl;
    }
};

class Carro{
private:
    Motor motor;
    Tanque tanque;
    Transmicion transmicion;

public:
    void girarLlave(){
        if(motor.encendido){
            motor.apagar();
        }else {
            motor.encender();
        }
    }

    void acelerar(){
        if(tanque.cantCombust > 0){
            tanque.cantCombust--;
            cout<<"Cant combustible: "<<tanque.cantCombust<<endl;
            if(transmicion.marcha > 0 && !transmicion.frenoMano && motor.encendido){
                motor.inyectarCombustible();
                transmicion.aumentarVel();
            }
        }
    }

    void frenar(){
        if(transmicion.frenoMano){
            transmicion.frenoMano = false;
            transmicion.marcha = 1;
            cout<<"Se quito el freno de mano"<<endl;
            cout<<"Marcha: 1"<<endl;
        }else {
            if (transmicion.velocidad > 0) {
                if (motor.revoluciones > 10) {
                    motor.revoluciones --;
                    cout<<"Revoluciones: "<<motor.revoluciones<<endl;
                }
                transmicion.frenar();
            }else{
                transmicion.frenoMano = true;
                transmicion.marcha = 0;
                cout<<"Se puso el freno de mano"<<endl;
                cout<<"Marcha: neutro"<<endl;
            }
        }

    }

};

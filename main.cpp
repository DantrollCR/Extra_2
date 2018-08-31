#include <iostream>
#include "facade.cpp"
#include "builder.cpp"

using namespace std;

int main() {

    int opc;
    bool flag = true;
    while(flag) {

        cout << "     Bienvenido!!" << endl;
        cout << "Que patron de diseño desea probar??" << endl;
        cout << "1-Facade" << endl;
        cout << "2-Builder" << endl;
        cout << "3-Observer" << endl;
        cout << "4-Abstract Factory" << endl;
        cout << "5-Adapter" << endl;
        cout << "6-Salir" << endl;
        cin>>opc;
        switch (opc) {
            case 1: {
                int opcf;
                Carro carro;
                cout << "         Bienvenido a tu automovil simulado" << endl;
                bool flagf = true;
                while (flagf) {
                    cout << "   Que desea hacer?" << endl;
                    cout << "1- Girar la llave." << endl;
                    cout << "2- Acelerador" << endl;
                    cout << "3- Frenar" << endl;
                    cout << "4- Salir" << endl;
                    cin >> opcf;
                    switch (opcf) {
                        case 1:
                            carro.girarLlave();
                            break;
                        case 2:
                            carro.acelerar();
                            break;
                        case 3:
                            carro.frenar();
                            break;
                        case 4:
                            flagf = false;
                            break;
                    }
                }
            }
                break;
            case 2: {

                Auto *car;

                Director director;

                JeepBuilder jeepBuilder;
                NissanBuilder nissanBuilder;

                bool flagb = true;
                int opcb;

                while(flagb) {
                    cout << "     Bienvenido!!" << endl;
                    cout << "Que automovil desea:" << endl;
                    cout << "1-Jeep" << endl;
                    cout << "2-Nissan" << endl;
                    cout << "3-Salir" << endl;
                    cin >> opcb;
                    switch (opcb) {
                        case 1:
                            cout << "Jeep" << endl;
                            director.setBuilder(&jeepBuilder);
                            car = director.getCar();
                            car->specifications();
                            break;
                        case 2:
                            cout << "Nissan" << endl;
                            director.setBuilder(&nissanBuilder);
                            car = director.getCar();
                            car->specifications();
                            break;
                        case 3:
                            flagb = false;
                    }
                }
            }
                break;
            case 3:{

            }
                break;
            case 4:{

            }
                break;
            case 5:{

            }
                break;
            case 6:{
                flag = false;
            }
                break;
        }



    }
}
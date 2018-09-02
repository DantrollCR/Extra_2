#include<iostream>

using namespace std;

class ReproductorDVD //Client wants to use this.
{
public:
    virtual void PlayOnDVD() = 0;    //This is function client wants to use
};

class VHS    //What we have
{
    string _movie;
public:
    VHS(string movie) : _movie (movie) {}

    void VHSplay(int volume)    //This is function we got
    {
        cout << "\nPlaying movie : " << _movie << " at volume :" << volume << "\n";
    }
};

class Adaptador : public ReproductorDVD, private VHS {
    int _volume;
public:
    Adaptador(string movie, int volume) : _volume (volume), VHS (movie) {}

    void PlayOnDVD()        //Comes from public inheritance
    {
        VHSplay (_volume);    //Comes from private inheritance
    }
};

class Funcion {
public:
    int funcionReproductor() {
        cout << "Adapter:" << endl;
        ReproductorDVD *DvdVideo = new Adaptador ("Película en un VHS,adaptada a un DVD", 50);
        DvdVideo->PlayOnDVD ();    //The call to the interface function is routed by the Adaptador to the LegacyCode.
        cout << "\n";
        delete DvdVideo;
    }
};
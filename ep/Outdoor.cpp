#include "Outdoor.h"
#include <iostream>
using namespace std;

Outdoor::Outdoor(float carga_mapear, float eficiencia, Bateria bateria) : Drone ()
{
    this->carga_mapear = carga_mapear;
    Drone::setEficiencia(eficiencia);
    Drone::bateria = bateria;
}

Outdoor::~Outdoor()
{

}

bool Outdoor::mapear () {
    if (Drone::getDecolado() && Drone::bateria >= this->carga_mapear) {
        cout << "Mapeamento concluído!" << endl;
        Drone::bateria -= carga_mapear;
        return true;
    }

    cout << "Impossível completar o mapeamento." << endl;
    return false;
}
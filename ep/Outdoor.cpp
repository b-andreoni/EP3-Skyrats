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
    if (Drone::getDecolado() && Drone::bateria.getCargaAtual() >= this->carga_mapear) {
        cout << "carga atual: " << Drone::bateria.getCargaAtual() << endl;
        cout << "Mapeamento concluído!" << endl;
        Drone::bateria.setCargaAtual(Drone::bateria.getCargaAtual() - carga_mapear);
        return true;
    }

    cout << "Impossível completar o mapeamento." << endl;
    return false;
}
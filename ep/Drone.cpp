#include "Drone.h"
#include <math.h>

using namespace std;
#include <iostream>

Drone::Drone(){
}

Drone::~Drone()
{
}

float Drone::getEficiencia() {
    return eficiencia;
}
void Drone::setEficiencia(float eficiencia){
    this->eficiencia = eficiencia;
}
bool Drone::getDecolado(){
    return decolado;
};
void Drone::setDecolado(bool decolado){
    this->decolado = decolado;
}
int* Drone::getPosicao(){
    return posicao;
}
void Drone::setPosicao(int *posicao){
    posicao = posicao;
    cout << posicao[0] << endl;
    cout << posicao[1] << endl;
}

bool Drone::Takeoff(){
    if (!decolado && bateria.getCargaTotal()>0) {
        decolado = true;
        return true;
    }
    return false;
}
bool Drone::Pousar(){
    if (decolado) {
        decolado = false;
        return true;
    }
    return false;
}
bool Drone::Voar (int x, int y){
    int difX = x - posicao[0];
    int difY = y - posicao[1];
    int distancia = sqrt((pow(difX,2)) + pow(difY,2));
    if (distancia*eficiencia > bateria.getCargaAtual()){
        posicao[0] = x;
        posicao[1] = y;
        return true;
    }
    return false;
}
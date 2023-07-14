#include "Drone.h"
#include <math.h>

Drone::Drone()
{
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
void Drone::setPosicao(int posicao[2]){
    this->posicao[2] = posicao[2];
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
#ifndef DRONE_H
#define DRONE_H
#include "Bateria.h"

#pragma once
using namespace std;

class Drone
{
public:
    Drone();
    ~Drone();

    Bateria bateria;
    float getEficiencia();
    void setEficiencia(float eficiencia);
    bool getDecolado();
    void setDecolado(bool decolado);
    int* getPosicao();
    void setPosicao(int* posicao);


    bool Takeoff();
    bool Pousar();
    bool Voar (int x, int y);
private:
    int posicao[2];
    float eficiencia;
    bool decolado;

};

#endif
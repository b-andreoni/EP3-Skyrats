#ifndef DRONE_H
#define DRONE_H
#include "Bateria.h"

#pragma once
using namespace std;

class Drone
{
public:
    Bateria bateria;
    float getEficiencia();
    void setEficiencia(float eficiencia);
    bool getDecolado();
    void setDecolado(bool decolado);
    int* getPosicao();
    void setPosicao(int posicao[2]);


    bool Takeoff();
    bool Pousar();
    bool Voar (int x, int y);
private:
    Drone();
    ~Drone();


    int posicao[2];
    float eficiencia;
    bool decolado;

    bool Takeoff();
    bool Pousar();
    bool Voar (int x, int y);

};

#endif
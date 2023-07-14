#ifndef BATERIA_H
#define BATERIA_H

#pragma once

class Bateria
{
private:
    int cargaAtual;
    int cargaTotal; 

public:
    Bateria(int cargaTotal);

    Bateria();

    void setCargaAtual(int carga);

    int getCargaAtual();

    void setCargaTotal(int carga);

    int getCargaTotal();

    float Porcentagem();

    void Carregar();
};

#endif


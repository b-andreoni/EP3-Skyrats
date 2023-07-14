#ifndef BATERIA_H
#define BATERIA_H

#pragma once

class Bateria
{
private:
    int cargaAtual;
    int cargaTotal; 

public:
   void Bateria( int cargaTotal) {
   }
    /*~Bateria(); */

void setCargaAtual(int carga) {
        cargaAtual = carga;
    }

    int getCargaAtual() {
        return cargaAtual;
    }

    void setCargaTotal(int carga) {
        cargaTotal = carga;
    }

    int getCargaTotal() {
        return cargaTotal;
    }

    float Porcentagem() {
        return (float) (cargaAtual) / cargaTotal * 100.0;
    }

    void Carregar() {
        cargaAtual = cargaTotal;
    }
};


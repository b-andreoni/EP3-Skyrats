#include "Bateria.h"

Bateria::Bateria(int cargaTotal) {
    this->cargaTotal = cargaTotal;
}

Bateria::Bateria() {}


void Bateria::setCargaAtual(int carga) {
    cargaAtual = carga;
}

int Bateria::getCargaAtual() {
    return cargaAtual;
}

void Bateria::setCargaTotal(int carga) {
    cargaTotal = carga;
}

int Bateria::getCargaTotal() {
    return cargaTotal;
}

float Bateria::Porcentagem() {
    return (float) (cargaAtual) / cargaTotal * 100.0;
}

void Bateria::Carregar() {
    cargaAtual = cargaTotal;
}
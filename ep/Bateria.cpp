#include "Bateria.h"

Bateria::Bateria(int cargaTotal) {
    this->cargaTotal = cargaTotal;
}

Bateria::Bateria() {}


void Bateria::setCargaAtual(int carga) {
    this->cargaAtual = carga;
}

int Bateria::getCargaAtual() {
    return this->cargaAtual;
}

void Bateria::setCargaTotal(int carga) {
    this->cargaTotal = carga;
}

int Bateria::getCargaTotal() {
    return this->cargaTotal;
}

float Bateria::Porcentagem() {
    return (float) (this->cargaAtual / this->cargaTotal) * 100.0;
}

void Bateria::Carregar() {
    this->cargaAtual = this->cargaTotal;
}
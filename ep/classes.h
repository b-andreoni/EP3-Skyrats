#include <iostream>
#include <math.h>
using namespace std;

class Bateria{
    private:
    float cargaAtual;
    float cargaTotal;

    public:

    Bateria(){}

    Bateria(float c) {
        
    };
    
    void SetCargaAtual(float carga){

    }

    void SetCargaTotal(float carga){

    }

    float GetCargaAtual(){

    }

    float GetCargaTotal(){

    }

    float Porcentagem(){

    }

    void Carregar(){

    }
};

class Drone{

    protected:
    float eficiencia;
    bool decolado = false;
    int posicao[2] = {0, 0};
    public:

    Bateria bateria;

    Drone(){
        
    }

    void SetEficiencia(float f){ eficiencia = f; }

    void SetPosicao(int x, int y){

    }

    void SetDecolado(bool d){

    }

    float GetEficiencia(){
        
    }

    int GetPosicaoX(){
        
    }

    int GetPosicaoY(){
        
    }

    bool GetDecolado(){
        
    }

    bool Takeoff(){

    }

    bool Pousar(){

    }

    bool Voar(int x, int y){

    }
};

class Outdoor:public Drone{
    private:
    float cargaMapear;

    public:
    Outdoor(float cM, float e, Bateria b){

    };

    bool Mapear(){

    }
};
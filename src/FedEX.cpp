#include "FedEX.h"

FedEX::FedEX(double distancia, double peso){
    this->distancia=distancia;
    this->peso=peso;
    this->costoBase=35;
}
double FedEX::calculoEnvio(){
    int costoEnvio=this->costoBase;
    
    if(this->distancia<500 & this->peso>10){
        costoEnvio+=10;
    }else if(this->distancia>500 & this->peso<10){
        costoEnvio+=15;
    }else if(this->distancia>500 & this->peso>10){
        costoEnvio+=25;
    }

    return costoEnvio;
}
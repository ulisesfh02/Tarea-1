#include "ServicioPostal.h"

ServicioPostal::ServicioPostal(int clase, int distancia, int peso){
    this->clase= clase;
    this->distancia= distancia;
    this->peso= peso;
}

int ServicioPostal::calculoEnvio(){
    int costoEnvio=0;
    switch(clase){
        case 1:
            costoEnvio=calculoPrimeraClase();
            break;
        case 2:
            costoEnvio=calculoSegundaClase();
            break;
        case 3:
            costoEnvio=calculoTerceraClase();
            break;
        default:
    }
    return costoEnvio;
}
    
int ServicioPostal::calculoPrimeraClase(){
    int costo=0;
    if(this->peso>=0 & this->peso<=3){
        costo=this->distancia*0.300;
    } else if(this->peso>=4 & this->peso<=8){
        costo=this->distancia*0.450;
    } else if(this->peso>=9){
        costo=this->distancia*0.600;
    }
    return costo;
}

int ServicioPostal::calculoSegundaClase(){
    int costo=0;
    if(this->peso>=0 & this->peso<=3){
        costo=this->distancia*0.0280;
    } else if(this->peso>=4 & this->peso<=8){
        costo=this->distancia*0.0530;
    } else if(this->peso>=9){
        costo=this->distancia*0.0750;
    }
    return costo;
}

int ServicioPostal::calculoTerceraClase(){
    return this->distancia*0.0120;
}
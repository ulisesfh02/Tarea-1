#include "TipoEnvio.h"
#include "ServicioPostal.h"
#include "FedEX.h"
#include <vector>
#include <iostream>

using namespace std;

int main(){

    vector<TipoEnvio *> arregloEnvios;
    ServicioPostal* envio1 = new ServicioPostal(1, 2, 150);
    arregloEnvios.push_back(envio1);

    ServicioPostal* envio2 = new ServicioPostal(2, 11, 150);
    arregloEnvios.push_back(envio2);

    FedEX* envio3 = new FedEX(600, 12);
    arregloEnvios.push_back(envio3);


    double totalMontoEnvios = 0;

    for(int i=0; i<arregloEnvios.size() ; i++){
        totalMontoEnvios+=arregloEnvios[i]->calculoEnvio();
    }
    std::cout << "El monto total de los envíos es de " << totalMontoEnvios << endl;

    delete envio1;
    delete envio2;
    delete envio3;

    return 0;
}
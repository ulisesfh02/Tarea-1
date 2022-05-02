#ifndef CLASE_FEDEX
#define CLASE_FEDEX

#include "TipoEnvio.h"
using namespace std;

class FedEX: public TipoEnvio{

    int costoBase;

    public:
    FedEX(double distancia, double peso);
    double calculoEnvio();
};

#endif
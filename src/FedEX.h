#ifndef CLASE_FEDEX
#define CLASE_FEDEX

#include "TipoEnvio.h"
using namespace std;

class FedEX: public TipoEnvio{

    int costoBase;

    public:
    FedEX(int distancia, int peso);
    int calculoEnvio();
};

#endif
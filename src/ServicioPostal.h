#ifndef CLASE_SERVICIOPOSTAL
#define CLASE_SERVICIOPOSTAL

#include "TipoEnvio.h"
using namespace std;

class ServicioPostal: public TipoEnvio{

    int clase;

    public:
    ServicioPostal(int clase, int distancia, int peso);
    int calculoEnvio();
    
    int calculoPrimeraClase();
    int calculoSegundaClase();
    int calculoTerceraClase();
};

#endif
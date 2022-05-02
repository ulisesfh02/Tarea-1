#ifndef CLASE_SERVICIOPOSTAL
#define CLASE_SERVICIOPOSTAL

#include "TipoEnvio.h"
using namespace std;

class ServicioPostal: public TipoEnvio{

    int clase;

    public:
    ServicioPostal(int clase, double distancia, double peso);
    double calculoEnvio();
    
    double calculoPrimeraClase();
    double calculoSegundaClase();
    double calculoTerceraClase();
};

#endif
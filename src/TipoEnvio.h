#ifndef CLASE_TIPOENVIO
#define CLASE_TIPOENVIO

class TipoEnvio{

    protected:
    double distancia;
    double peso;

    public:
    virtual double calculoEnvio() = 0;
};

#endif
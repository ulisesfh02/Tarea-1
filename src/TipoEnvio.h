#ifndef CLASE_TIPOENVIO
#define CLASE_TIPOENVIO

class TipoEnvio{

    protected:
    int distancia;
    int peso;

    public:
    TipoEnvio();
    ~TipoEnvio();
    virtual int calculoEnvio() = 0;
};

#endif
#ifndef COLAALMACENAMIENTO_H
#define COLAALMACENAMIENTO_H
#include "ICola.h"


class ColaAlmacenamiento : public ICola
{
    public:
        ColaAlmacenamiento();
        ~ColaAlmacenamiento();

        int GetLen();
        int GetUltimaPosicion();

        bool esVacia();
        bool esLlena();

    protected:
        int len;
        int ultimaPosicion;
    private:
};

#endif

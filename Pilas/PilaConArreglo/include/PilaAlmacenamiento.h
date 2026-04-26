#ifndef PILAALMACENAMIENTO_H
#define PILAALMACENAMIENTO_H
#include "IPila.h"


class PilaAlmacenamiento : public IPila
{
    public:
        PilaAlmacenamiento();
        ~PilaAlmacenamiento();

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

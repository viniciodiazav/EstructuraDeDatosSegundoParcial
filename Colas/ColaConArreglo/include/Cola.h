#ifndef COLA_H
#define COLA_H
#include "ColaAlmacenamiento.h"


class Cola : public ColaAlmacenamiento
{
    public:
        Cola(int len);
        ~Cola();

        void agregarElemento(int n);

        int eliminarElemento();

        int GetPrimerElemento();
        int GetUltimoElemento();

        Dato* GetCola();

    protected:

    private:
        Dato* cola;
};

#endif

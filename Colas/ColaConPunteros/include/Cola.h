#ifndef COLA_H
#define COLA_H
#include "ColaAlmacenamiento.h"


class Cola : public ColaAlmacenamiento
{
    public:
        Cola();
        ~Cola();

        void agregarElemento(int n);

        int eliminarElemento();

        Dato* GetPrimero();
        Dato* GetUltimo();

        int GetPrimerElemento();
        int GetUltimoElemento();

    protected:

    private:
        Dato* primero;
        Dato* ultimo;
};

#endif

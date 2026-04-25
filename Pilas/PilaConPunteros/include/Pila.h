#ifndef PILA_H
#define PILA_H
#include "PilaAlmacenamiento.h"


class Pila : public PilaAlmacenamiento
{
    public:
        Pila();
        ~Pila();

        void agregarElemento(int n);

        int eliminarElemento();

        Dato* GetPrimero();

        int GetPrimerElemento();

    protected:

    private:
        Dato* primero;
};

#endif

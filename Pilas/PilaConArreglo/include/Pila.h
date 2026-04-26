#ifndef PILA_H
#define PILA_H
#include "PilaAlmacenamiento.h"


class Pila : public PilaAlmacenamiento
{
    public:
        Pila(int len);
        ~Pila();

        void agregarElemento(int n);

        int eliminarElemento();

        int GetPrimerElemento();

        Dato* GetPila();

    protected:

    private:
        Dato* pila;
};

#endif

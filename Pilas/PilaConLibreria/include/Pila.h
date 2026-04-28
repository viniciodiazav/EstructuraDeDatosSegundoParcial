#ifndef PILA_H
#define PILA_H
#include "IPila.h"


class Pila : public IPila
{
    public:
        Pila();
        ~Pila();

        void agregarElemento(int n);

        int eliminarElemento();

        int GetPrimerElemento();
        int GetLen();

        bool esVacia();

        std::stack<Dato> GetPila() = 0;

    protected:

    private:
        std::stack<Dato> pila;

};

#endif

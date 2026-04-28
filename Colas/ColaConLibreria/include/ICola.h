#ifndef ICOLA_H
#define ICOLA_H
#include "Dato.h"
#include <queue>


class ICola
{
    public:
        virtual ~ICola() {};

        virtual void agregarElemento(int n) = 0;

        virtual int eliminarElemento() = 0;

        virtual int GetPrimerElemento() = 0;
        virtual int GetUltimoElemento() = 0;
        virtual int GetLen() = 0;

        virtual bool esVacia() = 0;

        virtual std::queue<Dato> GetCola() = 0;

    protected:

    private:
};

#endif

#ifndef COLA_H
#define COLA_H
#include "ICola.h"


class Cola : public ICola
{
    public:
        Cola();
        ~Cola();

        void agregarElemento(int n);

        int eliminarElemento();

        int GetPrimerElemento();
        int GetUltimoElemento();
        int GetLen();

        bool esVacia();

        std::queue<Dato> GetCola();

    protected:

    private:
        std::queue<Dato> cola;
};

#endif

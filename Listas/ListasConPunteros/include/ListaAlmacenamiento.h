#ifndef LISTAALMACENAMIENTO_H
#define LISTAALMACENAMIENTO_H
#include "ILista.h"

class ListaAlmacenamiento : public ILista
{
    public:
        ListaAlmacenamiento();
        ~ListaAlmacenamiento();

        int GetLen();

        bool esVacia();

    protected:
        int len;

    private:
};

#endif

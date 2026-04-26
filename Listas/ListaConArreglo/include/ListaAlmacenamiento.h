#ifndef LISTAALMACENAMIENTO_H
#define LISTAALMACENAMIENTO_H
#include "ILista.h"


class ListaAlmacenamiento : public ILista
{
    public:
        ListaAlmacenamiento();
        ~ListaAlmacenamiento();

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

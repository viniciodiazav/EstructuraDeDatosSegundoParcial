#ifndef QUICKSORTDATO_H
#define QUICKSORTDATO_H
#include "Dato.h"


class QuickSortDato
{
    public:
        QuickSortDato();
        ~QuickSortDato();

        void ordenar(Dato* arreglo, int inicio, int fin);

    protected:

    private:
        int organizar(Dato* arreglo, int inicio, int fin);
};

#endif

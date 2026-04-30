#ifndef MERGESORTDATO_H
#define MERGESORTDATO_H
#include "Dato.h"


class MergeSortDato
{
    public:
        MergeSortDato();
        ~MergeSortDato();

        void ordenar(Dato* arreglo, int inicio, int fin);

    protected:

    private:
        Dato* dividir(Dato* arreglo, int inicio, int fin);
        Dato* juntar(Dato* arreglo_1, Dato* arreglo_2, int tamanio1, int tamanio2);
};

#endif

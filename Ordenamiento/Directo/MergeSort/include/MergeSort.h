#ifndef MERGESORT_H
#define MERGESORT_H


class MergeSort
{
    public:
        MergeSort();
        ~MergeSort();

        void ordenar(int* arreglo, int inicio, int fin);

    protected:

    private:
        int* dividir(int* arreglo, int inicio, int fin);
        int* juntar(int* arreglo_1, int* arreglo_2, int tamanio1, int tamanio2);
};

#endif

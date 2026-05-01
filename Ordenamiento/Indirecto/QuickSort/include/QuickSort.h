#ifndef QUICKSORT_H
#define QUICKSORT_H


class QuickSort
{
    public:
        QuickSort();
        ~QuickSort();

        void ordenar(int* arreglo, int inicio, int fin);

    protected:

    private:
        int organizar(int* arreglo, int inicio, int fin);
};

#endif

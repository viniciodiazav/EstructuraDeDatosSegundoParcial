#ifndef ARREGLO_H
#define ARREGLO_H


class Arreglo
{
    public:
        Arreglo(int len);
        ~Arreglo();

        int* GetArrego();
        int GetLen();

        void imprimirArreglo();

    protected:

    private:
        int len;
        int *arreglo;

        void rellenarArreglo();
};

#endif

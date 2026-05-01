#ifndef OPERACIONES_H
#define OPERACIONES_H


class Operaciones
{
    public:
        Operaciones(int *arreglo, int len);
        ~Operaciones();

        float GetPromedio();
        float getMediana();
        int GetMaximo();
        int GetMinimo();
        int GetSuma();

    protected:

    private:
        float promedio;
        float mediana;
        int maximo;
        int minimo;
        int suma;

        void realizarOperaciones(int *arreglo, int len);
        int* ordenarArreglo(int *arreglo, int len);
};

#endif // OPERACIONES_H

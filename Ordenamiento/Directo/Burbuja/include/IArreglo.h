#ifndef IARREGLO_H
#define IARREGLO_H


class IArreglo
{
    public:
        virtual ~IArreglo() {};

        virtual void rellenarArreglo(int* arreglo, int len) = 0;

        virtual int* GetArreglo() = 0;

        virtual int GetLen() = 0;

    protected:

    private:
};

#endif

#ifndef ARREGLO_H
#define ARREGLO_H
#include "ArregloContenido.h"

class Arreglo : public ArregloContenido
{
    public:
        Arreglo(int len);
        ~Arreglo();

        int* GetArreglo();

    protected:

    private:
        int* arreglo;
};

#endif

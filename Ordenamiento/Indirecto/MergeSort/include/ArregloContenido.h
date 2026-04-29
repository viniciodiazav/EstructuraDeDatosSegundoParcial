#ifndef ARREGLOCONTENIDO_H
#define ARREGLOCONTENIDO_H
#include "IArreglo.h"


class ArregloContenido : public IArreglo
{
    public:
        ArregloContenido();
        ~ArregloContenido();

        void rellenarArreglo(int* arreglo, int len);

        int GetLen();

    protected:
        int len;

    private:
};

#endif

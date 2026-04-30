#ifndef IARREGLODATO_H
#define IARREGLODATO_H
#include "Dato.h"

class IArregloDato
{
    public:
        virtual ~IArregloDato() {};

        virtual void rellenarArreglo(Dato* arreglo, int len) = 0;

        virtual Dato* GetArreglo() = 0;

        virtual int GetLen() = 0;

    protected:

    private:
};

#endif

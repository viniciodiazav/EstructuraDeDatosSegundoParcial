#ifndef ARREGLODATO_H
#define ARREGLODATO_H
#include "ArregloDatoContenido.h"


class ArregloDato : public ArregloDatoContenido
{
    public:
        ArregloDato(int len);
        ~ArregloDato();

        Dato* GetArreglo();

    protected:

    private:
        Dato* arreglo;
};

#endif

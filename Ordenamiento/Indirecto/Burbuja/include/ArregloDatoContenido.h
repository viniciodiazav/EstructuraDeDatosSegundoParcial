#ifndef ARREGLODATOCONTENIDO_H
#define ARREGLODATOCONTENIDO_H
#include "IArregloDato.h"


class ArregloDatoContenido : public IArregloDato
{
    public:
        ArregloDatoContenido();
        ~ArregloDatoContenido();

        void rellenarArreglo(Dato* arreglo, int len);

        int GetLen();

    protected:
        int len;

    private:
};

#endif

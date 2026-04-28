#ifndef ILISTA_H
#define ILISTA_H
#include "Dato.h"


class ILista
{
    public:
        virtual ~ILista() {};

        virtual void agregarAlFinal(int n) = 0;
        virtual void agregarAlInicio(int n) = 0;

        virtual int eliminarUltimo() = 0;
        virtual int eliminarPrimero() = 0;
        virtual void borrarLista() = 0;

        virtual int GetLen() = 0;

        virtual int GetPrimerElemento() = 0;
        virtual int GetUltimoElemento() = 0;

        virtual bool esVacia() = 0;

    protected:

    private:
};

#endif

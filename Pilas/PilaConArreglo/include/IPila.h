#ifndef IPILA_H
#define IPILA_H
#include "Dato.h"


class IPila
{
    public:
        virtual ~IPila() {};

        virtual void agregarElemento(int n) = 0;

        virtual int eliminarElemento() = 0;

        virtual int GetPrimerElemento() = 0;
        virtual int GetLen() = 0;
        virtual int GetUltimaPosicion() = 0;

        virtual Dato* GetPila() = 0;

        virtual bool esVacia() = 0;
        virtual bool esLlena() = 0;

    protected:

    private:
};

#endif

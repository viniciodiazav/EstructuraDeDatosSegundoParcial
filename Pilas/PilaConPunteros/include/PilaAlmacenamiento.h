#ifndef PILAALMACENAMIENTO_H
#define PILAALMACENAMIENTO_H
#include "IPila.h"


class PilaAlmacenamiento : public IPila
{
    public:
        PilaAlmacenamiento();
        ~PilaAlmacenamiento();

        int GetLen();

        bool esVacia();

    protected:
        int len;

    private:
};

#endif

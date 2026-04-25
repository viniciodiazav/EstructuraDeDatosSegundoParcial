#ifndef COLAALMACENAMIENTO_H
#define COLAALMACENAMIENTO_H
#include "ICola.h"


class ColaAlmacenamiento : public ICola
{
    public:
        ColaAlmacenamiento();
        ~ColaAlmacenamiento();

        int GetLen();

        bool esVacia();

    protected:
        int len;

    private:
};

#endif

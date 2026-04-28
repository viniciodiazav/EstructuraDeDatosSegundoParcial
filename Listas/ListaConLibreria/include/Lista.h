#ifndef LISTA_H
#define LISTA_H
#include "ILista.h"
#include <list>


class Lista : public ILista
{
    public:
        Lista();
        ~Lista();

        void agregarAlFinal(int n);
        void agregarAlInicio(int n);

        int eliminarUltimo();
        int eliminarPrimero();
        void borrarLista();

        int GetLen();

        int GetPrimerElemento();
        int GetUltimoElemento();

        bool esVacia();

    protected:

    private:
        std::list<Dato> lista;
};

#endif

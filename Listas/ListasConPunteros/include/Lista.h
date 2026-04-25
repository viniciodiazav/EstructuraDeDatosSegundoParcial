#ifndef LISTA_H
#define LISTA_H
#include "ListaAlmacenamiento.h"
#include "Dato.h"


class Lista : public ListaAlmacenamiento
{
    public:
        Lista();
        ~Lista();

        void agregarAlFinal(int n);
        void agregarAlInicio(int n);
        void agregarAntesDelIndice(int i, int n);

        int eliminarUltimo();
        int eliminarPrimero();
        int eliminarEnElIndice(int i);
        void eliminarConcurrenciasDe(int n);
        void borrarLista();

        int buscarElemento(int n);

        Dato* GetPrimero();
        Dato* GetUltimo();

        int GetPrimerElemento();
        int GetUltimoElemento();

    protected:

    private:
        Dato* primero;
        Dato* ultimo;
};

#endif

#ifndef LISTA_H
#define LISTA_H
#include "ListaAlmacenamiento.h"


class Lista : public ListaAlmacenamiento
{
    public:
        Lista(int len);
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

        int GetLen();

        Dato* GetLista();

        int GetPrimerElemento();
        int GetUltimoElemento();

    protected:

    private:
        Dato* lista;
};

#endif

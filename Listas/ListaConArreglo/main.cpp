#include <iostream>
#include "ILista.h"
#include"Lista.h"
#include "ImprimirLista.h"

using namespace std;

int main()
{
    ILista* lista = new Lista(10);
    ImprimirLista imp = ImprimirLista();

    lista->agregarAlFinal(20);

    imp.imprimir(lista);

    lista->eliminarConcurrenciasDe(20);

    imp.imprimir(lista);

    return 0;
}

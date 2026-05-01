#include <iostream>
#include "Arreglo.h"
#include "Operaciones.h"

using namespace std;

int main()
{
    Arreglo a = Arreglo(8);
    Operaciones o = Operaciones(a.GetArrego(), a.GetLen());

    cout << "Promedio: " << o.GetPromedio() << endl;
    cout << "Mediana: " << o.getMediana() << endl;
    cout << "Maximo: " << o.GetMaximo() << endl;
    cout << "Minimo: " << o.GetMinimo() << endl;
    cout << "Suma: " << o.GetSuma() << endl;

    return 0;
}

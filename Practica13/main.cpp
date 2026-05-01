#include <iostream>
#include "AutoPOO.h"
#include "PersonaPOO.h"

using namespace std;

struct AutoPE {
    float precio;
    int anio;
};

struct PersonaPE {
    char nombre[30];
    char ap[30];
    char am[30];
    char genero;
    short edad;
};

void copyChars(char* d, char* o) {
    for (int i = 0; i < 30; i++) {
        if (o[i] == '\0') {
            d[i] == '\0';
            return;
        }
        d[i] = o[i];
    }
    d[29] = '\0';
}

int main()
{
    AutoPOO aPOO = AutoPOO(50000, 2025);
    PersonaPOO pPOO = PersonaPOO("Vinicio", "Diaz", "Avelar", 'M', 19);

    AutoPE aPE = AutoPE();
    aPE.precio = 39000;
    aPE.anio = 2023;
    PersonaPE pPE = PersonaPE();
    copyChars(pPE.nombre, "Isaac");
    copyChars(pPE.ap, "Oviedo");
    copyChars(pPE.am, "De la Cruz");
    pPE.genero = 'M';
    pPE.edad = 19;

    cout << "Tamano AutoPOO: " << sizeof(aPOO) << " bytes" << endl;
    cout << "Tamano PersonaPOO: " << sizeof(pPOO) << " bytes" << endl;
    cout << "Tamano AutoPE: " << sizeof(aPE) << " bytes" << endl;
    cout << "Tamano PersonaPE: " << sizeof(pPE) << " bytes" << endl;


    AutoPOO* listaAutos = new AutoPOO[5];

    for (int i = 0; i < 5; i++) {
        *(listaAutos + i) = AutoPOO(10000 * (i + 1), 2020 + i);
    }

    cout << listaAutos[3].GetAnio() << endl;


    PersonaPOO* listaPersonas = new PersonaPOO[3];

    char* nombreTemp = new char[30];
    for (int i = 0; i < 3; i ++) {
        cout << "Nombre persona " << i << ": ";
        cin >> nombreTemp;
        *(listaPersonas + i) = PersonaPOO(nombreTemp);
    }
    delete[] nombreTemp;
    nombreTemp = nullptr;

    cout << listaPersonas[1].GetNombre() << endl;

    return 0;
}

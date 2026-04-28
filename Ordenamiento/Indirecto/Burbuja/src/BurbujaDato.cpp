#include "BurbujaDato.h"

BurbujaDato::BurbujaDato() {}

BurbujaDato::~BurbujaDato() {}

void BurbujaDato::ordenar(Dato* arreglo, int len) {
    int temp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            Dato* pD_iz = (arreglo + j);
            Dato* pD_de = (arreglo + (j + 1));
            if (pD_iz->GetDato() > pD_de->GetDato()) {
                temp = pD_iz->GetDato();
                pD_iz->SetDato(pD_de->GetDato());
                pD_de->SetDato(temp);
            }
        }
    }
}


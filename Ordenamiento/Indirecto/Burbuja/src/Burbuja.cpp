#include "Burbuja.h"

Burbuja::Burbuja() {}

Burbuja::~Burbuja() {}

void Burbuja::ordenar(int* arreglo, int len) {
    int temp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (*(arreglo + j) > *(arreglo + (j + 1))) {
                temp = *(arreglo + j);
                *(arreglo + j) = *(arreglo + (j + 1));
                *(arreglo + (j + 1)) = temp;
            }
        }
    }
}

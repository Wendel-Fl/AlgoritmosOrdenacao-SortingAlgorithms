#include <stdio.h>
#include "algoritmos.h"

void bubbleSort(int *vet, int length) {
   for (int i = 0; i < length; i++) {
      for (int j = 0; j < (length - 1); j++) {
         if (vet[j] > vet[j + 1]) {
            int aux = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = aux;
         }
      }
   }
}

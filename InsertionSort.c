#include <stdio.h>
#include "algoritmos.h"

void insertionSort(int *vet, int length) {
   
   for (int i = 1; i < length; i++) {
      int aux = vet[i];
      int j = i - 1;

      while (j >= 0 && vet[j] > aux) {
         vet[j + 1] = vet[j];
         j = j - 1;
      }
      vet[j + 1] = aux;
   }
}
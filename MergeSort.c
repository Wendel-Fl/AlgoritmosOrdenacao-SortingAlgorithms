#include <stdio.h>
#include "algoritmos.h"

void mergeSort(int *vet, int length) {
   mergeSortRecursion(vet, 0, length - 1);
}

void mergeSortRecursion(int *vet, int inicio, int fim) {
   if (inicio < fim) {
      int meio = inicio + (fim - inicio) / 2;

      mergeSortRecursion(vet, inicio, meio);
      mergeSortRecursion(vet, meio + 1, fim);

      mergeSortedArrays(vet, inicio, meio, fim);
   }
}

void mergeSortedArrays(int *vet, int inicio, int meio, int fim) {
   int inicioLength = meio - inicio + 1;
   int fimLength = fim - meio;

   int auxLeft[inicioLength];
   int auxRight[fimLength];

   int i, j, k;

   for (i = 0; i < inicioLength; i++)
      auxLeft[i] = vet[inicio + i];

   for (i = 0; i < fimLength; i++)
      auxRight[i] = vet[meio + 1 + i];

   for (i = 0, j = 0, k = inicio; k <= fim; k++) {
      if ((i < inicioLength) && (j >= fimLength || auxLeft[i] <= auxRight[j])) {
         vet[k] = auxLeft[i];
         i++;
      } else {
         vet[k] = auxRight[j];
         j++;
      }
   }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algoritmos.h"

void swap(int *x, int *y) {
   int aux = *x;
   *x = *y;
   *y = aux;
}

void quickSort(int *vet, int length) {
   srand(time(NULL));
   quickSortRecursion(vet, 0, length - 1);
}

void quickSortRecursion(int *vet, int primeiro, int ultimo) {
   if (primeiro < ultimo)
   {
      int pivotIndex = partition(vet, primeiro, ultimo);
      quickSortRecursion(vet, primeiro, pivotIndex - 1); // Engloba o primeiro elemento até pivotIndex - 1
      quickSortRecursion(vet, pivotIndex + 1, ultimo);   // Engloba de pivotIndex + 1 até o último elemento
   }
}

int partition(int *vet, int primeiro, int ultimo) {
   int pivotIndex = primeiro + (rand() % (ultimo - primeiro));

   if (pivotIndex != ultimo)
      swap(&vet[pivotIndex], &vet[ultimo]);

   int pivotValue = vet[ultimo]; // ultimo elemento

   int i = primeiro; // i observa o primeiro elemento

   for (int j = primeiro; j < ultimo; j++)
   {

      if (vet[j] <= pivotValue)
      {
         swap(&vet[i], &vet[j]);
         i++;
      }
   }

   swap(&vet[i], &vet[ultimo]);

   return i;
}
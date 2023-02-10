#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

void radixSort(int *vet, int length) {
   int i, *bucket, maior, menor, exp = 1;
   maior = menor = vet[0];
   
   for (i = 1; i < length; i++) {
      if (vet[i] > maior)
         maior = vet[i];
      if (vet[i] < menor)
         menor = vet[i];
   }
   
   while (maior / exp > 0) {
      bucket = (int *)calloc(10, sizeof(int));
      for (i = 0; i < length; i++)
         bucket[(vet[i] / exp) % 10]++;
      for (i = 1; i < 10; i++)
         bucket[i] += bucket[i - 1];
      int *vetAux = (int *)malloc(length * sizeof(int));
      for (i = length - 1; i >= 0; i--)
         vetAux[--bucket[(vet[i] / exp) % 10]] = vet[i];
      for (i = 0; i < length; i++)
         vet[i] = vetAux[i];
      free(vetAux);
      free(bucket);
      exp *= 10;
   }
}
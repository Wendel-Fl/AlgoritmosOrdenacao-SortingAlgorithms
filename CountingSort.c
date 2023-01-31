#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

void countingSort(int *vet, int length) {
   int i, j;
   int max = vet[0];
   
   for (i = 1; i < length; i++) {
      if (vet[i] > max) {
         max = vet[i];
      }
   }
   
   int* count = (int*) malloc((max + 1) * sizeof(int));
   
   for (i = 0; i <= max; i++) {
      count[i] = 0;
   }
   
   for (i = 0; i < length; i++) {
      count[vet[i]]++;
   }
   
   for (i = 0, j = 0; i <= max; i++) {
      while (count[i] > 0) {
         vet[j] = i;
         j++;
         count[i]--;
      }
   }

   free(count);
}
#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"

void bucketSort(int *vet, int length) {
   int i, j;
   int max = vet[0];
   int min = vet[0];

   // Encontra o maior e o menor elemento
   for (i = 1; i < length; i++) {
      if (vet[i] > max) {
         max = vet[i];
      }
      if (vet[i] < min) {
         min = vet[i];
      }
   }

   // O tamanho e o numero dos buckets eh calculado com base no intervalo entre o maior e o menor elemento
   int bucketSize = (max - min) / length + 1;
   int bucketCount = (max - min) / bucketSize + 1;

   // Armazena os buckets
   int *bucket = (int *)calloc(bucketCount, sizeof(int));

   // Armazena o numero de elementos em cada bucket
   for (i = 0; i < length; i++) {
      int bucketIndex = (vet[i] - min) / bucketSize;
      bucket[bucketIndex]++;
   }

   /*
      os elementos armazenados no bucket são concatenados
      de volta no vetor original para obter o resultado ordenado
   */
   int k = 0; // indice para mapear a posicao atual do vetor original
   for (i = 0; i < bucketCount; i++) {
      for (j = 0; j < bucket[i]; j++) {
         vet[k++] = min + i * bucketSize;
      }
   }

   free(bucket);
}

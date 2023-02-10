#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algoritmos.h"
#define NUM_VETORES 40
#define NUM_ALGORITMOS 8

void geraVetores(int *vet, int length);

int main() {
   // Vetor de strings com os nomes dos algoritmos para serem impressos
   const char* nomeAlgoritmos[8] = {"Insertion Sort", "Selection Sort", "Bubble Sort", "Merge Sort", "Quick Sort", "Radix Sort", "Counting Sort", "Bucket Sort"};

   // Vetor de ponteiros para funções que recebem um vetor e o tamanho do vetor   
   void (*algoritmos[8])(int* vetor, int tamanho) = {insertionSort, selectionSort, bubbleSort, mergeSort, quickSort, radixSort, countingSort, bucketSort};
   
   // Vetor com os tamanhos dos vetores que serão ordenados
   int tamanhos[] = {100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
   
   // Matriz que armazena os tempos de execução de cada algoritmo para cada tamanho de vetor
   double temposAlgoritmos[NUM_ALGORITMOS][sizeof(tamanhos)/sizeof(int)];

   // Vetor que percorre os tamanhos definidos
   for (int i = 0; i < sizeof(tamanhos)/sizeof(int); i++) {
      int tamanho = tamanhos[i];
      
      // Vetor que percorre os algoritmos para cada tamanho definido
      for (int j = 0; j < NUM_ALGORITMOS; j++) {
         
         // Vetor que percorre os 40 vetores para cada algoritmo e tamanho definido
         for (int k = 0; k < NUM_VETORES; k++) {
               int* vetor = (int*) malloc(tamanho * sizeof(int));
               geraVetores(vetor, tamanho);
               clock_t start = clock();
               algoritmos[j](vetor, tamanho);
               clock_t end = clock();
               temposAlgoritmos[j][i] += ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
               free(vetor);
         }
         temposAlgoritmos[j][i] = temposAlgoritmos[j][i] / NUM_VETORES;
      }
   }

   // Impressão dos tempos de execução de cada algoritmo para cada tamanho de vetor
   for (int j = 0; j < NUM_ALGORITMOS; j++) {
      printf("%s:\n", nomeAlgoritmos[j]);
      for (int i = 0; i < sizeof(tamanhos)/sizeof(int); i++) {
         printf("Tempo gasto para ordenar 40 vetores de %d elementos: %.3f ms\n", tamanhos[i], temposAlgoritmos[j][i]);
      }
      printf("\n");
   }

   return 0;
}

void geraVetores(int *vet, int length) {
   srand(time(NULL));

   for (int i = 0; i < length; i++) {
      vet[i] = rand() % 15000;
   }     
}
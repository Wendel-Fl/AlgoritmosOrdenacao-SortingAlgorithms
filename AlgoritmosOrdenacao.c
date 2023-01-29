#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_VETORES 40
#define NUM_ALGORITMOS 8

void geraVetores(int *vet, int length);
void insertionSort(int *vet, int length);
void selectionSort(int *vet, int length);
void bubbleSort(int *vet, int length);
void mergeSort(int *vet, int length);
void mergeSortRecursion(int *vet, int inicio, int fim);
void mergeSortedArrays(int *vet, int inicio, int meio, int fim);
void swap(int *x, int *y);
void quickSort(int *vet, int length);
void quickSortRecursion(int *vet, int primeiro, int ultimo);
int partition(int *vet, int primeiro, int ultimo);
void radixSort(int *vet, int length);
void countingSort(int *vet, int length);
void bucketSort(int *vet, int n);

int main() {
   // Vetor de strings com os nomes dos algoritmos para serem impressos
   const char* nomeAlgoritmos[8] = {"Insertion Sort", "Selection Sort", "Bubble Sort", "Merge Sort", "Quick Sort", "Radix Sort", "Counting Sort", "Bucket Sort"};

   // Vetor de ponteiros para funções que recebem um vetor e o tamanho do vetor   
   void (*algoritmos[8])(int* vetor, int tamanho) = {insertionSort, selectionSort, bubbleSort, mergeSort, quickSort, radixSort, countingSort, bucketSort};
   
   // Vetor com os tamanhos dos vetores que serão ordenados
   int tamanhos[] = {250, 500, 750, 1000, 2500, 7500, 10000, 15000};
   
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

void selectionSort(int *vet, int lenght) {

  for(int i = 0; i < (lenght-1); i++) {
    int min = i;

    for(int j = (i+1); j < lenght; j++) {
      if(vet[j] < vet[min])
        min = j;
    }

    if(vet[i] != vet[min]) {
      int aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
  }

}

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
      int indicePivo = partition(vet, primeiro, ultimo);
      quickSortRecursion(vet, primeiro, indicePivo - 1); // Engloba o primeiro elemento até indicePivo - 1
      quickSortRecursion(vet, indicePivo + 1, ultimo);   // Engloba de indicePivo + 1 até o último elemento
   }
}

int partition(int *vet, int primeiro, int ultimo) {
   int indicePivo = primeiro + (rand() % (ultimo - primeiro));

   if (indicePivo != ultimo)
      swap(&vet[indicePivo], &vet[ultimo]);

   int valorPivo = vet[ultimo]; // ultimo elemento

   int i = primeiro; // i observa o primeiro elemento

   for (int j = primeiro; j < ultimo; j++)
   {

      if (vet[j] <= valorPivo)
      {
         swap(&vet[i], &vet[j]);
         i++;
      }
   }

   swap(&vet[i], &vet[ultimo]);

   return i;
}

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
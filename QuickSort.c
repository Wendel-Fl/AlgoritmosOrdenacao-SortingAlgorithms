#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void swap(int *x, int *y);
void quickSort(int *v, int length);
void quickSortRecursion(int *v, int primeiro, int ultimo);
int partition(int *v, int primeiro, int ultimo);
void readVector(int *v, int length);
void printVector(int *v, int length);

int main() {
   int i;
   int v1[MAX], v2[MAX], v3[MAX], v4[MAX], v5[MAX], v6[MAX], v7[MAX], v8[MAX], v9[MAX], v10[MAX],
      v11[MAX], v12[MAX], v13[MAX], v14[MAX], v15[MAX], v16[MAX], v17[MAX], v18[MAX], v19[MAX], v20[MAX],
      v21[MAX], v22[MAX], v23[MAX], v24[MAX], v25[MAX], v26[MAX], v27[MAX], v28[MAX], v29[MAX], v30[MAX],
      v31[MAX], v32[MAX], v33[MAX], v34[MAX], v35[MAX], v36[MAX], v37[MAX], v38[MAX], v39[MAX], v40[MAX];

   srand(time(NULL));

   readVector(v1, MAX);
   readVector(v2, MAX);
   readVector(v3, MAX);
   readVector(v4, MAX);
   readVector(v5, MAX);
   readVector(v6, MAX);
   readVector(v7, MAX);
   readVector(v8, MAX);
   readVector(v9, MAX);
   readVector(v10, MAX);
   readVector(v11, MAX);
   readVector(v12, MAX);
   readVector(v13, MAX);
   readVector(v14, MAX);
   readVector(v15, MAX);
   readVector(v16, MAX);
   readVector(v17, MAX);
   readVector(v18, MAX);
   readVector(v19, MAX);
   readVector(v20, MAX);
   readVector(v21, MAX);
   readVector(v22, MAX);
   readVector(v23, MAX);
   readVector(v24, MAX);
   readVector(v25, MAX);
   readVector(v26, MAX);
   readVector(v27, MAX);
   readVector(v28, MAX);
   readVector(v29, MAX);
   readVector(v30, MAX);
   readVector(v31, MAX);
   readVector(v32, MAX);
   readVector(v33, MAX);
   readVector(v34, MAX);
   readVector(v35, MAX);
   readVector(v36, MAX);
   readVector(v37, MAX);
   readVector(v38, MAX);
   readVector(v39, MAX);
   readVector(v40, MAX);

   quickSort(v1, MAX);
   quickSort(v2, MAX);
   quickSort(v3, MAX);
   quickSort(v4, MAX);
   quickSort(v5, MAX);
   quickSort(v6, MAX);
   quickSort(v7, MAX);
   quickSort(v8, MAX);
   quickSort(v9, MAX);
   quickSort(v10, MAX);
   quickSort(v11, MAX);
   quickSort(v12, MAX);
   quickSort(v13, MAX);
   quickSort(v14, MAX);
   quickSort(v15, MAX);
   quickSort(v16, MAX);
   quickSort(v17, MAX);
   quickSort(v18, MAX);
   quickSort(v19, MAX);
   quickSort(v20, MAX);
   quickSort(v21, MAX);
   quickSort(v22, MAX);
   quickSort(v23, MAX);
   quickSort(v24, MAX);
   quickSort(v25, MAX);
   quickSort(v26, MAX);
   quickSort(v27, MAX);
   quickSort(v28, MAX);
   quickSort(v29, MAX);
   quickSort(v30, MAX);
   quickSort(v31, MAX);
   quickSort(v32, MAX);
   quickSort(v33, MAX);
   quickSort(v34, MAX);
   quickSort(v35, MAX);
   quickSort(v36, MAX);
   quickSort(v37, MAX);
   quickSort(v38, MAX);
   quickSort(v39, MAX);
   quickSort(v40, MAX);

   printVector(v1, MAX);
   printVector(v2, MAX);
   printVector(v3, MAX);
   printVector(v4, MAX);
   printVector(v5, MAX);
   printVector(v6, MAX);
   printVector(v7, MAX);
   printVector(v8, MAX);
   printVector(v9, MAX);
   printVector(v10, MAX);
   printVector(v11, MAX);
   printVector(v12, MAX);
   printVector(v13, MAX);
   printVector(v14, MAX);
   printVector(v15, MAX);
   printVector(v16, MAX);
   printVector(v17, MAX);
   printVector(v18, MAX);
   printVector(v19, MAX);
   printVector(v20, MAX);
   printVector(v21, MAX);
   printVector(v22, MAX);
   printVector(v23, MAX);
   printVector(v24, MAX);
   printVector(v25, MAX);
   printVector(v26, MAX);
   printVector(v27, MAX);
   printVector(v28, MAX);
   printVector(v29, MAX);
   printVector(v30, MAX);
   printVector(v31, MAX);
   printVector(v32, MAX);
   printVector(v33, MAX);
   printVector(v34, MAX);
   printVector(v35, MAX);
   printVector(v36, MAX);
   printVector(v37, MAX);
   printVector(v38, MAX);
   printVector(v39, MAX);
   printVector(v40, MAX);

   return 0;
}

void swap(int *x, int *y) {
   int aux = *x;
   *x = *y;
   *y = aux;
}

void quickSort(int vet[], int length) {
   srand(time(NULL));
   quickSortRecursion(vet, 0, length - 1);
}

void quickSortRecursion(int vet[], int primeiro, int ultimo) {
   if (primeiro < ultimo)
   {
      int pivotIndex = partition(vet, primeiro, ultimo);
      quickSortRecursion(vet, primeiro, pivotIndex - 1); // Engloba o primeiro elemento até pivotIndex - 1
      quickSortRecursion(vet, pivotIndex + 1, ultimo);   // Engloba de pivotIndex + 1 até o último elemento
   }
}

int partition(int vet[], int primeiro, int ultimo) {
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

void readVector(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 99;
   }
}

void printVector(int *v, int length) {
   for (int i = 0; i < length; i++) {
      printf("v[%d] = %d\n", i, v[i]);
   }
   printf("\n\n");
}
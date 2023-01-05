#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int max(int *v, int length);
int min(int *v, int length);
void countingSort(int *v, int length);
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

   countingSort(v1, MAX);
   countingSort(v2, MAX);
   countingSort(v3, MAX);
   countingSort(v4, MAX);
   countingSort(v5, MAX);
   countingSort(v6, MAX);
   countingSort(v7, MAX);
   countingSort(v8, MAX);
   countingSort(v9, MAX);
   countingSort(v10, MAX);
   countingSort(v11, MAX);
   countingSort(v12, MAX);
   countingSort(v13, MAX);
   countingSort(v14, MAX);
   countingSort(v15, MAX);
   countingSort(v16, MAX);
   countingSort(v17, MAX);
   countingSort(v18, MAX);
   countingSort(v19, MAX);
   countingSort(v20, MAX);
   countingSort(v21, MAX);
   countingSort(v22, MAX);
   countingSort(v23, MAX);
   countingSort(v24, MAX);
   countingSort(v25, MAX);
   countingSort(v26, MAX);
   countingSort(v27, MAX);
   countingSort(v28, MAX);
   countingSort(v29, MAX);
   countingSort(v30, MAX);
   countingSort(v31, MAX);
   countingSort(v32, MAX);
   countingSort(v33, MAX);
   countingSort(v34, MAX);
   countingSort(v35, MAX);
   countingSort(v36, MAX);
   countingSort(v37, MAX);
   countingSort(v38, MAX);
   countingSort(v39, MAX);
   countingSort(v40, MAX);

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

int max(int *v, int length) {
   int max = v[0];
   for (int i = 1; i < length; i++)
      if (v[i] > max)
         max = v[i];
   return max;
}

int min(int *v, int length) {
   int min = v[0];
   for (int i = 1; i < length; i++)
      if (v[i] < min)
         min = v[i];
   return min;
}

// função que ordena o vor usando o algoritmo Counting Sort
void countingSort(int *v, int length) {
   int i, j, k;
   int maxElement = max(v, length);
   int minElement = min(v, length);
   int range = maxElement - minElement + 1;
   int count[range];
   int output[length];

   // inicializa o vor count com 0
   for (i = 0; i < range; i++)
      count[i] = 0;

   // armazena a frequência de cada elemento no vor count
   for (i = 0; i < length; i++)
      count[v[i] - minElement]++;

   // armazena a soma das frequências anteriores no vor count
   for (i = 1; i < range; i++)
      count[i] += count[i - 1];

   // armazena os elementos no vor output
   for (i = length - 1; i >= 0; i--) {
      output[count[v[i] - minElement] - 1] = v[i];
      count[v[i] - minElement]--;
   }

   // copia os elementos do vor output para o vor v
   for (i = 0; i < length; i++)
      v[i] = output[i];
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
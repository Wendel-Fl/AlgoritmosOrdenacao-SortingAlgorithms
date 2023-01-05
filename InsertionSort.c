#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void insertionSort(int *v, int length);
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

   insertionSort(v1, MAX);
   insertionSort(v2, MAX);
   insertionSort(v3, MAX);
   insertionSort(v4, MAX);
   insertionSort(v5, MAX);
   insertionSort(v6, MAX);
   insertionSort(v7, MAX);
   insertionSort(v8, MAX);
   insertionSort(v9, MAX);
   insertionSort(v10, MAX);
   insertionSort(v11, MAX);
   insertionSort(v12, MAX);
   insertionSort(v13, MAX);
   insertionSort(v14, MAX);
   insertionSort(v15, MAX);
   insertionSort(v16, MAX);
   insertionSort(v17, MAX);
   insertionSort(v18, MAX);
   insertionSort(v19, MAX);
   insertionSort(v20, MAX);
   insertionSort(v21, MAX);
   insertionSort(v22, MAX);
   insertionSort(v23, MAX);
   insertionSort(v24, MAX);
   insertionSort(v25, MAX);
   insertionSort(v26, MAX);
   insertionSort(v27, MAX);
   insertionSort(v28, MAX);
   insertionSort(v29, MAX);
   insertionSort(v30, MAX);
   insertionSort(v31, MAX);
   insertionSort(v32, MAX);
   insertionSort(v33, MAX);
   insertionSort(v34, MAX);
   insertionSort(v35, MAX);
   insertionSort(v36, MAX);
   insertionSort(v37, MAX);
   insertionSort(v38, MAX);
   insertionSort(v39, MAX);
   insertionSort(v40, MAX);

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

void insertionSort(int *v, int length) {
   
   for (int i = 1; i < length; i++) {
      int aux = v[i];
      int j = i - 1;

      while (j >= 0 && v[j] > aux) {
         v[j + 1] = v[j];
         j = j - 1;
      }
      v[j + 1] = aux;
   }
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
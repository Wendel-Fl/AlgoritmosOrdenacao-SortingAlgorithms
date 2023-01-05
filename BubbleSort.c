#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void bubbleSort(int *v, int length);
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

   bubbleSort(v1, MAX);
   bubbleSort(v2, MAX);
   bubbleSort(v3, MAX);
   bubbleSort(v4, MAX);
   bubbleSort(v5, MAX);
   bubbleSort(v6, MAX);
   bubbleSort(v7, MAX);
   bubbleSort(v8, MAX);
   bubbleSort(v9, MAX);
   bubbleSort(v10, MAX);
   bubbleSort(v11, MAX);
   bubbleSort(v12, MAX);
   bubbleSort(v13, MAX);
   bubbleSort(v14, MAX);
   bubbleSort(v15, MAX);
   bubbleSort(v16, MAX);
   bubbleSort(v17, MAX);
   bubbleSort(v18, MAX);
   bubbleSort(v19, MAX);
   bubbleSort(v20, MAX);
   bubbleSort(v21, MAX);
   bubbleSort(v22, MAX);
   bubbleSort(v23, MAX);
   bubbleSort(v24, MAX);
   bubbleSort(v25, MAX);
   bubbleSort(v26, MAX);
   bubbleSort(v27, MAX);
   bubbleSort(v28, MAX);
   bubbleSort(v29, MAX);
   bubbleSort(v30, MAX);
   bubbleSort(v31, MAX);
   bubbleSort(v32, MAX);
   bubbleSort(v33, MAX);
   bubbleSort(v34, MAX);
   bubbleSort(v35, MAX);
   bubbleSort(v36, MAX);
   bubbleSort(v37, MAX);
   bubbleSort(v38, MAX);
   bubbleSort(v39, MAX);
   bubbleSort(v40, MAX);

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

void bubbleSort(int *v, int length) {
   for (int i = 0; i < length; i++) {
      for (int j = 0; j < (length - 1); j++) {
         if (v[j] > v[j + 1]) {
            int aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
         }
      }
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
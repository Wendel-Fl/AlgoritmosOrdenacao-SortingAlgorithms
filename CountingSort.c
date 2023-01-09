#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX1 100
#define MAX2 1000
#define MAX3 10000

int max(int *v, int length);
int min(int *v, int length);
void countingSort(int *v, int length);
void readVector100(int *v, int length);
void readVector1000(int *v, int length);
void readVector10000(int *v, int length);
void printVector(int *v, int length);

int main() {
   int i;
   
   int v1[MAX1], v2[MAX1], v3[MAX1], v4[MAX1], v5[MAX1], v6[MAX1], v7[MAX1], v8[MAX1], v9[MAX1], v10[MAX1],
      v11[MAX1], v12[MAX1], v13[MAX1], v14[MAX1], v15[MAX1], v16[MAX1], v17[MAX1], v18[MAX1], v19[MAX1], v20[MAX1],
      v21[MAX1], v22[MAX1], v23[MAX1], v24[MAX1], v25[MAX1], v26[MAX1], v27[MAX1], v28[MAX1], v29[MAX1], v30[MAX1],
      v31[MAX1], v32[MAX1], v33[MAX1], v34[MAX1], v35[MAX1], v36[MAX1], v37[MAX1], v38[MAX1], v39[MAX1], v40[MAX1];
   
   int v41[MAX2], v42[MAX2], v43[MAX2], v44[MAX2], v45[MAX2], v46[MAX2], v47[MAX2], v48[MAX2], v49[MAX2], v50[MAX2],
      v51[MAX2], v52[MAX2], v53[MAX2], v54[MAX2], v55[MAX2], v56[MAX2], v57[MAX2], v58[MAX2], v59[MAX2], v60[MAX2],
      v61[MAX2], v62[MAX2], v63[MAX2], v64[MAX2], v65[MAX2], v66[MAX2], v67[MAX2], v68[MAX2], v69[MAX2], v70[MAX2],
      v71[MAX2], v72[MAX2], v73[MAX2], v74[MAX2], v75[MAX2], v76[MAX2], v77[MAX2], v78[MAX2], v79[MAX2], v80[MAX2];
   
   int v81[MAX3], v82[MAX3], v83[MAX3], v84[MAX3], v85[MAX3], v86[MAX3], v87[MAX3], v88[MAX3], v89[MAX3], v90[MAX3],
      v91[MAX3], v92[MAX3], v93[MAX3], v94[MAX3], v95[MAX3], v96[MAX3], v97[MAX3], v98[MAX3], v99[MAX3], v100[MAX3],
      v101[MAX3], v102[MAX3], v103[MAX3], v104[MAX3], v105[MAX3], v106[MAX3], v107[MAX3], v108[MAX3], v109[MAX3], v110[MAX3],
      v111[MAX3], v112[MAX3], v113[MAX3], v114[MAX3], v115[MAX3], v116[MAX3], v117[MAX3], v118[MAX3], v119[MAX3], v120[MAX3];

   srand(time(NULL));

   readVector100(v1, MAX1);
   readVector100(v2, MAX1);
   readVector100(v3, MAX1);
   readVector100(v4, MAX1);
   readVector100(v5, MAX1);
   readVector100(v6, MAX1);
   readVector100(v7, MAX1);
   readVector100(v8, MAX1);
   readVector100(v9, MAX1);
   readVector100(v10, MAX1);
   readVector100(v11, MAX1);
   readVector100(v12, MAX1);
   readVector100(v13, MAX1);
   readVector100(v14, MAX1);
   readVector100(v15, MAX1);
   readVector100(v16, MAX1);
   readVector100(v17, MAX1);
   readVector100(v18, MAX1);
   readVector100(v19, MAX1);
   readVector100(v20, MAX1);
   readVector100(v21, MAX1);
   readVector100(v22, MAX1);
   readVector100(v23, MAX1);
   readVector100(v24, MAX1);
   readVector100(v25, MAX1);
   readVector100(v26, MAX1);
   readVector100(v27, MAX1);
   readVector100(v28, MAX1);
   readVector100(v29, MAX1);
   readVector100(v30, MAX1);
   readVector100(v31, MAX1);
   readVector100(v32, MAX1);
   readVector100(v33, MAX1);
   readVector100(v34, MAX1);
   readVector100(v35, MAX1);
   readVector100(v36, MAX1);
   readVector100(v37, MAX1);
   readVector100(v38, MAX1);
   readVector100(v39, MAX1);
   readVector100(v40, MAX1);

   readVector1000(v41, MAX2);
   readVector1000(v42, MAX2);
   readVector1000(v43, MAX2);
   readVector1000(v44, MAX2);
   readVector1000(v45, MAX2);
   readVector1000(v46, MAX2);
   readVector1000(v47, MAX2);
   readVector1000(v48, MAX2);
   readVector1000(v49, MAX2);
   readVector1000(v50, MAX2);
   readVector1000(v51, MAX2);
   readVector1000(v52, MAX2);
   readVector1000(v53, MAX2);
   readVector1000(v54, MAX2);
   readVector1000(v55, MAX2);
   readVector1000(v56, MAX2);
   readVector1000(v57, MAX2);
   readVector1000(v58, MAX2);
   readVector1000(v59, MAX2);
   readVector1000(v60, MAX2);
   readVector1000(v61, MAX2);
   readVector1000(v62, MAX2);
   readVector1000(v63, MAX2);
   readVector1000(v64, MAX2);
   readVector1000(v65, MAX2);
   readVector1000(v66, MAX2);
   readVector1000(v67, MAX2);
   readVector1000(v68, MAX2);
   readVector1000(v69, MAX2);
   readVector1000(v70, MAX2);
   readVector1000(v71, MAX2);
   readVector1000(v72, MAX2);
   readVector1000(v73, MAX2);
   readVector1000(v74, MAX2);
   readVector1000(v75, MAX2);
   readVector1000(v76, MAX2);
   readVector1000(v77, MAX2);
   readVector1000(v78, MAX2);
   readVector1000(v79, MAX2);
   readVector1000(v80, MAX2);

   countingSort(v1, MAX1);
   countingSort(v2, MAX1);
   countingSort(v3, MAX1);
   countingSort(v4, MAX1);
   countingSort(v5, MAX1);
   countingSort(v6, MAX1);
   countingSort(v7, MAX1);
   countingSort(v8, MAX1);
   countingSort(v9, MAX1);
   countingSort(v10, MAX1);
   countingSort(v11, MAX1);
   countingSort(v12, MAX1);
   countingSort(v13, MAX1);
   countingSort(v14, MAX1);
   countingSort(v15, MAX1);
   countingSort(v16, MAX1);
   countingSort(v17, MAX1);
   countingSort(v18, MAX1);
   countingSort(v19, MAX1);
   countingSort(v20, MAX1);
   countingSort(v21, MAX1);
   countingSort(v22, MAX1);
   countingSort(v23, MAX1);
   countingSort(v24, MAX1);
   countingSort(v25, MAX1);
   countingSort(v26, MAX1);
   countingSort(v27, MAX1);
   countingSort(v28, MAX1);
   countingSort(v29, MAX1);
   countingSort(v30, MAX1);
   countingSort(v31, MAX1);
   countingSort(v32, MAX1);
   countingSort(v33, MAX1);
   countingSort(v34, MAX1);
   countingSort(v35, MAX1);
   countingSort(v36, MAX1);
   countingSort(v37, MAX1);
   countingSort(v38, MAX1);
   countingSort(v39, MAX1);
   countingSort(v40, MAX1);

   countingSort(v41, MAX2);
   countingSort(v42, MAX2);
   countingSort(v43, MAX2);
   countingSort(v44, MAX2);
   countingSort(v45, MAX2);
   countingSort(v46, MAX2);
   countingSort(v47, MAX2);
   countingSort(v48, MAX2);
   countingSort(v49, MAX2);
   countingSort(v50, MAX2);
   countingSort(v51, MAX2);
   countingSort(v52, MAX2);
   countingSort(v53, MAX2);
   countingSort(v54, MAX2);
   countingSort(v55, MAX2);
   countingSort(v56, MAX2);
   countingSort(v57, MAX2);
   countingSort(v58, MAX2);
   countingSort(v59, MAX2);
   countingSort(v60, MAX2);
   countingSort(v61, MAX2);
   countingSort(v62, MAX2);
   countingSort(v63, MAX2);
   countingSort(v64, MAX2);
   countingSort(v65, MAX2);
   countingSort(v66, MAX2);
   countingSort(v67, MAX2);
   countingSort(v68, MAX2);
   countingSort(v69, MAX2);
   countingSort(v70, MAX2);
   countingSort(v71, MAX2);
   countingSort(v72, MAX2);
   countingSort(v73, MAX2);
   countingSort(v74, MAX2);
   countingSort(v75, MAX2);
   countingSort(v76, MAX2);
   countingSort(v77, MAX2);
   countingSort(v78, MAX2);
   countingSort(v79, MAX2);
   countingSort(v80, MAX2);

   printVector(v1, MAX1);
   printVector(v2, MAX1);
   printVector(v3, MAX1);
   printVector(v4, MAX1);
   printVector(v5, MAX1);
   printVector(v6, MAX1);
   printVector(v7, MAX1);
   printVector(v8, MAX1);
   printVector(v9, MAX1);
   printVector(v10, MAX1);
   printVector(v11, MAX1);
   printVector(v12, MAX1);
   printVector(v13, MAX1);
   printVector(v14, MAX1);
   printVector(v15, MAX1);
   printVector(v16, MAX1);
   printVector(v17, MAX1);
   printVector(v18, MAX1);
   printVector(v19, MAX1);
   printVector(v20, MAX1);
   printVector(v21, MAX1);
   printVector(v22, MAX1);
   printVector(v23, MAX1);
   printVector(v24, MAX1);
   printVector(v25, MAX1);
   printVector(v26, MAX1);
   printVector(v27, MAX1);
   printVector(v28, MAX1);
   printVector(v29, MAX1);
   printVector(v30, MAX1);
   printVector(v31, MAX1);
   printVector(v32, MAX1);
   printVector(v33, MAX1);
   printVector(v34, MAX1);
   printVector(v35, MAX1);
   printVector(v36, MAX1);
   printVector(v37, MAX1);
   printVector(v38, MAX1);
   printVector(v39, MAX1);
   printVector(v40, MAX1);

   printVector(v41, MAX2);
   printVector(v42, MAX2);
   printVector(v43, MAX2);
   printVector(v44, MAX2);
   printVector(v45, MAX2);
   printVector(v46, MAX2);
   printVector(v47, MAX2);
   printVector(v48, MAX2);
   printVector(v49, MAX2);
   printVector(v50, MAX2);
   printVector(v51, MAX2);
   printVector(v52, MAX2);
   printVector(v53, MAX2);
   printVector(v54, MAX2);
   printVector(v55, MAX2);
   printVector(v56, MAX2);
   printVector(v57, MAX2);
   printVector(v58, MAX2);
   printVector(v59, MAX2);
   printVector(v60, MAX2);
   printVector(v61, MAX2);
   printVector(v62, MAX2);
   printVector(v63, MAX2);
   printVector(v64, MAX2);
   printVector(v65, MAX2);
   printVector(v66, MAX2);
   printVector(v67, MAX2);
   printVector(v68, MAX2);
   printVector(v69, MAX2);
   printVector(v70, MAX2);
   printVector(v71, MAX2);
   printVector(v72, MAX2);
   printVector(v73, MAX2);
   printVector(v74, MAX2);
   printVector(v75, MAX2);
   printVector(v76, MAX2);
   printVector(v77, MAX2);
   printVector(v78, MAX2);
   printVector(v79, MAX2);
   printVector(v80, MAX2);

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
   int i;
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

void readVector100(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 99;
   }
}

void readVector1000(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 999;
   }
}

void readVector10000(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 9999;
   }
}

void printVector(int *v, int length) {
   for (int i = 0; i < length; i++) {
      printf("v[%d] = %d\n", i, v[i]);
   }
   printf("\n\n");
}
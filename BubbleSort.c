#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#define MAX1 12500
#define MAX2 25000
#define MAX3 37500
#define MAX4 50000
#define MAX5 62500
#define MAX6 75000
#define MAX7 87500
#define MAX8 100000
/*
   Minha máquina consegue ler ate 1.000.000
   com 10.000.000 dá segmentation fault;
   É assim que é pra fazer?
      cheio de funções
      funções repetidas
   Como eu faço pra medir o tempo de execução
   das funções?
*/

void bubbleSort(int *v, int length);
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

   bubbleSort(v1, MAX1);
   bubbleSort(v2, MAX1);
   bubbleSort(v3, MAX1);
   bubbleSort(v4, MAX1);
   bubbleSort(v5, MAX1);
   bubbleSort(v6, MAX1);
   bubbleSort(v7, MAX1);
   bubbleSort(v8, MAX1);
   bubbleSort(v9, MAX1);
   bubbleSort(v10, MAX1);
   bubbleSort(v11, MAX1);
   bubbleSort(v12, MAX1);
   bubbleSort(v13, MAX1);
   bubbleSort(v14, MAX1);
   bubbleSort(v15, MAX1);
   bubbleSort(v16, MAX1);
   bubbleSort(v17, MAX1);
   bubbleSort(v18, MAX1);
   bubbleSort(v19, MAX1);
   bubbleSort(v20, MAX1);
   bubbleSort(v21, MAX1);
   bubbleSort(v22, MAX1);
   bubbleSort(v23, MAX1);
   bubbleSort(v24, MAX1);
   bubbleSort(v25, MAX1);
   bubbleSort(v26, MAX1);
   bubbleSort(v27, MAX1);
   bubbleSort(v28, MAX1);
   bubbleSort(v29, MAX1);
   bubbleSort(v30, MAX1);
   bubbleSort(v31, MAX1);
   bubbleSort(v32, MAX1);
   bubbleSort(v33, MAX1);
   bubbleSort(v34, MAX1);
   bubbleSort(v35, MAX1);
   bubbleSort(v36, MAX1);
   bubbleSort(v37, MAX1);
   bubbleSort(v38, MAX1);
   bubbleSort(v39, MAX1);
   bubbleSort(v40, MAX1);

   bubbleSort(v41, MAX2);
   bubbleSort(v42, MAX2);
   bubbleSort(v43, MAX2);
   bubbleSort(v44, MAX2);
   bubbleSort(v45, MAX2);
   bubbleSort(v46, MAX2);
   bubbleSort(v47, MAX2);
   bubbleSort(v48, MAX2);
   bubbleSort(v49, MAX2);
   bubbleSort(v50, MAX2);
   bubbleSort(v51, MAX2);
   bubbleSort(v52, MAX2);
   bubbleSort(v53, MAX2);
   bubbleSort(v54, MAX2);
   bubbleSort(v55, MAX2);
   bubbleSort(v56, MAX2);
   bubbleSort(v57, MAX2);
   bubbleSort(v58, MAX2);
   bubbleSort(v59, MAX2);
   bubbleSort(v60, MAX2);
   bubbleSort(v61, MAX2);
   bubbleSort(v62, MAX2);
   bubbleSort(v63, MAX2);
   bubbleSort(v64, MAX2);
   bubbleSort(v65, MAX2);
   bubbleSort(v66, MAX2);
   bubbleSort(v67, MAX2);
   bubbleSort(v68, MAX2);
   bubbleSort(v69, MAX2);
   bubbleSort(v70, MAX2);
   bubbleSort(v71, MAX2);
   bubbleSort(v72, MAX2);
   bubbleSort(v73, MAX2);
   bubbleSort(v74, MAX2);
   bubbleSort(v75, MAX2);
   bubbleSort(v76, MAX2);
   bubbleSort(v77, MAX2);
   bubbleSort(v78, MAX2);
   bubbleSort(v79, MAX2);
   bubbleSort(v80, MAX2);

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

void readVector100(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 12499;
   }
}

void readVector1000(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 24999;
   }
}

void readVector10000(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = 1 + rand() % 37499;
   }
}

void printVector(int *v, int length) {
   for (int i = 0; i < length; i++) {
      printf("v[%d] = %d\n", i, v[i]);
   }
   printf("\n");
}
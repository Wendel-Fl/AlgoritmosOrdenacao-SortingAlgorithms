#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX1 3
#define MAX2 9
#define MAX3 27
#define MAX4 81
#define MAX5 243
#define MAX6 729
#define MAX7 2187
#define MAX8 6561

void bubbleSort(int *v, int length);
void bucketSort(int *v, int n);
void countingSort(int *v, int length);
void insertionSort(int *v, int length);
void mergeSort(int *v, int length);
void mergeSortRecursion(int *vet, int inicio, int fim);
void mergeSortedArrays(int *vet, int inicio, int meio, int fim);
void swap(int *x, int *y);
void quickSort(int *vet, int length);
void quickSortRecursion(int *vet, int inicio, int fim);
int partition(int *vet, int inicio, int fim);
void radixSort(int *vet, int length);
void selectionSort(int *vet, int lenght);
void readVector3(int *v, int length);
void readVector9(int *v, int length);
void readVector27(int *v, int length);
void readVector81(int *v, int length);
void readVector243(int *v, int length);
void readVector729(int *v, int length);
void readVector2187(int *v, int length);
void readVector6561(int *v, int length);

int main() {
   
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

   int v121[MAX4], v122[MAX4], v123[MAX4], v124[MAX4], v125[MAX4], v126[MAX4], v127[MAX4], v128[MAX4], v129[MAX4], v130[MAX4],
      v131[MAX4], v132[MAX4], v133[MAX4], v134[MAX4], v135[MAX4], v136[MAX4], v137[MAX4], v138[MAX4], v139[MAX4], v140[MAX4],
      v141[MAX4], v142[MAX4], v143[MAX4], v144[MAX4], v145[MAX4], v146[MAX4], v147[MAX4], v148[MAX4], v149[MAX4], v150[MAX4],
      v151[MAX4], v152[MAX4], v153[MAX4], v154[MAX4], v155[MAX4], v156[MAX4], v157[MAX4], v158[MAX4], v159[MAX4], v160[MAX4];

   int v161[MAX5], v162[MAX5], v163[MAX5], v164[MAX5], v165[MAX5], v166[MAX5], v167[MAX5], v168[MAX5], v169[MAX5], v170[MAX5],
      v171[MAX5], v172[MAX5], v173[MAX5], v174[MAX5], v175[MAX5], v176[MAX5], v177[MAX5], v178[MAX5], v179[MAX5], v180[MAX5],
      v181[MAX5], v182[MAX5], v183[MAX5], v184[MAX5], v185[MAX5], v186[MAX5], v187[MAX5], v188[MAX5], v189[MAX5], v190[MAX5],
      v191[MAX5], v192[MAX5], v193[MAX5], v194[MAX5], v195[MAX5], v196[MAX5], v197[MAX5], v198[MAX5], v199[MAX5], v200[MAX5];

   int v201[MAX6], v202[MAX6], v203[MAX6], v204[MAX6], v205[MAX6], v206[MAX6], v207[MAX6], v208[MAX6], v209[MAX6], v210[MAX6],
      v211[MAX6], v212[MAX6], v213[MAX6], v214[MAX6], v215[MAX6], v216[MAX6], v217[MAX6], v218[MAX6], v219[MAX6], v220[MAX6],
      v221[MAX6], v222[MAX6], v223[MAX6], v224[MAX6], v225[MAX6], v226[MAX6], v227[MAX6], v228[MAX6], v229[MAX6], v230[MAX6],
      v231[MAX6], v232[MAX6], v233[MAX6], v234[MAX6], v235[MAX6], v236[MAX6], v237[MAX6], v238[MAX6], v239[MAX6], v240[MAX6];

   int v241[MAX7], v242[MAX7], v243[MAX7], v244[MAX7], v245[MAX7], v246[MAX7], v247[MAX7], v248[MAX7], v249[MAX7], v250[MAX7],
      v251[MAX7], v252[MAX7], v253[MAX7], v254[MAX7], v255[MAX7], v256[MAX7], v257[MAX7], v258[MAX7], v259[MAX7], v260[MAX7],
      v261[MAX7], v262[MAX7], v263[MAX7], v264[MAX7], v265[MAX7], v266[MAX7], v267[MAX7], v268[MAX7], v269[MAX7], v270[MAX7],
      v271[MAX7], v272[MAX7], v273[MAX7], v274[MAX7], v275[MAX7], v276[MAX7], v277[MAX7], v278[MAX7], v279[MAX7], v280[MAX7];

   int v281[MAX8], v282[MAX8], v283[MAX8], v284[MAX8], v285[MAX8], v286[MAX8], v287[MAX8], v288[MAX8], v289[MAX8], v290[MAX8],
      v291[MAX8], v292[MAX8], v293[MAX8], v294[MAX8], v295[MAX8], v296[MAX8], v297[MAX8], v298[MAX8], v299[MAX8], v300[MAX8],
      v301[MAX8], v302[MAX8], v303[MAX8], v304[MAX8], v305[MAX8], v306[MAX8], v307[MAX8], v308[MAX8], v309[MAX8], v310[MAX8],
      v311[MAX8], v312[MAX8], v313[MAX8], v314[MAX8], v315[MAX8], v316[MAX8], v317[MAX8], v318[MAX8], v319[MAX8], v320[MAX8];

   double timeSpent = 0.0;

   srand(time(NULL));

   readVector3(v1, MAX1);
   readVector3(v2, MAX1);
   readVector3(v3, MAX1);
   readVector3(v4, MAX1);
   readVector3(v5, MAX1);
   readVector3(v6, MAX1);
   readVector3(v7, MAX1);
   readVector3(v8, MAX1);
   readVector3(v9, MAX1);
   readVector3(v10, MAX1);
   readVector3(v11, MAX1);
   readVector3(v12, MAX1);
   readVector3(v13, MAX1);
   readVector3(v14, MAX1);
   readVector3(v15, MAX1);
   readVector3(v16, MAX1);
   readVector3(v17, MAX1);
   readVector3(v18, MAX1);
   readVector3(v19, MAX1);
   readVector3(v20, MAX1);
   readVector3(v21, MAX1);
   readVector3(v22, MAX1);
   readVector3(v23, MAX1);
   readVector3(v24, MAX1);
   readVector3(v25, MAX1);
   readVector3(v26, MAX1);
   readVector3(v27, MAX1);
   readVector3(v28, MAX1);
   readVector3(v29, MAX1);
   readVector3(v30, MAX1);
   readVector3(v31, MAX1);
   readVector3(v32, MAX1);
   readVector3(v33, MAX1);
   readVector3(v34, MAX1);
   readVector3(v35, MAX1);
   readVector3(v36, MAX1);
   readVector3(v37, MAX1);
   readVector3(v38, MAX1);
   readVector3(v39, MAX1);
   readVector3(v40, MAX1);

   readVector9(v41, MAX2);
   readVector9(v42, MAX2);
   readVector9(v43, MAX2);
   readVector9(v44, MAX2);
   readVector9(v45, MAX2);
   readVector9(v46, MAX2);
   readVector9(v47, MAX2);
   readVector9(v48, MAX2);
   readVector9(v49, MAX2);
   readVector9(v50, MAX2);
   readVector9(v51, MAX2);
   readVector9(v52, MAX2);
   readVector9(v53, MAX2);
   readVector9(v54, MAX2);
   readVector9(v55, MAX2);
   readVector9(v56, MAX2);
   readVector9(v57, MAX2);
   readVector9(v58, MAX2);
   readVector9(v59, MAX2);
   readVector9(v60, MAX2);
   readVector9(v61, MAX2);
   readVector9(v62, MAX2);
   readVector9(v63, MAX2);
   readVector9(v64, MAX2);
   readVector9(v65, MAX2);
   readVector9(v66, MAX2);
   readVector9(v67, MAX2);
   readVector9(v68, MAX2);
   readVector9(v69, MAX2);
   readVector9(v70, MAX2);
   readVector9(v71, MAX2);
   readVector9(v72, MAX2);
   readVector9(v73, MAX2);
   readVector9(v74, MAX2);
   readVector9(v75, MAX2);
   readVector9(v76, MAX2);
   readVector9(v77, MAX2);
   readVector9(v78, MAX2);
   readVector9(v79, MAX2);
   readVector9(v80, MAX2);

   readVector27(v81, MAX3);
   readVector27(v82, MAX3);
   readVector27(v83, MAX3);
   readVector27(v84, MAX3);
   readVector27(v85, MAX3);
   readVector27(v86, MAX3);
   readVector27(v87, MAX3);
   readVector27(v88, MAX3);
   readVector27(v89, MAX3);
   readVector27(v90, MAX3);
   readVector27(v91, MAX3);
   readVector27(v92, MAX3);
   readVector27(v93, MAX3);
   readVector27(v94, MAX3);
   readVector27(v95, MAX3);
   readVector27(v96, MAX3);
   readVector27(v97, MAX3);
   readVector27(v98, MAX3);
   readVector27(v99, MAX3);
   readVector27(v100, MAX3);
   readVector27(v101, MAX3);
   readVector27(v102, MAX3);
   readVector27(v103, MAX3);
   readVector27(v104, MAX3);
   readVector27(v105, MAX3);
   readVector27(v106, MAX3);
   readVector27(v107, MAX3);
   readVector27(v108, MAX3);
   readVector27(v109, MAX3);
   readVector27(v110, MAX3);
   readVector27(v111, MAX3);
   readVector27(v112, MAX3);
   readVector27(v113, MAX3);
   readVector27(v114, MAX3);
   readVector27(v115, MAX3);
   readVector27(v116, MAX3);
   readVector27(v117, MAX3);
   readVector27(v118, MAX3);
   readVector27(v119, MAX3);
   readVector27(v120, MAX3);

   readVector81(v121, MAX4);
   readVector81(v122, MAX4);
   readVector81(v123, MAX4);
   readVector81(v124, MAX4);
   readVector81(v125, MAX4);
   readVector81(v126, MAX4);
   readVector81(v127, MAX4);
   readVector81(v128, MAX4);
   readVector81(v129, MAX4);
   readVector81(v130, MAX4);
   readVector81(v131, MAX4);
   readVector81(v132, MAX4);
   readVector81(v133, MAX4);
   readVector81(v134, MAX4);
   readVector81(v135, MAX4);
   readVector81(v136, MAX4);
   readVector81(v137, MAX4);
   readVector81(v138, MAX4);
   readVector81(v139, MAX4);
   readVector81(v140, MAX4);
   readVector81(v141, MAX4);
   readVector81(v142, MAX4);
   readVector81(v143, MAX4);
   readVector81(v144, MAX4);
   readVector81(v145, MAX4);
   readVector81(v146, MAX4);
   readVector81(v147, MAX4);
   readVector81(v148, MAX4);
   readVector81(v149, MAX4);
   readVector81(v150, MAX4);
   readVector81(v151, MAX4);
   readVector81(v152, MAX4);
   readVector81(v153, MAX4);
   readVector81(v154, MAX4);
   readVector81(v155, MAX4);
   readVector81(v156, MAX4);
   readVector81(v157, MAX4);
   readVector81(v158, MAX4);
   readVector81(v159, MAX4);
   readVector81(v160, MAX4);

   readVector243(v161, MAX5);
   readVector243(v162, MAX5);
   readVector243(v163, MAX5);
   readVector243(v164, MAX5);
   readVector243(v165, MAX5);
   readVector243(v166, MAX5);
   readVector243(v167, MAX5);
   readVector243(v168, MAX5);
   readVector243(v169, MAX5);
   readVector243(v170, MAX5);
   readVector243(v171, MAX5);
   readVector243(v172, MAX5);
   readVector243(v173, MAX5);
   readVector243(v174, MAX5);
   readVector243(v175, MAX5);
   readVector243(v176, MAX5);
   readVector243(v177, MAX5);
   readVector243(v178, MAX5);
   readVector243(v179, MAX5);
   readVector243(v180, MAX5);
   readVector243(v181, MAX5);
   readVector243(v182, MAX5);
   readVector243(v183, MAX5);
   readVector243(v184, MAX5);
   readVector243(v185, MAX5);
   readVector243(v186, MAX5);
   readVector243(v187, MAX5);
   readVector243(v188, MAX5);
   readVector243(v189, MAX5);
   readVector243(v190, MAX5);
   readVector243(v191, MAX5);
   readVector243(v192, MAX5);
   readVector243(v193, MAX5);
   readVector243(v194, MAX5);
   readVector243(v195, MAX5);
   readVector243(v196, MAX5);
   readVector243(v197, MAX5);
   readVector243(v198, MAX5);
   readVector243(v199, MAX5);
   readVector243(v200, MAX5);

   readVector729(v201, MAX6);
   readVector729(v202, MAX6);
   readVector729(v203, MAX6);
   readVector729(v204, MAX6);
   readVector729(v205, MAX6);
   readVector729(v206, MAX6);
   readVector729(v207, MAX6);
   readVector729(v208, MAX6);
   readVector729(v209, MAX6);
   readVector729(v210, MAX6);
   readVector729(v211, MAX6);
   readVector729(v212, MAX6);
   readVector729(v213, MAX6);
   readVector729(v214, MAX6);
   readVector729(v215, MAX6);
   readVector729(v216, MAX6);
   readVector729(v217, MAX6);
   readVector729(v218, MAX6);
   readVector729(v219, MAX6);
   readVector729(v220, MAX6);
   readVector729(v221, MAX6);
   readVector729(v222, MAX6);
   readVector729(v223, MAX6);
   readVector729(v224, MAX6);
   readVector729(v225, MAX6);
   readVector729(v226, MAX6);
   readVector729(v227, MAX6);
   readVector729(v228, MAX6);
   readVector729(v229, MAX6);
   readVector729(v230, MAX6);
   readVector729(v231, MAX6);
   readVector729(v232, MAX6);
   readVector729(v233, MAX6);
   readVector729(v234, MAX6);
   readVector729(v235, MAX6);
   readVector729(v236, MAX6);
   readVector729(v237, MAX6);
   readVector729(v238, MAX6);
   readVector729(v239, MAX6);
   readVector729(v240, MAX6);

   readVector2187(v241, MAX7);
   readVector2187(v242, MAX7);
   readVector2187(v243, MAX7);
   readVector2187(v244, MAX7);
   readVector2187(v245, MAX7);
   readVector2187(v246, MAX7);
   readVector2187(v247, MAX7);
   readVector2187(v248, MAX7);
   readVector2187(v249, MAX7);
   readVector2187(v250, MAX7);
   readVector2187(v251, MAX7);
   readVector2187(v252, MAX7);
   readVector2187(v253, MAX7);
   readVector2187(v254, MAX7);
   readVector2187(v255, MAX7);
   readVector2187(v256, MAX7);
   readVector2187(v257, MAX7);
   readVector2187(v258, MAX7);
   readVector2187(v259, MAX7);
   readVector2187(v260, MAX7);
   readVector2187(v261, MAX7);
   readVector2187(v262, MAX7);
   readVector2187(v263, MAX7);
   readVector2187(v264, MAX7);
   readVector2187(v265, MAX7);
   readVector2187(v266, MAX7);
   readVector2187(v267, MAX7);
   readVector2187(v268, MAX7);
   readVector2187(v269, MAX7);
   readVector2187(v270, MAX7);
   readVector2187(v271, MAX7);
   readVector2187(v272, MAX7);
   readVector2187(v273, MAX7);
   readVector2187(v274, MAX7);
   readVector2187(v275, MAX7);
   readVector2187(v276, MAX7);
   readVector2187(v277, MAX7);
   readVector2187(v278, MAX7);
   readVector2187(v279, MAX7);
   readVector2187(v280, MAX7);

   readVector6561(v281, MAX8);
   readVector6561(v282, MAX8);
   readVector6561(v283, MAX8);
   readVector6561(v284, MAX8);
   readVector6561(v285, MAX8);
   readVector6561(v286, MAX8);
   readVector6561(v287, MAX8);
   readVector6561(v288, MAX8);
   readVector6561(v289, MAX8);
   readVector6561(v290, MAX8);
   readVector6561(v291, MAX8);
   readVector6561(v292, MAX8);
   readVector6561(v293, MAX8);
   readVector6561(v294, MAX8);
   readVector6561(v295, MAX8);
   readVector6561(v296, MAX8);
   readVector6561(v297, MAX8);
   readVector6561(v298, MAX8);
   readVector6561(v299, MAX8);
   readVector6561(v300, MAX8);
   readVector6561(v301, MAX8);
   readVector6561(v302, MAX8);
   readVector6561(v303, MAX8);
   readVector6561(v304, MAX8);
   readVector6561(v305, MAX8);
   readVector6561(v306, MAX8);
   readVector6561(v307, MAX8);
   readVector6561(v308, MAX8);
   readVector6561(v309, MAX8);
   readVector6561(v310, MAX8);
   readVector6561(v311, MAX8);
   readVector6561(v312, MAX8);
   readVector6561(v313, MAX8);
   readVector6561(v314, MAX8);
   readVector6561(v315, MAX8);
   readVector6561(v316, MAX8);
   readVector6561(v317, MAX8);
   readVector6561(v318, MAX8);
   readVector6561(v319, MAX8);
   readVector6561(v320, MAX8);

   clock_t begin = clock();
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
   clock_t end = clock();

   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Bubble Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
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
   clock_t end2 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
   bubbleSort(v81, MAX3);
   bubbleSort(v82, MAX3);
   bubbleSort(v83, MAX3);
   bubbleSort(v84, MAX3);
   bubbleSort(v85, MAX3);
   bubbleSort(v86, MAX3);
   bubbleSort(v87, MAX3);
   bubbleSort(v88, MAX3);
   bubbleSort(v89, MAX3);
   bubbleSort(v90, MAX3);
   bubbleSort(v91, MAX3);
   bubbleSort(v92, MAX3);
   bubbleSort(v93, MAX3);
   bubbleSort(v94, MAX3);
   bubbleSort(v95, MAX3);
   bubbleSort(v96, MAX3);
   bubbleSort(v97, MAX3);
   bubbleSort(v98, MAX3);
   bubbleSort(v99, MAX3);
   bubbleSort(v100, MAX3);
   bubbleSort(v101, MAX3);
   bubbleSort(v102, MAX3);
   bubbleSort(v103, MAX3);
   bubbleSort(v104, MAX3);
   bubbleSort(v105, MAX3);
   bubbleSort(v106, MAX3);
   bubbleSort(v107, MAX3);
   bubbleSort(v108, MAX3);
   bubbleSort(v109, MAX3);
   bubbleSort(v110, MAX3);
   bubbleSort(v111, MAX3);
   bubbleSort(v112, MAX3);
   bubbleSort(v113, MAX3);
   bubbleSort(v114, MAX3);
   bubbleSort(v115, MAX3);
   bubbleSort(v116, MAX3);
   bubbleSort(v117, MAX3);
   bubbleSort(v118, MAX3);
   bubbleSort(v119, MAX3);
   bubbleSort(v120, MAX3);
   clock_t end3 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
   bubbleSort(v121, MAX4);
   bubbleSort(v122, MAX4);
   bubbleSort(v123, MAX4);
   bubbleSort(v124, MAX4);
   bubbleSort(v125, MAX4);
   bubbleSort(v126, MAX4);
   bubbleSort(v127, MAX4);
   bubbleSort(v128, MAX4);
   bubbleSort(v129, MAX4);
   bubbleSort(v130, MAX4);
   bubbleSort(v131, MAX4);
   bubbleSort(v132, MAX4);
   bubbleSort(v133, MAX4);
   bubbleSort(v134, MAX4);
   bubbleSort(v135, MAX4);
   bubbleSort(v136, MAX4);
   bubbleSort(v137, MAX4);
   bubbleSort(v138, MAX4);
   bubbleSort(v139, MAX4);
   bubbleSort(v140, MAX4);
   bubbleSort(v141, MAX4);
   bubbleSort(v142, MAX4);
   bubbleSort(v143, MAX4);
   bubbleSort(v144, MAX4);
   bubbleSort(v145, MAX4);
   bubbleSort(v146, MAX4);
   bubbleSort(v147, MAX4);
   bubbleSort(v148, MAX4);
   bubbleSort(v149, MAX4);
   bubbleSort(v150, MAX4);
   bubbleSort(v151, MAX4);
   bubbleSort(v152, MAX4);
   bubbleSort(v153, MAX4);
   bubbleSort(v154, MAX4);
   bubbleSort(v155, MAX4);
   bubbleSort(v156, MAX4);
   bubbleSort(v157, MAX4);
   bubbleSort(v158, MAX4);
   bubbleSort(v159, MAX4);
   bubbleSort(v160, MAX4);
   clock_t end4 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
   bubbleSort(v161, MAX5);
   bubbleSort(v162, MAX5);
   bubbleSort(v163, MAX5);
   bubbleSort(v164, MAX5);
   bubbleSort(v165, MAX5);
   bubbleSort(v166, MAX5);
   bubbleSort(v167, MAX5);
   bubbleSort(v168, MAX5);
   bubbleSort(v169, MAX5);
   bubbleSort(v170, MAX5);
   bubbleSort(v171, MAX5);
   bubbleSort(v172, MAX5);
   bubbleSort(v173, MAX5);
   bubbleSort(v174, MAX5);
   bubbleSort(v175, MAX5);
   bubbleSort(v176, MAX5);
   bubbleSort(v177, MAX5);
   bubbleSort(v178, MAX5);
   bubbleSort(v179, MAX5);
   bubbleSort(v180, MAX5);
   bubbleSort(v181, MAX5);
   bubbleSort(v182, MAX5);
   bubbleSort(v183, MAX5);
   bubbleSort(v184, MAX5);
   bubbleSort(v185, MAX5);
   bubbleSort(v186, MAX5);
   bubbleSort(v187, MAX5);
   bubbleSort(v188, MAX5);
   bubbleSort(v189, MAX5);
   bubbleSort(v190, MAX5);
   bubbleSort(v191, MAX5);
   bubbleSort(v192, MAX5);
   bubbleSort(v193, MAX5);
   bubbleSort(v194, MAX5);
   bubbleSort(v195, MAX5);
   bubbleSort(v196, MAX5);
   bubbleSort(v197, MAX5);
   bubbleSort(v198, MAX5);
   bubbleSort(v199, MAX5);
   bubbleSort(v200, MAX5);
   clock_t end5 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
   bubbleSort(v201, MAX6);
   bubbleSort(v202, MAX6);
   bubbleSort(v203, MAX6);
   bubbleSort(v204, MAX6);
   bubbleSort(v205, MAX6);
   bubbleSort(v206, MAX6);
   bubbleSort(v207, MAX6);
   bubbleSort(v208, MAX6);
   bubbleSort(v209, MAX6);
   bubbleSort(v210, MAX6);
   bubbleSort(v211, MAX6);
   bubbleSort(v212, MAX6);
   bubbleSort(v213, MAX6);
   bubbleSort(v214, MAX6);
   bubbleSort(v215, MAX6);
   bubbleSort(v216, MAX6);
   bubbleSort(v217, MAX6);
   bubbleSort(v218, MAX6);
   bubbleSort(v219, MAX6);
   bubbleSort(v220, MAX6);
   bubbleSort(v221, MAX6);
   bubbleSort(v222, MAX6);
   bubbleSort(v223, MAX6);
   bubbleSort(v224, MAX6);
   bubbleSort(v225, MAX6);
   bubbleSort(v226, MAX6);
   bubbleSort(v227, MAX6);
   bubbleSort(v228, MAX6);
   bubbleSort(v229, MAX6);
   bubbleSort(v230, MAX6);
   bubbleSort(v231, MAX6);
   bubbleSort(v232, MAX6);
   bubbleSort(v233, MAX6);
   bubbleSort(v234, MAX6);
   bubbleSort(v235, MAX6);
   bubbleSort(v236, MAX6);
   bubbleSort(v237, MAX6);
   bubbleSort(v238, MAX6);
   bubbleSort(v239, MAX6);
   bubbleSort(v240, MAX6);
   clock_t end6 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
   bubbleSort(v241, MAX7);
   bubbleSort(v242, MAX7);
   bubbleSort(v243, MAX7);
   bubbleSort(v244, MAX7);
   bubbleSort(v245, MAX7);
   bubbleSort(v246, MAX7);
   bubbleSort(v247, MAX7);
   bubbleSort(v248, MAX7);
   bubbleSort(v249, MAX7);
   bubbleSort(v250, MAX7);
   bubbleSort(v251, MAX7);
   bubbleSort(v252, MAX7);
   bubbleSort(v253, MAX7);
   bubbleSort(v254, MAX7);
   bubbleSort(v255, MAX7);
   bubbleSort(v256, MAX7);
   bubbleSort(v257, MAX7);
   bubbleSort(v258, MAX7);
   bubbleSort(v259, MAX7);
   bubbleSort(v260, MAX7);
   bubbleSort(v261, MAX7);
   bubbleSort(v262, MAX7);
   bubbleSort(v263, MAX7);
   bubbleSort(v264, MAX7);
   bubbleSort(v265, MAX7);
   bubbleSort(v266, MAX7);
   bubbleSort(v267, MAX7);
   bubbleSort(v268, MAX7);
   bubbleSort(v269, MAX7);
   bubbleSort(v270, MAX7);
   bubbleSort(v271, MAX7);
   bubbleSort(v272, MAX7);
   bubbleSort(v273, MAX7);
   bubbleSort(v274, MAX7);
   bubbleSort(v275, MAX7);
   bubbleSort(v276, MAX7);
   bubbleSort(v277, MAX7);
   bubbleSort(v278, MAX7);
   bubbleSort(v279, MAX7);
   bubbleSort(v280, MAX7);
   clock_t end7 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
   bubbleSort(v264, MAX8);
   bubbleSort(v282, MAX8);
   bubbleSort(v283, MAX8);
   bubbleSort(v284, MAX8);
   bubbleSort(v285, MAX8);
   bubbleSort(v286, MAX8);
   bubbleSort(v287, MAX8);
   bubbleSort(v288, MAX8);
   bubbleSort(v289, MAX8);
   bubbleSort(v290, MAX8);
   bubbleSort(v291, MAX8);
   bubbleSort(v292, MAX8);
   bubbleSort(v293, MAX8);
   bubbleSort(v294, MAX8);
   bubbleSort(v295, MAX8);
   bubbleSort(v296, MAX8);
   bubbleSort(v297, MAX8);
   bubbleSort(v298, MAX8);
   bubbleSort(v299, MAX8);
   bubbleSort(v300, MAX8);
   bubbleSort(v301, MAX8);
   bubbleSort(v302, MAX8);
   bubbleSort(v303, MAX8);
   bubbleSort(v304, MAX8);
   bubbleSort(v305, MAX8);
   bubbleSort(v306, MAX8);
   bubbleSort(v307, MAX8);
   bubbleSort(v308, MAX8);
   bubbleSort(v309, MAX8);
   bubbleSort(v310, MAX8);
   bubbleSort(v311, MAX8);
   bubbleSort(v312, MAX8);
   bubbleSort(v313, MAX8);
   bubbleSort(v314, MAX8);
   bubbleSort(v315, MAX8);
   bubbleSort(v316, MAX8);
   bubbleSort(v317, MAX8);
   bubbleSort(v318, MAX8);
   bubbleSort(v319, MAX8);
   bubbleSort(v320, MAX8);
   clock_t end8 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin9 = clock();
   bucketSort(v1, MAX1);
   bucketSort(v2, MAX1);
   bucketSort(v3, MAX1);
   bucketSort(v4, MAX1);
   bucketSort(v5, MAX1);
   bucketSort(v6, MAX1);
   bucketSort(v7, MAX1);
   bucketSort(v8, MAX1);
   bucketSort(v9, MAX1);
   bucketSort(v10, MAX1);
   bucketSort(v11, MAX1);
   bucketSort(v12, MAX1);
   bucketSort(v13, MAX1);
   bucketSort(v14, MAX1);
   bucketSort(v15, MAX1);
   bucketSort(v16, MAX1);
   bucketSort(v17, MAX1);
   bucketSort(v18, MAX1);
   bucketSort(v19, MAX1);
   bucketSort(v20, MAX1);
   bucketSort(v21, MAX1);
   bucketSort(v22, MAX1);
   bucketSort(v23, MAX1);
   bucketSort(v24, MAX1);
   bucketSort(v25, MAX1);
   bucketSort(v26, MAX1);
   bucketSort(v27, MAX1);
   bucketSort(v28, MAX1);
   bucketSort(v29, MAX1);
   bucketSort(v30, MAX1);
   bucketSort(v31, MAX1);
   bucketSort(v32, MAX1);
   bucketSort(v33, MAX1);
   bucketSort(v34, MAX1);
   bucketSort(v35, MAX1);
   bucketSort(v36, MAX1);
   bucketSort(v37, MAX1);
   bucketSort(v38, MAX1);
   bucketSort(v39, MAX1);
   bucketSort(v40, MAX1);
   clock_t end9 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end9 - begin9)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nBucket Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 7 elementos: %.3f ms\n", timeSpent);

   clock_t begin10 = clock();
   bucketSort(v41, MAX2);
   bucketSort(v42, MAX2);
   bucketSort(v43, MAX2);
   bucketSort(v44, MAX2);
   bucketSort(v45, MAX2);
   bucketSort(v46, MAX2);
   bucketSort(v47, MAX2);
   bucketSort(v48, MAX2);
   bucketSort(v49, MAX2);
   bucketSort(v50, MAX2);
   bucketSort(v51, MAX2);
   bucketSort(v52, MAX2);
   bucketSort(v53, MAX2);
   bucketSort(v54, MAX2);
   bucketSort(v55, MAX2);
   bucketSort(v56, MAX2);
   bucketSort(v57, MAX2);
   bucketSort(v58, MAX2);
   bucketSort(v59, MAX2);
   bucketSort(v60, MAX2);
   bucketSort(v61, MAX2);
   bucketSort(v62, MAX2);
   bucketSort(v63, MAX2);
   bucketSort(v64, MAX2);
   bucketSort(v65, MAX2);
   bucketSort(v66, MAX2);
   bucketSort(v67, MAX2);
   bucketSort(v68, MAX2);
   bucketSort(v69, MAX2);
   bucketSort(v70, MAX2);
   bucketSort(v71, MAX2);
   bucketSort(v72, MAX2);
   bucketSort(v73, MAX2);
   bucketSort(v74, MAX2);
   bucketSort(v75, MAX2);
   bucketSort(v76, MAX2);
   bucketSort(v77, MAX2);
   bucketSort(v78, MAX2);
   bucketSort(v79, MAX2);
   bucketSort(v80, MAX2);
   clock_t end10 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end10 - begin10)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin11 = clock();
   bucketSort(v81, MAX3);
   bucketSort(v82, MAX3);
   bucketSort(v83, MAX3);
   bucketSort(v84, MAX3);
   bucketSort(v85, MAX3);
   bucketSort(v86, MAX3);
   bucketSort(v87, MAX3);
   bucketSort(v88, MAX3);
   bucketSort(v89, MAX3);
   bucketSort(v90, MAX3);
   bucketSort(v91, MAX3);
   bucketSort(v92, MAX3);
   bucketSort(v93, MAX3);
   bucketSort(v94, MAX3);
   bucketSort(v95, MAX3);
   bucketSort(v96, MAX3);
   bucketSort(v97, MAX3);
   bucketSort(v98, MAX3);
   bucketSort(v99, MAX3);
   bucketSort(v100, MAX3);
   bucketSort(v101, MAX3);
   bucketSort(v102, MAX3);
   bucketSort(v103, MAX3);
   bucketSort(v104, MAX3);
   bucketSort(v105, MAX3);
   bucketSort(v106, MAX3);
   bucketSort(v107, MAX3);
   bucketSort(v108, MAX3);
   bucketSort(v109, MAX3);
   bucketSort(v110, MAX3);
   bucketSort(v111, MAX3);
   bucketSort(v112, MAX3);
   bucketSort(v113, MAX3);
   bucketSort(v114, MAX3);
   bucketSort(v115, MAX3);
   bucketSort(v116, MAX3);
   bucketSort(v117, MAX3);
   bucketSort(v118, MAX3);
   bucketSort(v119, MAX3);
   bucketSort(v120, MAX3);
   clock_t end11 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end11 - begin11)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin12 = clock();
   bucketSort(v121, MAX4);
   bucketSort(v122, MAX4);
   bucketSort(v123, MAX4);
   bucketSort(v124, MAX4);
   bucketSort(v125, MAX4);
   bucketSort(v126, MAX4);
   bucketSort(v127, MAX4);
   bucketSort(v128, MAX4);
   bucketSort(v129, MAX4);
   bucketSort(v130, MAX4);
   bucketSort(v131, MAX4);
   bucketSort(v132, MAX4);
   bucketSort(v133, MAX4);
   bucketSort(v134, MAX4);
   bucketSort(v135, MAX4);
   bucketSort(v136, MAX4);
   bucketSort(v137, MAX4);
   bucketSort(v138, MAX4);
   bucketSort(v139, MAX4);
   bucketSort(v140, MAX4);
   bucketSort(v141, MAX4);
   bucketSort(v142, MAX4);
   bucketSort(v143, MAX4);
   bucketSort(v144, MAX4);
   bucketSort(v145, MAX4);
   bucketSort(v146, MAX4);
   bucketSort(v147, MAX4);
   bucketSort(v148, MAX4);
   bucketSort(v149, MAX4);
   bucketSort(v150, MAX4);
   bucketSort(v151, MAX4);
   bucketSort(v152, MAX4);
   bucketSort(v153, MAX4);
   bucketSort(v154, MAX4);
   bucketSort(v155, MAX4);
   bucketSort(v156, MAX4);
   bucketSort(v157, MAX4);
   bucketSort(v158, MAX4);
   bucketSort(v159, MAX4);
   bucketSort(v160, MAX4);
   clock_t end12 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end12 - begin12)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin13 = clock();
   bucketSort(v161, MAX5);
   bucketSort(v162, MAX5);
   bucketSort(v163, MAX5);
   bucketSort(v164, MAX5);
   bucketSort(v165, MAX5);
   bucketSort(v166, MAX5);
   bucketSort(v167, MAX5);
   bucketSort(v168, MAX5);
   bucketSort(v169, MAX5);
   bucketSort(v170, MAX5);
   bucketSort(v171, MAX5);
   bucketSort(v172, MAX5);
   bucketSort(v173, MAX5);
   bucketSort(v174, MAX5);
   bucketSort(v175, MAX5);
   bucketSort(v176, MAX5);
   bucketSort(v177, MAX5);
   bucketSort(v178, MAX5);
   bucketSort(v179, MAX5);
   bucketSort(v180, MAX5);
   bucketSort(v181, MAX5);
   bucketSort(v182, MAX5);
   bucketSort(v183, MAX5);
   bucketSort(v184, MAX5);
   bucketSort(v185, MAX5);
   bucketSort(v186, MAX5);
   bucketSort(v187, MAX5);
   bucketSort(v188, MAX5);
   bucketSort(v189, MAX5);
   bucketSort(v190, MAX5);
   bucketSort(v191, MAX5);
   bucketSort(v192, MAX5);
   bucketSort(v193, MAX5);
   bucketSort(v194, MAX5);
   bucketSort(v195, MAX5);
   bucketSort(v196, MAX5);
   bucketSort(v197, MAX5);
   bucketSort(v198, MAX5);
   bucketSort(v199, MAX5);
   bucketSort(v200, MAX5);
   clock_t end13 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end13 - begin13)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin14 = clock();
   bucketSort(v201, MAX6);
   bucketSort(v202, MAX6);
   bucketSort(v203, MAX6);
   bucketSort(v204, MAX6);
   bucketSort(v205, MAX6);
   bucketSort(v206, MAX6);
   bucketSort(v207, MAX6);
   bucketSort(v208, MAX6);
   bucketSort(v209, MAX6);
   bucketSort(v210, MAX6);
   bucketSort(v211, MAX6);
   bucketSort(v212, MAX6);
   bucketSort(v213, MAX6);
   bucketSort(v214, MAX6);
   bucketSort(v215, MAX6);
   bucketSort(v216, MAX6);
   bucketSort(v217, MAX6);
   bucketSort(v218, MAX6);
   bucketSort(v219, MAX6);
   bucketSort(v220, MAX6);
   bucketSort(v221, MAX6);
   bucketSort(v222, MAX6);
   bucketSort(v223, MAX6);
   bucketSort(v224, MAX6);
   bucketSort(v225, MAX6);
   bucketSort(v226, MAX6);
   bucketSort(v227, MAX6);
   bucketSort(v228, MAX6);
   bucketSort(v229, MAX6);
   bucketSort(v230, MAX6);
   bucketSort(v231, MAX6);
   bucketSort(v232, MAX6);
   bucketSort(v233, MAX6);
   bucketSort(v234, MAX6);
   bucketSort(v235, MAX6);
   bucketSort(v236, MAX6);
   bucketSort(v237, MAX6);
   bucketSort(v238, MAX6);
   bucketSort(v239, MAX6);
   bucketSort(v240, MAX6);
   clock_t end14 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end14 - begin14)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin15 = clock();
   bucketSort(v241, MAX7);
   bucketSort(v242, MAX7);
   bucketSort(v243, MAX7);
   bucketSort(v244, MAX7);
   bucketSort(v245, MAX7);
   bucketSort(v246, MAX7);
   bucketSort(v247, MAX7);
   bucketSort(v248, MAX7);
   bucketSort(v249, MAX7);
   bucketSort(v250, MAX7);
   bucketSort(v251, MAX7);
   bucketSort(v252, MAX7);
   bucketSort(v253, MAX7);
   bucketSort(v254, MAX7);
   bucketSort(v255, MAX7);
   bucketSort(v256, MAX7);
   bucketSort(v257, MAX7);
   bucketSort(v258, MAX7);
   bucketSort(v259, MAX7);
   bucketSort(v260, MAX7);
   bucketSort(v261, MAX7);
   bucketSort(v262, MAX7);
   bucketSort(v263, MAX7);
   bucketSort(v264, MAX7);
   bucketSort(v265, MAX7);
   bucketSort(v266, MAX7);
   bucketSort(v267, MAX7);
   bucketSort(v268, MAX7);
   bucketSort(v269, MAX7);
   bucketSort(v270, MAX7);
   bucketSort(v271, MAX7);
   bucketSort(v272, MAX7);
   bucketSort(v273, MAX7);
   bucketSort(v274, MAX7);
   bucketSort(v275, MAX7);
   bucketSort(v276, MAX7);
   bucketSort(v277, MAX7);
   bucketSort(v278, MAX7);
   bucketSort(v279, MAX7);
   bucketSort(v280, MAX7);
   clock_t end15 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end15 - begin15)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin16 = clock();
   bucketSort(v264, MAX8);
   bucketSort(v282, MAX8);
   bucketSort(v283, MAX8);
   bucketSort(v284, MAX8);
   bucketSort(v285, MAX8);
   bucketSort(v286, MAX8);
   bucketSort(v287, MAX8);
   bucketSort(v288, MAX8);
   bucketSort(v289, MAX8);
   bucketSort(v290, MAX8);
   bucketSort(v291, MAX8);
   bucketSort(v292, MAX8);
   bucketSort(v293, MAX8);
   bucketSort(v294, MAX8);
   bucketSort(v295, MAX8);
   bucketSort(v296, MAX8);
   bucketSort(v297, MAX8);
   bucketSort(v298, MAX8);
   bucketSort(v299, MAX8);
   bucketSort(v300, MAX8);
   bucketSort(v301, MAX8);
   bucketSort(v302, MAX8);
   bucketSort(v303, MAX8);
   bucketSort(v304, MAX8);
   bucketSort(v305, MAX8);
   bucketSort(v306, MAX8);
   bucketSort(v307, MAX8);
   bucketSort(v308, MAX8);
   bucketSort(v309, MAX8);
   bucketSort(v310, MAX8);
   bucketSort(v311, MAX8);
   bucketSort(v312, MAX8);
   bucketSort(v313, MAX8);
   bucketSort(v314, MAX8);
   bucketSort(v315, MAX8);
   bucketSort(v316, MAX8);
   bucketSort(v317, MAX8);
   bucketSort(v318, MAX8);
   bucketSort(v319, MAX8);
   bucketSort(v320, MAX8);
   clock_t end16 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end16 - begin16)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin17 = clock();
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
   clock_t end17 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end17 - begin17)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nCounting Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin18 = clock();
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
   clock_t end18 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end18 - begin18)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin19 = clock();
   countingSort(v81, MAX3);
   countingSort(v82, MAX3);
   countingSort(v83, MAX3);
   countingSort(v84, MAX3);
   countingSort(v85, MAX3);
   countingSort(v86, MAX3);
   countingSort(v87, MAX3);
   countingSort(v88, MAX3);
   countingSort(v89, MAX3);
   countingSort(v90, MAX3);
   countingSort(v91, MAX3);
   countingSort(v92, MAX3);
   countingSort(v93, MAX3);
   countingSort(v94, MAX3);
   countingSort(v95, MAX3);
   countingSort(v96, MAX3);
   countingSort(v97, MAX3);
   countingSort(v98, MAX3);
   countingSort(v99, MAX3);
   countingSort(v100, MAX3);
   countingSort(v101, MAX3);
   countingSort(v102, MAX3);
   countingSort(v103, MAX3);
   countingSort(v104, MAX3);
   countingSort(v105, MAX3);
   countingSort(v106, MAX3);
   countingSort(v107, MAX3);
   countingSort(v108, MAX3);
   countingSort(v109, MAX3);
   countingSort(v110, MAX3);
   countingSort(v111, MAX3);
   countingSort(v112, MAX3);
   countingSort(v113, MAX3);
   countingSort(v114, MAX3);
   countingSort(v115, MAX3);
   countingSort(v116, MAX3);
   countingSort(v117, MAX3);
   countingSort(v118, MAX3);
   countingSort(v119, MAX3);
   countingSort(v120, MAX3);
   clock_t end19 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end19 - begin19)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin20 = clock();
   countingSort(v121, MAX4);
   countingSort(v122, MAX4);
   countingSort(v123, MAX4);
   countingSort(v124, MAX4);
   countingSort(v125, MAX4);
   countingSort(v126, MAX4);
   countingSort(v127, MAX4);
   countingSort(v128, MAX4);
   countingSort(v129, MAX4);
   countingSort(v130, MAX4);
   countingSort(v131, MAX4);
   countingSort(v132, MAX4);
   countingSort(v133, MAX4);
   countingSort(v134, MAX4);
   countingSort(v135, MAX4);
   countingSort(v136, MAX4);
   countingSort(v137, MAX4);
   countingSort(v138, MAX4);
   countingSort(v139, MAX4);
   countingSort(v140, MAX4);
   countingSort(v141, MAX4);
   countingSort(v142, MAX4);
   countingSort(v143, MAX4);
   countingSort(v144, MAX4);
   countingSort(v145, MAX4);
   countingSort(v146, MAX4);
   countingSort(v147, MAX4);
   countingSort(v148, MAX4);
   countingSort(v149, MAX4);
   countingSort(v150, MAX4);
   countingSort(v151, MAX4);
   countingSort(v152, MAX4);
   countingSort(v153, MAX4);
   countingSort(v154, MAX4);
   countingSort(v155, MAX4);
   countingSort(v156, MAX4);
   countingSort(v157, MAX4);
   countingSort(v158, MAX4);
   countingSort(v159, MAX4);
   countingSort(v160, MAX4);
   clock_t end20 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end20 - begin20)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin21 = clock();
   countingSort(v161, MAX5);
   countingSort(v162, MAX5);
   countingSort(v163, MAX5);
   countingSort(v164, MAX5);
   countingSort(v165, MAX5);
   countingSort(v166, MAX5);
   countingSort(v167, MAX5);
   countingSort(v168, MAX5);
   countingSort(v169, MAX5);
   countingSort(v170, MAX5);
   countingSort(v171, MAX5);
   countingSort(v172, MAX5);
   countingSort(v173, MAX5);
   countingSort(v174, MAX5);
   countingSort(v175, MAX5);
   countingSort(v176, MAX5);
   countingSort(v177, MAX5);
   countingSort(v178, MAX5);
   countingSort(v179, MAX5);
   countingSort(v180, MAX5);
   countingSort(v181, MAX5);
   countingSort(v182, MAX5);
   countingSort(v183, MAX5);
   countingSort(v184, MAX5);
   countingSort(v185, MAX5);
   countingSort(v186, MAX5);
   countingSort(v187, MAX5);
   countingSort(v188, MAX5);
   countingSort(v189, MAX5);
   countingSort(v190, MAX5);
   countingSort(v191, MAX5);
   countingSort(v192, MAX5);
   countingSort(v193, MAX5);
   countingSort(v194, MAX5);
   countingSort(v195, MAX5);
   countingSort(v196, MAX5);
   countingSort(v197, MAX5);
   countingSort(v198, MAX5);
   countingSort(v199, MAX5);
   countingSort(v200, MAX5);
   clock_t end21 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end21 - begin21)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin22 = clock();
   countingSort(v201, MAX6);
   countingSort(v202, MAX6);
   countingSort(v203, MAX6);
   countingSort(v204, MAX6);
   countingSort(v205, MAX6);
   countingSort(v206, MAX6);
   countingSort(v207, MAX6);
   countingSort(v208, MAX6);
   countingSort(v209, MAX6);
   countingSort(v210, MAX6);
   countingSort(v211, MAX6);
   countingSort(v212, MAX6);
   countingSort(v213, MAX6);
   countingSort(v214, MAX6);
   countingSort(v215, MAX6);
   countingSort(v216, MAX6);
   countingSort(v217, MAX6);
   countingSort(v218, MAX6);
   countingSort(v219, MAX6);
   countingSort(v220, MAX6);
   countingSort(v221, MAX6);
   countingSort(v222, MAX6);
   countingSort(v223, MAX6);
   countingSort(v224, MAX6);
   countingSort(v225, MAX6);
   countingSort(v226, MAX6);
   countingSort(v227, MAX6);
   countingSort(v228, MAX6);
   countingSort(v229, MAX6);
   countingSort(v230, MAX6);
   countingSort(v231, MAX6);
   countingSort(v232, MAX6);
   countingSort(v233, MAX6);
   countingSort(v234, MAX6);
   countingSort(v235, MAX6);
   countingSort(v236, MAX6);
   countingSort(v237, MAX6);
   countingSort(v238, MAX6);
   countingSort(v239, MAX6);
   countingSort(v240, MAX6);
   clock_t end22 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end22 - begin22)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin23 = clock();
   countingSort(v241, MAX7);
   countingSort(v242, MAX7);
   countingSort(v243, MAX7);
   countingSort(v244, MAX7);
   countingSort(v245, MAX7);
   countingSort(v246, MAX7);
   countingSort(v247, MAX7);
   countingSort(v248, MAX7);
   countingSort(v249, MAX7);
   countingSort(v250, MAX7);
   countingSort(v251, MAX7);
   countingSort(v252, MAX7);
   countingSort(v253, MAX7);
   countingSort(v254, MAX7);
   countingSort(v255, MAX7);
   countingSort(v256, MAX7);
   countingSort(v257, MAX7);
   countingSort(v258, MAX7);
   countingSort(v259, MAX7);
   countingSort(v260, MAX7);
   countingSort(v261, MAX7);
   countingSort(v262, MAX7);
   countingSort(v263, MAX7);
   countingSort(v264, MAX7);
   countingSort(v265, MAX7);
   countingSort(v266, MAX7);
   countingSort(v267, MAX7);
   countingSort(v268, MAX7);
   countingSort(v269, MAX7);
   countingSort(v270, MAX7);
   countingSort(v271, MAX7);
   countingSort(v272, MAX7);
   countingSort(v273, MAX7);
   countingSort(v274, MAX7);
   countingSort(v275, MAX7);
   countingSort(v276, MAX7);
   countingSort(v277, MAX7);
   countingSort(v278, MAX7);
   countingSort(v279, MAX7);
   countingSort(v280, MAX7);
   clock_t end23 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end23 - begin23)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin24 = clock();
   countingSort(v264, MAX8);
   countingSort(v282, MAX8);
   countingSort(v283, MAX8);
   countingSort(v284, MAX8);
   countingSort(v285, MAX8);
   countingSort(v286, MAX8);
   countingSort(v287, MAX8);
   countingSort(v288, MAX8);
   countingSort(v289, MAX8);
   countingSort(v290, MAX8);
   countingSort(v291, MAX8);
   countingSort(v292, MAX8);
   countingSort(v293, MAX8);
   countingSort(v294, MAX8);
   countingSort(v295, MAX8);
   countingSort(v296, MAX8);
   countingSort(v297, MAX8);
   countingSort(v298, MAX8);
   countingSort(v299, MAX8);
   countingSort(v300, MAX8);
   countingSort(v301, MAX8);
   countingSort(v302, MAX8);
   countingSort(v303, MAX8);
   countingSort(v304, MAX8);
   countingSort(v305, MAX8);
   countingSort(v306, MAX8);
   countingSort(v307, MAX8);
   countingSort(v308, MAX8);
   countingSort(v309, MAX8);
   countingSort(v310, MAX8);
   countingSort(v311, MAX8);
   countingSort(v312, MAX8);
   countingSort(v313, MAX8);
   countingSort(v314, MAX8);
   countingSort(v315, MAX8);
   countingSort(v316, MAX8);
   countingSort(v317, MAX8);
   countingSort(v318, MAX8);
   countingSort(v319, MAX8);
   countingSort(v320, MAX8);
   clock_t end24 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end24 - begin24)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin25 = clock();
   insertionSort(v1, MAX1);
   insertionSort(v2, MAX1);
   insertionSort(v3, MAX1);
   insertionSort(v4, MAX1);
   insertionSort(v5, MAX1);
   insertionSort(v6, MAX1);
   insertionSort(v7, MAX1);
   insertionSort(v8, MAX1);
   insertionSort(v9, MAX1);
   insertionSort(v10, MAX1);
   insertionSort(v11, MAX1);
   insertionSort(v12, MAX1);
   insertionSort(v13, MAX1);
   insertionSort(v14, MAX1);
   insertionSort(v15, MAX1);
   insertionSort(v16, MAX1);
   insertionSort(v17, MAX1);
   insertionSort(v18, MAX1);
   insertionSort(v19, MAX1);
   insertionSort(v20, MAX1);
   insertionSort(v21, MAX1);
   insertionSort(v22, MAX1);
   insertionSort(v23, MAX1);
   insertionSort(v24, MAX1);
   insertionSort(v25, MAX1);
   insertionSort(v26, MAX1);
   insertionSort(v27, MAX1);
   insertionSort(v28, MAX1);
   insertionSort(v29, MAX1);
   insertionSort(v30, MAX1);
   insertionSort(v31, MAX1);
   insertionSort(v32, MAX1);
   insertionSort(v33, MAX1);
   insertionSort(v34, MAX1);
   insertionSort(v35, MAX1);
   insertionSort(v36, MAX1);
   insertionSort(v37, MAX1);
   insertionSort(v38, MAX1);
   insertionSort(v39, MAX1);
   insertionSort(v40, MAX1);
   clock_t end25 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end25 - begin25)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nInsertion Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin26 = clock();
   insertionSort(v41, MAX2);
   insertionSort(v42, MAX2);
   insertionSort(v43, MAX2);
   insertionSort(v44, MAX2);
   insertionSort(v45, MAX2);
   insertionSort(v46, MAX2);
   insertionSort(v47, MAX2);
   insertionSort(v48, MAX2);
   insertionSort(v49, MAX2);
   insertionSort(v50, MAX2);
   insertionSort(v51, MAX2);
   insertionSort(v52, MAX2);
   insertionSort(v53, MAX2);
   insertionSort(v54, MAX2);
   insertionSort(v55, MAX2);
   insertionSort(v56, MAX2);
   insertionSort(v57, MAX2);
   insertionSort(v58, MAX2);
   insertionSort(v59, MAX2);
   insertionSort(v60, MAX2);
   insertionSort(v61, MAX2);
   insertionSort(v62, MAX2);
   insertionSort(v63, MAX2);
   insertionSort(v64, MAX2);
   insertionSort(v65, MAX2);
   insertionSort(v66, MAX2);
   insertionSort(v67, MAX2);
   insertionSort(v68, MAX2);
   insertionSort(v69, MAX2);
   insertionSort(v70, MAX2);
   insertionSort(v71, MAX2);
   insertionSort(v72, MAX2);
   insertionSort(v73, MAX2);
   insertionSort(v74, MAX2);
   insertionSort(v75, MAX2);
   insertionSort(v76, MAX2);
   insertionSort(v77, MAX2);
   insertionSort(v78, MAX2);
   insertionSort(v79, MAX2);
   insertionSort(v80, MAX2);
   clock_t end26 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end26 - begin26)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin27 = clock();
   insertionSort(v81, MAX3);
   insertionSort(v82, MAX3);
   insertionSort(v83, MAX3);
   insertionSort(v84, MAX3);
   insertionSort(v85, MAX3);
   insertionSort(v86, MAX3);
   insertionSort(v87, MAX3);
   insertionSort(v88, MAX3);
   insertionSort(v89, MAX3);
   insertionSort(v90, MAX3);
   insertionSort(v91, MAX3);
   insertionSort(v92, MAX3);
   insertionSort(v93, MAX3);
   insertionSort(v94, MAX3);
   insertionSort(v95, MAX3);
   insertionSort(v96, MAX3);
   insertionSort(v97, MAX3);
   insertionSort(v98, MAX3);
   insertionSort(v99, MAX3);
   insertionSort(v100, MAX3);
   insertionSort(v101, MAX3);
   insertionSort(v102, MAX3);
   insertionSort(v103, MAX3);
   insertionSort(v104, MAX3);
   insertionSort(v105, MAX3);
   insertionSort(v106, MAX3);
   insertionSort(v107, MAX3);
   insertionSort(v108, MAX3);
   insertionSort(v109, MAX3);
   insertionSort(v110, MAX3);
   insertionSort(v111, MAX3);
   insertionSort(v112, MAX3);
   insertionSort(v113, MAX3);
   insertionSort(v114, MAX3);
   insertionSort(v115, MAX3);
   insertionSort(v116, MAX3);
   insertionSort(v117, MAX3);
   insertionSort(v118, MAX3);
   insertionSort(v119, MAX3);
   insertionSort(v120, MAX3);
   clock_t end27 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end27 - begin27)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin28 = clock();
   insertionSort(v121, MAX4);
   insertionSort(v122, MAX4);
   insertionSort(v123, MAX4);
   insertionSort(v124, MAX4);
   insertionSort(v125, MAX4);
   insertionSort(v126, MAX4);
   insertionSort(v127, MAX4);
   insertionSort(v128, MAX4);
   insertionSort(v129, MAX4);
   insertionSort(v130, MAX4);
   insertionSort(v131, MAX4);
   insertionSort(v132, MAX4);
   insertionSort(v133, MAX4);
   insertionSort(v134, MAX4);
   insertionSort(v135, MAX4);
   insertionSort(v136, MAX4);
   insertionSort(v137, MAX4);
   insertionSort(v138, MAX4);
   insertionSort(v139, MAX4);
   insertionSort(v140, MAX4);
   insertionSort(v141, MAX4);
   insertionSort(v142, MAX4);
   insertionSort(v143, MAX4);
   insertionSort(v144, MAX4);
   insertionSort(v145, MAX4);
   insertionSort(v146, MAX4);
   insertionSort(v147, MAX4);
   insertionSort(v148, MAX4);
   insertionSort(v149, MAX4);
   insertionSort(v150, MAX4);
   insertionSort(v151, MAX4);
   insertionSort(v152, MAX4);
   insertionSort(v153, MAX4);
   insertionSort(v154, MAX4);
   insertionSort(v155, MAX4);
   insertionSort(v156, MAX4);
   insertionSort(v157, MAX4);
   insertionSort(v158, MAX4);
   insertionSort(v159, MAX4);
   insertionSort(v160, MAX4);
   clock_t end28 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end28 - begin28)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin29 = clock();
   insertionSort(v161, MAX5);
   insertionSort(v162, MAX5);
   insertionSort(v163, MAX5);
   insertionSort(v164, MAX5);
   insertionSort(v165, MAX5);
   insertionSort(v166, MAX5);
   insertionSort(v167, MAX5);
   insertionSort(v168, MAX5);
   insertionSort(v169, MAX5);
   insertionSort(v170, MAX5);
   insertionSort(v171, MAX5);
   insertionSort(v172, MAX5);
   insertionSort(v173, MAX5);
   insertionSort(v174, MAX5);
   insertionSort(v175, MAX5);
   insertionSort(v176, MAX5);
   insertionSort(v177, MAX5);
   insertionSort(v178, MAX5);
   insertionSort(v179, MAX5);
   insertionSort(v180, MAX5);
   insertionSort(v181, MAX5);
   insertionSort(v182, MAX5);
   insertionSort(v183, MAX5);
   insertionSort(v184, MAX5);
   insertionSort(v185, MAX5);
   insertionSort(v186, MAX5);
   insertionSort(v187, MAX5);
   insertionSort(v188, MAX5);
   insertionSort(v189, MAX5);
   insertionSort(v190, MAX5);
   insertionSort(v191, MAX5);
   insertionSort(v192, MAX5);
   insertionSort(v193, MAX5);
   insertionSort(v194, MAX5);
   insertionSort(v195, MAX5);
   insertionSort(v196, MAX5);
   insertionSort(v197, MAX5);
   insertionSort(v198, MAX5);
   insertionSort(v199, MAX5);
   insertionSort(v200, MAX5);
   clock_t end29 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end29 - begin29)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin30 = clock();
   insertionSort(v201, MAX6);
   insertionSort(v202, MAX6);
   insertionSort(v203, MAX6);
   insertionSort(v204, MAX6);
   insertionSort(v205, MAX6);
   insertionSort(v206, MAX6);
   insertionSort(v207, MAX6);
   insertionSort(v208, MAX6);
   insertionSort(v209, MAX6);
   insertionSort(v210, MAX6);
   insertionSort(v211, MAX6);
   insertionSort(v212, MAX6);
   insertionSort(v213, MAX6);
   insertionSort(v214, MAX6);
   insertionSort(v215, MAX6);
   insertionSort(v216, MAX6);
   insertionSort(v217, MAX6);
   insertionSort(v218, MAX6);
   insertionSort(v219, MAX6);
   insertionSort(v220, MAX6);
   insertionSort(v221, MAX6);
   insertionSort(v222, MAX6);
   insertionSort(v223, MAX6);
   insertionSort(v224, MAX6);
   insertionSort(v225, MAX6);
   insertionSort(v226, MAX6);
   insertionSort(v227, MAX6);
   insertionSort(v228, MAX6);
   insertionSort(v229, MAX6);
   insertionSort(v230, MAX6);
   insertionSort(v231, MAX6);
   insertionSort(v232, MAX6);
   insertionSort(v233, MAX6);
   insertionSort(v234, MAX6);
   insertionSort(v235, MAX6);
   insertionSort(v236, MAX6);
   insertionSort(v237, MAX6);
   insertionSort(v238, MAX6);
   insertionSort(v239, MAX6);
   insertionSort(v240, MAX6);
   clock_t end30 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end30 - begin30)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin31 = clock();
   insertionSort(v241, MAX7);
   insertionSort(v242, MAX7);
   insertionSort(v243, MAX7);
   insertionSort(v244, MAX7);
   insertionSort(v245, MAX7);
   insertionSort(v246, MAX7);
   insertionSort(v247, MAX7);
   insertionSort(v248, MAX7);
   insertionSort(v249, MAX7);
   insertionSort(v250, MAX7);
   insertionSort(v251, MAX7);
   insertionSort(v252, MAX7);
   insertionSort(v253, MAX7);
   insertionSort(v254, MAX7);
   insertionSort(v255, MAX7);
   insertionSort(v256, MAX7);
   insertionSort(v257, MAX7);
   insertionSort(v258, MAX7);
   insertionSort(v259, MAX7);
   insertionSort(v260, MAX7);
   insertionSort(v261, MAX7);
   insertionSort(v262, MAX7);
   insertionSort(v263, MAX7);
   insertionSort(v264, MAX7);
   insertionSort(v265, MAX7);
   insertionSort(v266, MAX7);
   insertionSort(v267, MAX7);
   insertionSort(v268, MAX7);
   insertionSort(v269, MAX7);
   insertionSort(v270, MAX7);
   insertionSort(v271, MAX7);
   insertionSort(v272, MAX7);
   insertionSort(v273, MAX7);
   insertionSort(v274, MAX7);
   insertionSort(v275, MAX7);
   insertionSort(v276, MAX7);
   insertionSort(v277, MAX7);
   insertionSort(v278, MAX7);
   insertionSort(v279, MAX7);
   insertionSort(v280, MAX7);
   clock_t end31 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end31 - begin31)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin32 = clock();
   insertionSort(v264, MAX8);
   insertionSort(v282, MAX8);
   insertionSort(v283, MAX8);
   insertionSort(v284, MAX8);
   insertionSort(v285, MAX8);
   insertionSort(v286, MAX8);
   insertionSort(v287, MAX8);
   insertionSort(v288, MAX8);
   insertionSort(v289, MAX8);
   insertionSort(v290, MAX8);
   insertionSort(v291, MAX8);
   insertionSort(v292, MAX8);
   insertionSort(v293, MAX8);
   insertionSort(v294, MAX8);
   insertionSort(v295, MAX8);
   insertionSort(v296, MAX8);
   insertionSort(v297, MAX8);
   insertionSort(v298, MAX8);
   insertionSort(v299, MAX8);
   insertionSort(v300, MAX8);
   insertionSort(v301, MAX8);
   insertionSort(v302, MAX8);
   insertionSort(v303, MAX8);
   insertionSort(v304, MAX8);
   insertionSort(v305, MAX8);
   insertionSort(v306, MAX8);
   insertionSort(v307, MAX8);
   insertionSort(v308, MAX8);
   insertionSort(v309, MAX8);
   insertionSort(v310, MAX8);
   insertionSort(v311, MAX8);
   insertionSort(v312, MAX8);
   insertionSort(v313, MAX8);
   insertionSort(v314, MAX8);
   insertionSort(v315, MAX8);
   insertionSort(v316, MAX8);
   insertionSort(v317, MAX8);
   insertionSort(v318, MAX8);
   insertionSort(v319, MAX8);
   insertionSort(v320, MAX8);
   clock_t end32 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end32 - begin32)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin33 = clock();
   mergeSort(v1, MAX1);
   mergeSort(v2, MAX1);
   mergeSort(v3, MAX1);
   mergeSort(v4, MAX1);
   mergeSort(v5, MAX1);
   mergeSort(v6, MAX1);
   mergeSort(v7, MAX1);
   mergeSort(v8, MAX1);
   mergeSort(v9, MAX1);
   mergeSort(v10, MAX1);
   mergeSort(v11, MAX1);
   mergeSort(v12, MAX1);
   mergeSort(v13, MAX1);
   mergeSort(v14, MAX1);
   mergeSort(v15, MAX1);
   mergeSort(v16, MAX1);
   mergeSort(v17, MAX1);
   mergeSort(v18, MAX1);
   mergeSort(v19, MAX1);
   mergeSort(v20, MAX1);
   mergeSort(v21, MAX1);
   mergeSort(v22, MAX1);
   mergeSort(v23, MAX1);
   mergeSort(v24, MAX1);
   mergeSort(v25, MAX1);
   mergeSort(v26, MAX1);
   mergeSort(v27, MAX1);
   mergeSort(v28, MAX1);
   mergeSort(v29, MAX1);
   mergeSort(v30, MAX1);
   mergeSort(v31, MAX1);
   mergeSort(v32, MAX1);
   mergeSort(v33, MAX1);
   mergeSort(v34, MAX1);
   mergeSort(v35, MAX1);
   mergeSort(v36, MAX1);
   mergeSort(v37, MAX1);
   mergeSort(v38, MAX1);
   mergeSort(v39, MAX1);
   mergeSort(v40, MAX1);
   clock_t end33 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end33 - begin33)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nMerge Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin34 = clock();
   mergeSort(v41, MAX2);
   mergeSort(v42, MAX2);
   mergeSort(v43, MAX2);
   mergeSort(v44, MAX2);
   mergeSort(v45, MAX2);
   mergeSort(v46, MAX2);
   mergeSort(v47, MAX2);
   mergeSort(v48, MAX2);
   mergeSort(v49, MAX2);
   mergeSort(v50, MAX2);
   mergeSort(v51, MAX2);
   mergeSort(v52, MAX2);
   mergeSort(v53, MAX2);
   mergeSort(v54, MAX2);
   mergeSort(v55, MAX2);
   mergeSort(v56, MAX2);
   mergeSort(v57, MAX2);
   mergeSort(v58, MAX2);
   mergeSort(v59, MAX2);
   mergeSort(v60, MAX2);
   mergeSort(v61, MAX2);
   mergeSort(v62, MAX2);
   mergeSort(v63, MAX2);
   mergeSort(v64, MAX2);
   mergeSort(v65, MAX2);
   mergeSort(v66, MAX2);
   mergeSort(v67, MAX2);
   mergeSort(v68, MAX2);
   mergeSort(v69, MAX2);
   mergeSort(v70, MAX2);
   mergeSort(v71, MAX2);
   mergeSort(v72, MAX2);
   mergeSort(v73, MAX2);
   mergeSort(v74, MAX2);
   mergeSort(v75, MAX2);
   mergeSort(v76, MAX2);
   mergeSort(v77, MAX2);
   mergeSort(v78, MAX2);
   mergeSort(v79, MAX2);
   mergeSort(v80, MAX2);
   clock_t end34 = clock();
   
   timeSpent = 0.0;
   timeSpent += (((double)(end34 - begin34)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin35 = clock();
   mergeSort(v81, MAX3);
   mergeSort(v82, MAX3);
   mergeSort(v83, MAX3);
   mergeSort(v84, MAX3);
   mergeSort(v85, MAX3);
   mergeSort(v86, MAX3);
   mergeSort(v87, MAX3);
   mergeSort(v88, MAX3);
   mergeSort(v89, MAX3);
   mergeSort(v90, MAX3);
   mergeSort(v91, MAX3);
   mergeSort(v92, MAX3);
   mergeSort(v93, MAX3);
   mergeSort(v94, MAX3);
   mergeSort(v95, MAX3);
   mergeSort(v96, MAX3);
   mergeSort(v97, MAX3);
   mergeSort(v98, MAX3);
   mergeSort(v99, MAX3);
   mergeSort(v100, MAX3);
   mergeSort(v101, MAX3);
   mergeSort(v102, MAX3);
   mergeSort(v103, MAX3);
   mergeSort(v104, MAX3);
   mergeSort(v105, MAX3);
   mergeSort(v106, MAX3);
   mergeSort(v107, MAX3);
   mergeSort(v108, MAX3);
   mergeSort(v109, MAX3);
   mergeSort(v110, MAX3);
   mergeSort(v111, MAX3);
   mergeSort(v112, MAX3);
   mergeSort(v113, MAX3);
   mergeSort(v114, MAX3);
   mergeSort(v115, MAX3);
   mergeSort(v116, MAX3);
   mergeSort(v117, MAX3);
   mergeSort(v118, MAX3);
   mergeSort(v119, MAX3);
   mergeSort(v120, MAX3);
   clock_t end35 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end35 - begin35)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin36 = clock();
   mergeSort(v121, MAX4);
   mergeSort(v122, MAX4);
   mergeSort(v123, MAX4);
   mergeSort(v124, MAX4);
   mergeSort(v125, MAX4);
   mergeSort(v126, MAX4);
   mergeSort(v127, MAX4);
   mergeSort(v128, MAX4);
   mergeSort(v129, MAX4);
   mergeSort(v130, MAX4);
   mergeSort(v131, MAX4);
   mergeSort(v132, MAX4);
   mergeSort(v133, MAX4);
   mergeSort(v134, MAX4);
   mergeSort(v135, MAX4);
   mergeSort(v136, MAX4);
   mergeSort(v137, MAX4);
   mergeSort(v138, MAX4);
   mergeSort(v139, MAX4);
   mergeSort(v140, MAX4);
   mergeSort(v141, MAX4);
   mergeSort(v142, MAX4);
   mergeSort(v143, MAX4);
   mergeSort(v144, MAX4);
   mergeSort(v145, MAX4);
   mergeSort(v146, MAX4);
   mergeSort(v147, MAX4);
   mergeSort(v148, MAX4);
   mergeSort(v149, MAX4);
   mergeSort(v150, MAX4);
   mergeSort(v151, MAX4);
   mergeSort(v152, MAX4);
   mergeSort(v153, MAX4);
   mergeSort(v154, MAX4);
   mergeSort(v155, MAX4);
   mergeSort(v156, MAX4);
   mergeSort(v157, MAX4);
   mergeSort(v158, MAX4);
   mergeSort(v159, MAX4);
   mergeSort(v160, MAX4);
   clock_t end36 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end36 - begin36)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin37 = clock();
   mergeSort(v161, MAX5);
   mergeSort(v162, MAX5);
   mergeSort(v163, MAX5);
   mergeSort(v164, MAX5);
   mergeSort(v165, MAX5);
   mergeSort(v166, MAX5);
   mergeSort(v167, MAX5);
   mergeSort(v168, MAX5);
   mergeSort(v169, MAX5);
   mergeSort(v170, MAX5);
   mergeSort(v171, MAX5);
   mergeSort(v172, MAX5);
   mergeSort(v173, MAX5);
   mergeSort(v174, MAX5);
   mergeSort(v175, MAX5);
   mergeSort(v176, MAX5);
   mergeSort(v177, MAX5);
   mergeSort(v178, MAX5);
   mergeSort(v179, MAX5);
   mergeSort(v180, MAX5);
   mergeSort(v181, MAX5);
   mergeSort(v182, MAX5);
   mergeSort(v183, MAX5);
   mergeSort(v184, MAX5);
   mergeSort(v185, MAX5);
   mergeSort(v186, MAX5);
   mergeSort(v187, MAX5);
   mergeSort(v188, MAX5);
   mergeSort(v189, MAX5);
   mergeSort(v190, MAX5);
   mergeSort(v191, MAX5);
   mergeSort(v192, MAX5);
   mergeSort(v193, MAX5);
   mergeSort(v194, MAX5);
   mergeSort(v195, MAX5);
   mergeSort(v196, MAX5);
   mergeSort(v197, MAX5);
   mergeSort(v198, MAX5);
   mergeSort(v199, MAX5);
   mergeSort(v200, MAX5);
   clock_t end37 = clock();
   
   timeSpent = 0.0;
   timeSpent += (((double)(end37 - begin37)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin38 = clock();
   mergeSort(v201, MAX6);
   mergeSort(v202, MAX6);
   mergeSort(v203, MAX6);
   mergeSort(v204, MAX6);
   mergeSort(v205, MAX6);
   mergeSort(v206, MAX6);
   mergeSort(v207, MAX6);
   mergeSort(v208, MAX6);
   mergeSort(v209, MAX6);
   mergeSort(v210, MAX6);
   mergeSort(v211, MAX6);
   mergeSort(v212, MAX6);
   mergeSort(v213, MAX6);
   mergeSort(v214, MAX6);
   mergeSort(v215, MAX6);
   mergeSort(v216, MAX6);
   mergeSort(v217, MAX6);
   mergeSort(v218, MAX6);
   mergeSort(v219, MAX6);
   mergeSort(v220, MAX6);
   mergeSort(v221, MAX6);
   mergeSort(v222, MAX6);
   mergeSort(v223, MAX6);
   mergeSort(v224, MAX6);
   mergeSort(v225, MAX6);
   mergeSort(v226, MAX6);
   mergeSort(v227, MAX6);
   mergeSort(v228, MAX6);
   mergeSort(v229, MAX6);
   mergeSort(v230, MAX6);
   mergeSort(v231, MAX6);
   mergeSort(v232, MAX6);
   mergeSort(v233, MAX6);
   mergeSort(v234, MAX6);
   mergeSort(v235, MAX6);
   mergeSort(v236, MAX6);
   mergeSort(v237, MAX6);
   mergeSort(v238, MAX6);
   mergeSort(v239, MAX6);
   mergeSort(v240, MAX6);
   clock_t end38 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end38 - begin38)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin39 = clock();
   mergeSort(v241, MAX7);
   mergeSort(v242, MAX7);
   mergeSort(v243, MAX7);
   mergeSort(v244, MAX7);
   mergeSort(v245, MAX7);
   mergeSort(v246, MAX7);
   mergeSort(v247, MAX7);
   mergeSort(v248, MAX7);
   mergeSort(v249, MAX7);
   mergeSort(v250, MAX7);
   mergeSort(v251, MAX7);
   mergeSort(v252, MAX7);
   mergeSort(v253, MAX7);
   mergeSort(v254, MAX7);
   mergeSort(v255, MAX7);
   mergeSort(v256, MAX7);
   mergeSort(v257, MAX7);
   mergeSort(v258, MAX7);
   mergeSort(v259, MAX7);
   mergeSort(v260, MAX7);
   mergeSort(v261, MAX7);
   mergeSort(v262, MAX7);
   mergeSort(v263, MAX7);
   mergeSort(v264, MAX7);
   mergeSort(v265, MAX7);
   mergeSort(v266, MAX7);
   mergeSort(v267, MAX7);
   mergeSort(v268, MAX7);
   mergeSort(v269, MAX7);
   mergeSort(v270, MAX7);
   mergeSort(v271, MAX7);
   mergeSort(v272, MAX7);
   mergeSort(v273, MAX7);
   mergeSort(v274, MAX7);
   mergeSort(v275, MAX7);
   mergeSort(v276, MAX7);
   mergeSort(v277, MAX7);
   mergeSort(v278, MAX7);
   mergeSort(v279, MAX7);
   mergeSort(v280, MAX7);
   clock_t end39 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end39 - begin39)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin40 = clock();
   mergeSort(v264, MAX8);
   mergeSort(v282, MAX8);
   mergeSort(v283, MAX8);
   mergeSort(v284, MAX8);
   mergeSort(v285, MAX8);
   mergeSort(v286, MAX8);
   mergeSort(v287, MAX8);
   mergeSort(v288, MAX8);
   mergeSort(v289, MAX8);
   mergeSort(v290, MAX8);
   mergeSort(v291, MAX8);
   mergeSort(v292, MAX8);
   mergeSort(v293, MAX8);
   mergeSort(v294, MAX8);
   mergeSort(v295, MAX8);
   mergeSort(v296, MAX8);
   mergeSort(v297, MAX8);
   mergeSort(v298, MAX8);
   mergeSort(v299, MAX8);
   mergeSort(v300, MAX8);
   mergeSort(v301, MAX8);
   mergeSort(v302, MAX8);
   mergeSort(v303, MAX8);
   mergeSort(v304, MAX8);
   mergeSort(v305, MAX8);
   mergeSort(v306, MAX8);
   mergeSort(v307, MAX8);
   mergeSort(v308, MAX8);
   mergeSort(v309, MAX8);
   mergeSort(v310, MAX8);
   mergeSort(v311, MAX8);
   mergeSort(v312, MAX8);
   mergeSort(v313, MAX8);
   mergeSort(v314, MAX8);
   mergeSort(v315, MAX8);
   mergeSort(v316, MAX8);
   mergeSort(v317, MAX8);
   mergeSort(v318, MAX8);
   mergeSort(v319, MAX8);
   mergeSort(v320, MAX8);
   clock_t end40 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end40 - begin40)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin41 = clock();
   quickSort(v1, MAX1);
   quickSort(v2, MAX1);
   quickSort(v3, MAX1);
   quickSort(v4, MAX1);
   quickSort(v5, MAX1);
   quickSort(v6, MAX1);
   quickSort(v7, MAX1);
   quickSort(v8, MAX1);
   quickSort(v9, MAX1);
   quickSort(v10, MAX1);
   quickSort(v11, MAX1);
   quickSort(v12, MAX1);
   quickSort(v13, MAX1);
   quickSort(v14, MAX1);
   quickSort(v15, MAX1);
   quickSort(v16, MAX1);
   quickSort(v17, MAX1);
   quickSort(v18, MAX1);
   quickSort(v19, MAX1);
   quickSort(v20, MAX1);
   quickSort(v21, MAX1);
   quickSort(v22, MAX1);
   quickSort(v23, MAX1);
   quickSort(v24, MAX1);
   quickSort(v25, MAX1);
   quickSort(v26, MAX1);
   quickSort(v27, MAX1);
   quickSort(v28, MAX1);
   quickSort(v29, MAX1);
   quickSort(v30, MAX1);
   quickSort(v31, MAX1);
   quickSort(v32, MAX1);
   quickSort(v33, MAX1);
   quickSort(v34, MAX1);
   quickSort(v35, MAX1);
   quickSort(v36, MAX1);
   quickSort(v37, MAX1);
   quickSort(v38, MAX1);
   quickSort(v39, MAX1);
   quickSort(v40, MAX1);
   clock_t end41 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end41 - begin41)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nQuickSort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 posicoes: %.3f ms\n", timeSpent);

   clock_t begin42 = clock();
   quickSort(v41, MAX2);
   quickSort(v42, MAX2);
   quickSort(v43, MAX2);
   quickSort(v44, MAX2);
   quickSort(v45, MAX2);
   quickSort(v46, MAX2);
   quickSort(v47, MAX2);
   quickSort(v48, MAX2);
   quickSort(v49, MAX2);
   quickSort(v50, MAX2);
   quickSort(v51, MAX2);
   quickSort(v52, MAX2);
   quickSort(v53, MAX2);
   quickSort(v54, MAX2);
   quickSort(v55, MAX2);
   quickSort(v56, MAX2);
   quickSort(v57, MAX2);
   quickSort(v58, MAX2);
   quickSort(v59, MAX2);
   quickSort(v60, MAX2);
   quickSort(v61, MAX2);
   quickSort(v62, MAX2);
   quickSort(v63, MAX2);
   quickSort(v64, MAX2);
   quickSort(v65, MAX2);
   quickSort(v66, MAX2);
   quickSort(v67, MAX2);
   quickSort(v68, MAX2);
   quickSort(v69, MAX2);
   quickSort(v70, MAX2);
   quickSort(v71, MAX2);
   quickSort(v72, MAX2);
   quickSort(v73, MAX2);
   quickSort(v74, MAX2);
   quickSort(v75, MAX2);
   quickSort(v76, MAX2);
   quickSort(v77, MAX2);
   quickSort(v78, MAX2);
   quickSort(v79, MAX2);
   quickSort(v80, MAX2);
   clock_t end42 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end42 - begin42)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 posicoes: %.3f ms\n", timeSpent);

   clock_t begin43 = clock();
   quickSort(v81, MAX3);
   quickSort(v82, MAX3);
   quickSort(v83, MAX3);
   quickSort(v84, MAX3);
   quickSort(v85, MAX3);
   quickSort(v86, MAX3);
   quickSort(v87, MAX3);
   quickSort(v88, MAX3);
   quickSort(v89, MAX3);
   quickSort(v90, MAX3);
   quickSort(v91, MAX3);
   quickSort(v92, MAX3);
   quickSort(v93, MAX3);
   quickSort(v94, MAX3);
   quickSort(v95, MAX3);
   quickSort(v96, MAX3);
   quickSort(v97, MAX3);
   quickSort(v98, MAX3);
   quickSort(v99, MAX3);
   quickSort(v100, MAX3);
   quickSort(v101, MAX3);
   quickSort(v102, MAX3);
   quickSort(v103, MAX3);
   quickSort(v104, MAX3);
   quickSort(v105, MAX3);
   quickSort(v106, MAX3);
   quickSort(v107, MAX3);
   quickSort(v108, MAX3);
   quickSort(v109, MAX3);
   quickSort(v110, MAX3);
   quickSort(v111, MAX3);
   quickSort(v112, MAX3);
   quickSort(v113, MAX3);
   quickSort(v114, MAX3);
   quickSort(v115, MAX3);
   quickSort(v116, MAX3);
   quickSort(v117, MAX3);
   quickSort(v118, MAX3);
   quickSort(v119, MAX3);
   quickSort(v120, MAX3);
   clock_t end43 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end43 - begin43)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 posicoes: %.3f ms\n", timeSpent);

   clock_t begin44 = clock();
   quickSort(v121, MAX4);
   quickSort(v122, MAX4);
   quickSort(v123, MAX4);
   quickSort(v124, MAX4);
   quickSort(v125, MAX4);
   quickSort(v126, MAX4);
   quickSort(v127, MAX4);
   quickSort(v128, MAX4);
   quickSort(v129, MAX4);
   quickSort(v130, MAX4);
   quickSort(v131, MAX4);
   quickSort(v132, MAX4);
   quickSort(v133, MAX4);
   quickSort(v134, MAX4);
   quickSort(v135, MAX4);
   quickSort(v136, MAX4);
   quickSort(v137, MAX4);
   quickSort(v138, MAX4);
   quickSort(v139, MAX4);
   quickSort(v140, MAX4);
   quickSort(v141, MAX4);
   quickSort(v142, MAX4);
   quickSort(v143, MAX4);
   quickSort(v144, MAX4);
   quickSort(v145, MAX4);
   quickSort(v146, MAX4);
   quickSort(v147, MAX4);
   quickSort(v148, MAX4);
   quickSort(v149, MAX4);
   quickSort(v150, MAX4);
   quickSort(v151, MAX4);
   quickSort(v152, MAX4);
   quickSort(v153, MAX4);
   quickSort(v154, MAX4);
   quickSort(v155, MAX4);
   quickSort(v156, MAX4);
   quickSort(v157, MAX4);
   quickSort(v158, MAX4);
   quickSort(v159, MAX4);
   quickSort(v160, MAX4);
   clock_t end44 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end44 - begin44)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 posicoes: %.3f ms\n", timeSpent);

   clock_t begin45 = clock();
   quickSort(v161, MAX5);
   quickSort(v162, MAX5);
   quickSort(v163, MAX5);
   quickSort(v164, MAX5);
   quickSort(v165, MAX5);
   quickSort(v166, MAX5);
   quickSort(v167, MAX5);
   quickSort(v168, MAX5);
   quickSort(v169, MAX5);
   quickSort(v170, MAX5);
   quickSort(v171, MAX5);
   quickSort(v172, MAX5);
   quickSort(v173, MAX5);
   quickSort(v174, MAX5);
   quickSort(v175, MAX5);
   quickSort(v176, MAX5);
   quickSort(v177, MAX5);
   quickSort(v178, MAX5);
   quickSort(v179, MAX5);
   quickSort(v180, MAX5);
   quickSort(v181, MAX5);
   quickSort(v182, MAX5);
   quickSort(v183, MAX5);
   quickSort(v184, MAX5);
   quickSort(v185, MAX5);
   quickSort(v186, MAX5);
   quickSort(v187, MAX5);
   quickSort(v188, MAX5);
   quickSort(v189, MAX5);
   quickSort(v190, MAX5);
   quickSort(v191, MAX5);
   quickSort(v192, MAX5);
   quickSort(v193, MAX5);
   quickSort(v194, MAX5);
   quickSort(v195, MAX5);
   quickSort(v196, MAX5);
   quickSort(v197, MAX5);
   quickSort(v198, MAX5);
   quickSort(v199, MAX5);
   quickSort(v200, MAX5);
   clock_t end45 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end45 - begin45)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 posicoes: %.3f ms\n", timeSpent);

   clock_t begin46 = clock();
   quickSort(v201, MAX6);
   quickSort(v202, MAX6);
   quickSort(v203, MAX6);
   quickSort(v204, MAX6);
   quickSort(v205, MAX6);
   quickSort(v206, MAX6);
   quickSort(v207, MAX6);
   quickSort(v208, MAX6);
   quickSort(v209, MAX6);
   quickSort(v210, MAX6);
   quickSort(v211, MAX6);
   quickSort(v212, MAX6);
   quickSort(v213, MAX6);
   quickSort(v214, MAX6);
   quickSort(v215, MAX6);
   quickSort(v216, MAX6);
   quickSort(v217, MAX6);
   quickSort(v218, MAX6);
   quickSort(v219, MAX6);
   quickSort(v220, MAX6);
   quickSort(v221, MAX6);
   quickSort(v222, MAX6);
   quickSort(v223, MAX6);
   quickSort(v224, MAX6);
   quickSort(v225, MAX6);
   quickSort(v226, MAX6);
   quickSort(v227, MAX6);
   quickSort(v228, MAX6);
   quickSort(v229, MAX6);
   quickSort(v230, MAX6);
   quickSort(v231, MAX6);
   quickSort(v232, MAX6);
   quickSort(v233, MAX6);
   quickSort(v234, MAX6);
   quickSort(v235, MAX6);
   quickSort(v236, MAX6);
   quickSort(v237, MAX6);
   quickSort(v238, MAX6);
   quickSort(v239, MAX6);
   quickSort(v240, MAX6);
   clock_t end46 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end46 - begin46)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 posicoes: %.3f ms\n", timeSpent);

   clock_t begin47 = clock();
   quickSort(v241, MAX7);
   quickSort(v242, MAX7);
   quickSort(v243, MAX7);
   quickSort(v244, MAX7);
   quickSort(v245, MAX7);
   quickSort(v246, MAX7);
   quickSort(v247, MAX7);
   quickSort(v248, MAX7);
   quickSort(v249, MAX7);
   quickSort(v250, MAX7);
   quickSort(v251, MAX7);
   quickSort(v252, MAX7);
   quickSort(v253, MAX7);
   quickSort(v254, MAX7);
   quickSort(v255, MAX7);
   quickSort(v256, MAX7);
   quickSort(v257, MAX7);
   quickSort(v258, MAX7);
   quickSort(v259, MAX7);
   quickSort(v260, MAX7);
   quickSort(v261, MAX7);
   quickSort(v262, MAX7);
   quickSort(v263, MAX7);
   quickSort(v264, MAX7);
   quickSort(v265, MAX7);
   quickSort(v266, MAX7);
   quickSort(v267, MAX7);
   quickSort(v268, MAX7);
   quickSort(v269, MAX7);
   quickSort(v270, MAX7);
   quickSort(v271, MAX7);
   quickSort(v272, MAX7);
   quickSort(v273, MAX7);
   quickSort(v274, MAX7);
   quickSort(v275, MAX7);
   quickSort(v276, MAX7);
   quickSort(v277, MAX7);
   quickSort(v278, MAX7);
   quickSort(v279, MAX7);
   quickSort(v280, MAX7);
   clock_t end47 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end47 - begin47)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 posicoes: %.3f ms\n", timeSpent);

   clock_t begin48 = clock();
   quickSort(v264, MAX8);
   quickSort(v282, MAX8);
   quickSort(v283, MAX8);
   quickSort(v284, MAX8);
   quickSort(v285, MAX8);
   quickSort(v286, MAX8);
   quickSort(v287, MAX8);
   quickSort(v288, MAX8);
   quickSort(v289, MAX8);
   quickSort(v290, MAX8);
   quickSort(v291, MAX8);
   quickSort(v292, MAX8);
   quickSort(v293, MAX8);
   quickSort(v294, MAX8);
   quickSort(v295, MAX8);
   quickSort(v296, MAX8);
   quickSort(v297, MAX8);
   quickSort(v298, MAX8);
   quickSort(v299, MAX8);
   quickSort(v300, MAX8);
   quickSort(v301, MAX8);
   quickSort(v302, MAX8);
   quickSort(v303, MAX8);
   quickSort(v304, MAX8);
   quickSort(v305, MAX8);
   quickSort(v306, MAX8);
   quickSort(v307, MAX8);
   quickSort(v308, MAX8);
   quickSort(v309, MAX8);
   quickSort(v310, MAX8);
   quickSort(v311, MAX8);
   quickSort(v312, MAX8);
   quickSort(v313, MAX8);
   quickSort(v314, MAX8);
   quickSort(v315, MAX8);
   quickSort(v316, MAX8);
   quickSort(v317, MAX8);
   quickSort(v318, MAX8);
   quickSort(v319, MAX8);
   quickSort(v320, MAX8);
   clock_t end48 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end48 - begin48)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 posicoes: %.3f ms\n", timeSpent);

   clock_t begin49 = clock();
   radixSort(v1, MAX1);
   radixSort(v2, MAX1);
   radixSort(v3, MAX1);
   radixSort(v4, MAX1);
   radixSort(v5, MAX1);
   radixSort(v6, MAX1);
   radixSort(v7, MAX1);
   radixSort(v8, MAX1);
   radixSort(v9, MAX1);
   radixSort(v10, MAX1);
   radixSort(v11, MAX1);
   radixSort(v12, MAX1);
   radixSort(v13, MAX1);
   radixSort(v14, MAX1);
   radixSort(v15, MAX1);
   radixSort(v16, MAX1);
   radixSort(v17, MAX1);
   radixSort(v18, MAX1);
   radixSort(v19, MAX1);
   radixSort(v20, MAX1);
   radixSort(v21, MAX1);
   radixSort(v22, MAX1);
   radixSort(v23, MAX1);
   radixSort(v24, MAX1);
   radixSort(v25, MAX1);
   radixSort(v26, MAX1);
   radixSort(v27, MAX1);
   radixSort(v28, MAX1);
   radixSort(v29, MAX1);
   radixSort(v30, MAX1);
   radixSort(v31, MAX1);
   radixSort(v32, MAX1);
   radixSort(v33, MAX1);
   radixSort(v34, MAX1);
   radixSort(v35, MAX1);
   radixSort(v36, MAX1);
   radixSort(v37, MAX1);
   radixSort(v38, MAX1);
   radixSort(v39, MAX1);
   radixSort(v40, MAX1);
   clock_t end49 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end49 - begin49)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nRadix Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin50 = clock();
   radixSort(v41, MAX2);
   radixSort(v42, MAX2);
   radixSort(v43, MAX2);
   radixSort(v44, MAX2);
   radixSort(v45, MAX2);
   radixSort(v46, MAX2);
   radixSort(v47, MAX2);
   radixSort(v48, MAX2);
   radixSort(v49, MAX2);
   radixSort(v50, MAX2);
   radixSort(v51, MAX2);
   radixSort(v52, MAX2);
   radixSort(v53, MAX2);
   radixSort(v54, MAX2);
   radixSort(v55, MAX2);
   radixSort(v56, MAX2);
   radixSort(v57, MAX2);
   radixSort(v58, MAX2);
   radixSort(v59, MAX2);
   radixSort(v60, MAX2);
   radixSort(v61, MAX2);
   radixSort(v62, MAX2);
   radixSort(v63, MAX2);
   radixSort(v64, MAX2);
   radixSort(v65, MAX2);
   radixSort(v66, MAX2);
   radixSort(v67, MAX2);
   radixSort(v68, MAX2);
   radixSort(v69, MAX2);
   radixSort(v70, MAX2);
   radixSort(v71, MAX2);
   radixSort(v72, MAX2);
   radixSort(v73, MAX2);
   radixSort(v74, MAX2);
   radixSort(v75, MAX2);
   radixSort(v76, MAX2);
   radixSort(v77, MAX2);
   radixSort(v78, MAX2);
   radixSort(v79, MAX2);
   radixSort(v80, MAX2);
   clock_t end50 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end50 - begin50)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin51 = clock();
   radixSort(v81, MAX3);
   radixSort(v82, MAX3);
   radixSort(v83, MAX3);
   radixSort(v84, MAX3);
   radixSort(v85, MAX3);
   radixSort(v86, MAX3);
   radixSort(v87, MAX3);
   radixSort(v88, MAX3);
   radixSort(v89, MAX3);
   radixSort(v90, MAX3);
   radixSort(v91, MAX3);
   radixSort(v92, MAX3);
   radixSort(v93, MAX3);
   radixSort(v94, MAX3);
   radixSort(v95, MAX3);
   radixSort(v96, MAX3);
   radixSort(v97, MAX3);
   radixSort(v98, MAX3);
   radixSort(v99, MAX3);
   radixSort(v100, MAX3);
   radixSort(v101, MAX3);
   radixSort(v102, MAX3);
   radixSort(v103, MAX3);
   radixSort(v104, MAX3);
   radixSort(v105, MAX3);
   radixSort(v106, MAX3);
   radixSort(v107, MAX3);
   radixSort(v108, MAX3);
   radixSort(v109, MAX3);
   radixSort(v110, MAX3);
   radixSort(v111, MAX3);
   radixSort(v112, MAX3);
   radixSort(v113, MAX3);
   radixSort(v114, MAX3);
   radixSort(v115, MAX3);
   radixSort(v116, MAX3);
   radixSort(v117, MAX3);
   radixSort(v118, MAX3);
   radixSort(v119, MAX3);
   radixSort(v120, MAX3);
   clock_t end51 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end51 - begin51)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin52 = clock();
   radixSort(v121, MAX4);
   radixSort(v122, MAX4);
   radixSort(v123, MAX4);
   radixSort(v124, MAX4);
   radixSort(v125, MAX4);
   radixSort(v126, MAX4);
   radixSort(v127, MAX4);
   radixSort(v128, MAX4);
   radixSort(v129, MAX4);
   radixSort(v130, MAX4);
   radixSort(v131, MAX4);
   radixSort(v132, MAX4);
   radixSort(v133, MAX4);
   radixSort(v134, MAX4);
   radixSort(v135, MAX4);
   radixSort(v136, MAX4);
   radixSort(v137, MAX4);
   radixSort(v138, MAX4);
   radixSort(v139, MAX4);
   radixSort(v140, MAX4);
   radixSort(v141, MAX4);
   radixSort(v142, MAX4);
   radixSort(v143, MAX4);
   radixSort(v144, MAX4);
   radixSort(v145, MAX4);
   radixSort(v146, MAX4);
   radixSort(v147, MAX4);
   radixSort(v148, MAX4);
   radixSort(v149, MAX4);
   radixSort(v150, MAX4);
   radixSort(v151, MAX4);
   radixSort(v152, MAX4);
   radixSort(v153, MAX4);
   radixSort(v154, MAX4);
   radixSort(v155, MAX4);
   radixSort(v156, MAX4);
   radixSort(v157, MAX4);
   radixSort(v158, MAX4);
   radixSort(v159, MAX4);
   radixSort(v160, MAX4);
   clock_t end52 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end52 - begin52)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin53 = clock();
   radixSort(v161, MAX5);
   radixSort(v162, MAX5);
   radixSort(v163, MAX5);
   radixSort(v164, MAX5);
   radixSort(v165, MAX5);
   radixSort(v166, MAX5);
   radixSort(v167, MAX5);
   radixSort(v168, MAX5);
   radixSort(v169, MAX5);
   radixSort(v170, MAX5);
   radixSort(v171, MAX5);
   radixSort(v172, MAX5);
   radixSort(v173, MAX5);
   radixSort(v174, MAX5);
   radixSort(v175, MAX5);
   radixSort(v176, MAX5);
   radixSort(v177, MAX5);
   radixSort(v178, MAX5);
   radixSort(v179, MAX5);
   radixSort(v180, MAX5);
   radixSort(v181, MAX5);
   radixSort(v182, MAX5);
   radixSort(v183, MAX5);
   radixSort(v184, MAX5);
   radixSort(v185, MAX5);
   radixSort(v186, MAX5);
   radixSort(v187, MAX5);
   radixSort(v188, MAX5);
   radixSort(v189, MAX5);
   radixSort(v190, MAX5);
   radixSort(v191, MAX5);
   radixSort(v192, MAX5);
   radixSort(v193, MAX5);
   radixSort(v194, MAX5);
   radixSort(v195, MAX5);
   radixSort(v196, MAX5);
   radixSort(v197, MAX5);
   radixSort(v198, MAX5);
   radixSort(v199, MAX5);
   radixSort(v200, MAX5);
   clock_t end53 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end53 - begin53)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin54 = clock();
   radixSort(v201, MAX6);
   radixSort(v202, MAX6);
   radixSort(v203, MAX6);
   radixSort(v204, MAX6);
   radixSort(v205, MAX6);
   radixSort(v206, MAX6);
   radixSort(v207, MAX6);
   radixSort(v208, MAX6);
   radixSort(v209, MAX6);
   radixSort(v210, MAX6);
   radixSort(v211, MAX6);
   radixSort(v212, MAX6);
   radixSort(v213, MAX6);
   radixSort(v214, MAX6);
   radixSort(v215, MAX6);
   radixSort(v216, MAX6);
   radixSort(v217, MAX6);
   radixSort(v218, MAX6);
   radixSort(v219, MAX6);
   radixSort(v220, MAX6);
   radixSort(v221, MAX6);
   radixSort(v222, MAX6);
   radixSort(v223, MAX6);
   radixSort(v224, MAX6);
   radixSort(v225, MAX6);
   radixSort(v226, MAX6);
   radixSort(v227, MAX6);
   radixSort(v228, MAX6);
   radixSort(v229, MAX6);
   radixSort(v230, MAX6);
   radixSort(v231, MAX6);
   radixSort(v232, MAX6);
   radixSort(v233, MAX6);
   radixSort(v234, MAX6);
   radixSort(v235, MAX6);
   radixSort(v236, MAX6);
   radixSort(v237, MAX6);
   radixSort(v238, MAX6);
   radixSort(v239, MAX6);
   radixSort(v240, MAX6);
   clock_t end54 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end54 - begin54)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin55 = clock();
   radixSort(v241, MAX7);
   radixSort(v242, MAX7);
   radixSort(v243, MAX7);
   radixSort(v244, MAX7);
   radixSort(v245, MAX7);
   radixSort(v246, MAX7);
   radixSort(v247, MAX7);
   radixSort(v248, MAX7);
   radixSort(v249, MAX7);
   radixSort(v250, MAX7);
   radixSort(v251, MAX7);
   radixSort(v252, MAX7);
   radixSort(v253, MAX7);
   radixSort(v254, MAX7);
   radixSort(v255, MAX7);
   radixSort(v256, MAX7);
   radixSort(v257, MAX7);
   radixSort(v258, MAX7);
   radixSort(v259, MAX7);
   radixSort(v260, MAX7);
   radixSort(v261, MAX7);
   radixSort(v262, MAX7);
   radixSort(v263, MAX7);
   radixSort(v264, MAX7);
   radixSort(v265, MAX7);
   radixSort(v266, MAX7);
   radixSort(v267, MAX7);
   radixSort(v268, MAX7);
   radixSort(v269, MAX7);
   radixSort(v270, MAX7);
   radixSort(v271, MAX7);
   radixSort(v272, MAX7);
   radixSort(v273, MAX7);
   radixSort(v274, MAX7);
   radixSort(v275, MAX7);
   radixSort(v276, MAX7);
   radixSort(v277, MAX7);
   radixSort(v278, MAX7);
   radixSort(v279, MAX7);
   radixSort(v280, MAX7);
   clock_t end55 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end55 - begin55)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin56 = clock();
   radixSort(v264, MAX8);
   radixSort(v282, MAX8);
   radixSort(v283, MAX8);
   radixSort(v284, MAX8);
   radixSort(v285, MAX8);
   radixSort(v286, MAX8);
   radixSort(v287, MAX8);
   radixSort(v288, MAX8);
   radixSort(v289, MAX8);
   radixSort(v290, MAX8);
   radixSort(v291, MAX8);
   radixSort(v292, MAX8);
   radixSort(v293, MAX8);
   radixSort(v294, MAX8);
   radixSort(v295, MAX8);
   radixSort(v296, MAX8);
   radixSort(v297, MAX8);
   radixSort(v298, MAX8);
   radixSort(v299, MAX8);
   radixSort(v300, MAX8);
   radixSort(v301, MAX8);
   radixSort(v302, MAX8);
   radixSort(v303, MAX8);
   radixSort(v304, MAX8);
   radixSort(v305, MAX8);
   radixSort(v306, MAX8);
   radixSort(v307, MAX8);
   radixSort(v308, MAX8);
   radixSort(v309, MAX8);
   radixSort(v310, MAX8);
   radixSort(v311, MAX8);
   radixSort(v312, MAX8);
   radixSort(v313, MAX8);
   radixSort(v314, MAX8);
   radixSort(v315, MAX8);
   radixSort(v316, MAX8);
   radixSort(v317, MAX8);
   radixSort(v318, MAX8);
   radixSort(v319, MAX8);
   radixSort(v320, MAX8);
   clock_t end56 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end56 - begin56)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   clock_t begin57 = clock();
   selectionSort(v1, MAX1);
   selectionSort(v2, MAX1);
   selectionSort(v3, MAX1);
   selectionSort(v4, MAX1);
   selectionSort(v5, MAX1);
   selectionSort(v6, MAX1);
   selectionSort(v7, MAX1);
   selectionSort(v8, MAX1);
   selectionSort(v9, MAX1);
   selectionSort(v10, MAX1);
   selectionSort(v11, MAX1);
   selectionSort(v12, MAX1);
   selectionSort(v13, MAX1);
   selectionSort(v14, MAX1);
   selectionSort(v15, MAX1);
   selectionSort(v16, MAX1);
   selectionSort(v17, MAX1);
   selectionSort(v18, MAX1);
   selectionSort(v19, MAX1);
   selectionSort(v20, MAX1);
   selectionSort(v21, MAX1);
   selectionSort(v22, MAX1);
   selectionSort(v23, MAX1);
   selectionSort(v24, MAX1);
   selectionSort(v25, MAX1);
   selectionSort(v26, MAX1);
   selectionSort(v27, MAX1);
   selectionSort(v28, MAX1);
   selectionSort(v29, MAX1);
   selectionSort(v30, MAX1);
   selectionSort(v31, MAX1);
   selectionSort(v32, MAX1);
   selectionSort(v33, MAX1);
   selectionSort(v34, MAX1);
   selectionSort(v35, MAX1);
   selectionSort(v36, MAX1);
   selectionSort(v37, MAX1);
   selectionSort(v38, MAX1);
   selectionSort(v39, MAX1);
   selectionSort(v40, MAX1);
   clock_t end57 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end57 - begin57)/40) / CLOCKS_PER_SEC) * 1000;
   printf("\nSelection Sort:\n");
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin58 = clock();
   selectionSort(v41, MAX2);
   selectionSort(v42, MAX2);
   selectionSort(v43, MAX2);
   selectionSort(v44, MAX2);
   selectionSort(v45, MAX2);
   selectionSort(v46, MAX2);
   selectionSort(v47, MAX2);
   selectionSort(v48, MAX2);
   selectionSort(v49, MAX2);
   selectionSort(v50, MAX2);
   selectionSort(v51, MAX2);
   selectionSort(v52, MAX2);
   selectionSort(v53, MAX2);
   selectionSort(v54, MAX2);
   selectionSort(v55, MAX2);
   selectionSort(v56, MAX2);
   selectionSort(v57, MAX2);
   selectionSort(v58, MAX2);
   selectionSort(v59, MAX2);
   selectionSort(v60, MAX2);
   selectionSort(v61, MAX2);
   selectionSort(v62, MAX2);
   selectionSort(v63, MAX2);
   selectionSort(v64, MAX2);
   selectionSort(v65, MAX2);
   selectionSort(v66, MAX2);
   selectionSort(v67, MAX2);
   selectionSort(v68, MAX2);
   selectionSort(v69, MAX2);
   selectionSort(v70, MAX2);
   selectionSort(v71, MAX2);
   selectionSort(v72, MAX2);
   selectionSort(v73, MAX2);
   selectionSort(v74, MAX2);
   selectionSort(v75, MAX2);
   selectionSort(v76, MAX2);
   selectionSort(v77, MAX2);
   selectionSort(v78, MAX2);
   selectionSort(v79, MAX2);
   selectionSort(v80, MAX2);
   clock_t end58 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end58 - begin58)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin59 = clock();
   selectionSort(v81, MAX3);
   selectionSort(v82, MAX3);
   selectionSort(v83, MAX3);
   selectionSort(v84, MAX3);
   selectionSort(v85, MAX3);
   selectionSort(v86, MAX3);
   selectionSort(v87, MAX3);
   selectionSort(v88, MAX3);
   selectionSort(v89, MAX3);
   selectionSort(v90, MAX3);
   selectionSort(v91, MAX3);
   selectionSort(v92, MAX3);
   selectionSort(v93, MAX3);
   selectionSort(v94, MAX3);
   selectionSort(v95, MAX3);
   selectionSort(v96, MAX3);
   selectionSort(v97, MAX3);
   selectionSort(v98, MAX3);
   selectionSort(v99, MAX3);
   selectionSort(v100, MAX3);
   selectionSort(v101, MAX3);
   selectionSort(v102, MAX3);
   selectionSort(v103, MAX3);
   selectionSort(v104, MAX3);
   selectionSort(v105, MAX3);
   selectionSort(v106, MAX3);
   selectionSort(v107, MAX3);
   selectionSort(v108, MAX3);
   selectionSort(v109, MAX3);
   selectionSort(v110, MAX3);
   selectionSort(v111, MAX3);
   selectionSort(v112, MAX3);
   selectionSort(v113, MAX3);
   selectionSort(v114, MAX3);
   selectionSort(v115, MAX3);
   selectionSort(v116, MAX3);
   selectionSort(v117, MAX3);
   selectionSort(v118, MAX3);
   selectionSort(v119, MAX3);
   selectionSort(v120, MAX3);
   clock_t end59 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end59 - begin59)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin60 = clock();
   selectionSort(v121, MAX4);
   selectionSort(v122, MAX4);
   selectionSort(v123, MAX4);
   selectionSort(v124, MAX4);
   selectionSort(v125, MAX4);
   selectionSort(v126, MAX4);
   selectionSort(v127, MAX4);
   selectionSort(v128, MAX4);
   selectionSort(v129, MAX4);
   selectionSort(v130, MAX4);
   selectionSort(v131, MAX4);
   selectionSort(v132, MAX4);
   selectionSort(v133, MAX4);
   selectionSort(v134, MAX4);
   selectionSort(v135, MAX4);
   selectionSort(v136, MAX4);
   selectionSort(v137, MAX4);
   selectionSort(v138, MAX4);
   selectionSort(v139, MAX4);
   selectionSort(v140, MAX4);
   selectionSort(v141, MAX4);
   selectionSort(v142, MAX4);
   selectionSort(v143, MAX4);
   selectionSort(v144, MAX4);
   selectionSort(v145, MAX4);
   selectionSort(v146, MAX4);
   selectionSort(v147, MAX4);
   selectionSort(v148, MAX4);
   selectionSort(v149, MAX4);
   selectionSort(v150, MAX4);
   selectionSort(v151, MAX4);
   selectionSort(v152, MAX4);
   selectionSort(v153, MAX4);
   selectionSort(v154, MAX4);
   selectionSort(v155, MAX4);
   selectionSort(v156, MAX4);
   selectionSort(v157, MAX4);
   selectionSort(v158, MAX4);
   selectionSort(v159, MAX4);
   selectionSort(v160, MAX4);
   clock_t end60 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end60 - begin60)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin61 = clock();
   selectionSort(v161, MAX5);
   selectionSort(v162, MAX5);
   selectionSort(v163, MAX5);
   selectionSort(v164, MAX5);
   selectionSort(v165, MAX5);
   selectionSort(v166, MAX5);
   selectionSort(v167, MAX5);
   selectionSort(v168, MAX5);
   selectionSort(v169, MAX5);
   selectionSort(v170, MAX5);
   selectionSort(v171, MAX5);
   selectionSort(v172, MAX5);
   selectionSort(v173, MAX5);
   selectionSort(v174, MAX5);
   selectionSort(v175, MAX5);
   selectionSort(v176, MAX5);
   selectionSort(v177, MAX5);
   selectionSort(v178, MAX5);
   selectionSort(v179, MAX5);
   selectionSort(v180, MAX5);
   selectionSort(v181, MAX5);
   selectionSort(v182, MAX5);
   selectionSort(v183, MAX5);
   selectionSort(v184, MAX5);
   selectionSort(v185, MAX5);
   selectionSort(v186, MAX5);
   selectionSort(v187, MAX5);
   selectionSort(v188, MAX5);
   selectionSort(v189, MAX5);
   selectionSort(v190, MAX5);
   selectionSort(v191, MAX5);
   selectionSort(v192, MAX5);
   selectionSort(v193, MAX5);
   selectionSort(v194, MAX5);
   selectionSort(v195, MAX5);
   selectionSort(v196, MAX5);
   selectionSort(v197, MAX5);
   selectionSort(v198, MAX5);
   selectionSort(v199, MAX5);
   selectionSort(v200, MAX5);
   clock_t end61 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end61 - begin61)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin62 = clock();
   selectionSort(v201, MAX6);
   selectionSort(v202, MAX6);
   selectionSort(v203, MAX6);
   selectionSort(v204, MAX6);
   selectionSort(v205, MAX6);
   selectionSort(v206, MAX6);
   selectionSort(v207, MAX6);
   selectionSort(v208, MAX6);
   selectionSort(v209, MAX6);
   selectionSort(v210, MAX6);
   selectionSort(v211, MAX6);
   selectionSort(v212, MAX6);
   selectionSort(v213, MAX6);
   selectionSort(v214, MAX6);
   selectionSort(v215, MAX6);
   selectionSort(v216, MAX6);
   selectionSort(v217, MAX6);
   selectionSort(v218, MAX6);
   selectionSort(v219, MAX6);
   selectionSort(v220, MAX6);
   selectionSort(v221, MAX6);
   selectionSort(v222, MAX6);
   selectionSort(v223, MAX6);
   selectionSort(v224, MAX6);
   selectionSort(v225, MAX6);
   selectionSort(v226, MAX6);
   selectionSort(v227, MAX6);
   selectionSort(v228, MAX6);
   selectionSort(v229, MAX6);
   selectionSort(v230, MAX6);
   selectionSort(v231, MAX6);
   selectionSort(v232, MAX6);
   selectionSort(v233, MAX6);
   selectionSort(v234, MAX6);
   selectionSort(v235, MAX6);
   selectionSort(v236, MAX6);
   selectionSort(v237, MAX6);
   selectionSort(v238, MAX6);
   selectionSort(v239, MAX6);
   selectionSort(v240, MAX6);
   clock_t end62 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end62 - begin62)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin63 = clock();
   selectionSort(v241, MAX7);
   selectionSort(v242, MAX7);
   selectionSort(v243, MAX7);
   selectionSort(v244, MAX7);
   selectionSort(v245, MAX7);
   selectionSort(v246, MAX7);
   selectionSort(v247, MAX7);
   selectionSort(v248, MAX7);
   selectionSort(v249, MAX7);
   selectionSort(v250, MAX7);
   selectionSort(v251, MAX7);
   selectionSort(v252, MAX7);
   selectionSort(v253, MAX7);
   selectionSort(v254, MAX7);
   selectionSort(v255, MAX7);
   selectionSort(v256, MAX7);
   selectionSort(v257, MAX7);
   selectionSort(v258, MAX7);
   selectionSort(v259, MAX7);
   selectionSort(v260, MAX7);
   selectionSort(v261, MAX7);
   selectionSort(v262, MAX7);
   selectionSort(v263, MAX7);
   selectionSort(v264, MAX7);
   selectionSort(v265, MAX7);
   selectionSort(v266, MAX7);
   selectionSort(v267, MAX7);
   selectionSort(v268, MAX7);
   selectionSort(v269, MAX7);
   selectionSort(v270, MAX7);
   selectionSort(v271, MAX7);
   selectionSort(v272, MAX7);
   selectionSort(v273, MAX7);
   selectionSort(v274, MAX7);
   selectionSort(v275, MAX7);
   selectionSort(v276, MAX7);
   selectionSort(v277, MAX7);
   selectionSort(v278, MAX7);
   selectionSort(v279, MAX7);
   selectionSort(v280, MAX7);
   clock_t end63 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end63 - begin63)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin64 = clock();
   selectionSort(v264, MAX8);
   selectionSort(v282, MAX8);
   selectionSort(v283, MAX8);
   selectionSort(v284, MAX8);
   selectionSort(v285, MAX8);
   selectionSort(v286, MAX8);
   selectionSort(v287, MAX8);
   selectionSort(v288, MAX8);
   selectionSort(v289, MAX8);
   selectionSort(v290, MAX8);
   selectionSort(v291, MAX8);
   selectionSort(v292, MAX8);
   selectionSort(v293, MAX8);
   selectionSort(v294, MAX8);
   selectionSort(v295, MAX8);
   selectionSort(v296, MAX8);
   selectionSort(v297, MAX8);
   selectionSort(v298, MAX8);
   selectionSort(v299, MAX8);
   selectionSort(v300, MAX8);
   selectionSort(v301, MAX8);
   selectionSort(v302, MAX8);
   selectionSort(v303, MAX8);
   selectionSort(v304, MAX8);
   selectionSort(v305, MAX8);
   selectionSort(v306, MAX8);
   selectionSort(v307, MAX8);
   selectionSort(v308, MAX8);
   selectionSort(v309, MAX8);
   selectionSort(v310, MAX8);
   selectionSort(v311, MAX8);
   selectionSort(v312, MAX8);
   selectionSort(v313, MAX8);
   selectionSort(v314, MAX8);
   selectionSort(v315, MAX8);
   selectionSort(v316, MAX8);
   selectionSort(v317, MAX8);
   selectionSort(v318, MAX8);
   selectionSort(v319, MAX8);
   selectionSort(v320, MAX8);
   clock_t end64 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end64 - begin64)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

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

void bucketSort(int *v, int n) {
   int i, j, k, maior, menor, *bucket;
   maior = menor = v[0];
   for (i = 1; i < n; i++) {
      if (v[i] > maior)
         maior = v[i];
      if (v[i] < menor)
         menor = v[i];
   }
   bucket = (int *)calloc(maior - menor + 1, sizeof(int));
   for (i = 0; i < n; i++)
      bucket[v[i] - menor]++;
   for (i = 0, j = 0; i < maior - menor + 1; i++)
      for (k = bucket[i]; k > 0; k--)
         v[j++] = i + menor;
   free(bucket);
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
      int pivotIndex = partition(vet, primeiro, ultimo);
      quickSortRecursion(vet, primeiro, pivotIndex - 1); // Engloba o primeiro elemento até pivotIndex - 1
      quickSortRecursion(vet, pivotIndex + 1, ultimo);   // Engloba de pivotIndex + 1 até o último elemento
   }
}

int partition(int *vet, int primeiro, int ultimo) {
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
      int *vet2 = (int *)malloc(length * sizeof(int));
      for (i = length - 1; i >= 0; i--)
         vet2[--bucket[(vet[i] / exp) % 10]] = vet[i];
      for (i = 0; i < length; i++)
         vet[i] = vet2[i];
      free(vet2);
      free(bucket);
      exp *= 10;
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

void readVector3(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 3;
   }
}

void readVector9(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 9;
   }
}

void readVector27(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 27;
   }
}

void readVector81(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 81;
   }
}

void readVector243(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 243;
   }
}

void readVector729(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 729;
   }
}

void readVector2187(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 2187;
   }
}

void readVector6561(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 6561;
   }
}
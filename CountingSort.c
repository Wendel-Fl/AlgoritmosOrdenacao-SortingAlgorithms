#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX1 7
#define MAX2 49
#define MAX3 343
#define MAX4 2401
#define MAX5 16807
#define MAX6 117649
#define MAX7 823543
#define MAX8 5764801

int max(int *v, int length);
int min(int *v, int length);
void countingSort(int *v, int length);
void readVector7(int *v, int length);
void readVector49(int *v, int length);
void readVector343(int *v, int length);
void readVector2401(int *v, int length);
void readVector16807(int *v, int length);
void readVector117649(int *v, int length);
void readVector823543(int *v, int length);
void readVector5764801(int *v, int length);
// void printVector(int *v, int length);

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

   readVector7(v1, MAX1);
   readVector7(v2, MAX1);
   readVector7(v3, MAX1);
   readVector7(v4, MAX1);
   readVector7(v5, MAX1);
   readVector7(v6, MAX1);
   readVector7(v7, MAX1);
   readVector7(v8, MAX1);
   readVector7(v9, MAX1);
   readVector7(v10, MAX1);
   readVector7(v11, MAX1);
   readVector7(v12, MAX1);
   readVector7(v13, MAX1);
   readVector7(v14, MAX1);
   readVector7(v15, MAX1);
   readVector7(v16, MAX1);
   readVector7(v17, MAX1);
   readVector7(v18, MAX1);
   readVector7(v19, MAX1);
   readVector7(v20, MAX1);
   readVector7(v21, MAX1);
   readVector7(v22, MAX1);
   readVector7(v23, MAX1);
   readVector7(v24, MAX1);
   readVector7(v25, MAX1);
   readVector7(v26, MAX1);
   readVector7(v27, MAX1);
   readVector7(v28, MAX1);
   readVector7(v29, MAX1);
   readVector7(v30, MAX1);
   readVector7(v31, MAX1);
   readVector7(v32, MAX1);
   readVector7(v33, MAX1);
   readVector7(v34, MAX1);
   readVector7(v35, MAX1);
   readVector7(v36, MAX1);
   readVector7(v37, MAX1);
   readVector7(v38, MAX1);
   readVector7(v39, MAX1);
   readVector7(v40, MAX1);

   readVector49(v41, MAX2);
   readVector49(v42, MAX2);
   readVector49(v43, MAX2);
   readVector49(v44, MAX2);
   readVector49(v45, MAX2);
   readVector49(v46, MAX2);
   readVector49(v47, MAX2);
   readVector49(v48, MAX2);
   readVector49(v49, MAX2);
   readVector49(v50, MAX2);
   readVector49(v51, MAX2);
   readVector49(v52, MAX2);
   readVector49(v53, MAX2);
   readVector49(v54, MAX2);
   readVector49(v55, MAX2);
   readVector49(v56, MAX2);
   readVector49(v57, MAX2);
   readVector49(v58, MAX2);
   readVector49(v59, MAX2);
   readVector49(v60, MAX2);
   readVector49(v61, MAX2);
   readVector49(v62, MAX2);
   readVector49(v63, MAX2);
   readVector49(v64, MAX2);
   readVector49(v65, MAX2);
   readVector49(v66, MAX2);
   readVector49(v67, MAX2);
   readVector49(v68, MAX2);
   readVector49(v69, MAX2);
   readVector49(v70, MAX2);
   readVector49(v71, MAX2);
   readVector49(v72, MAX2);
   readVector49(v73, MAX2);
   readVector49(v74, MAX2);
   readVector49(v75, MAX2);
   readVector49(v76, MAX2);
   readVector49(v77, MAX2);
   readVector49(v78, MAX2);
   readVector49(v79, MAX2);
   readVector49(v80, MAX2);

   readVector343(v81, MAX3);
   readVector343(v82, MAX3);
   readVector343(v83, MAX3);
   readVector343(v84, MAX3);
   readVector343(v85, MAX3);
   readVector343(v86, MAX3);
   readVector343(v87, MAX3);
   readVector343(v88, MAX3);
   readVector343(v89, MAX3);
   readVector343(v90, MAX3);
   readVector343(v91, MAX3);
   readVector343(v92, MAX3);
   readVector343(v93, MAX3);
   readVector343(v94, MAX3);
   readVector343(v95, MAX3);
   readVector343(v96, MAX3);
   readVector343(v97, MAX3);
   readVector343(v98, MAX3);
   readVector343(v99, MAX3);
   readVector343(v100, MAX3);
   readVector343(v101, MAX3);
   readVector343(v102, MAX3);
   readVector343(v103, MAX3);
   readVector343(v104, MAX3);
   readVector343(v105, MAX3);
   readVector343(v106, MAX3);
   readVector343(v107, MAX3);
   readVector343(v108, MAX3);
   readVector343(v109, MAX3);
   readVector343(v110, MAX3);
   readVector343(v111, MAX3);
   readVector343(v112, MAX3);
   readVector343(v113, MAX3);
   readVector343(v114, MAX3);
   readVector343(v115, MAX3);
   readVector343(v116, MAX3);
   readVector343(v117, MAX3);
   readVector343(v118, MAX3);
   readVector343(v119, MAX3);
   readVector343(v120, MAX3);

   readVector2401(v121, MAX4);
   readVector2401(v122, MAX4);
   readVector2401(v123, MAX4);
   readVector2401(v124, MAX4);
   readVector2401(v125, MAX4);
   readVector2401(v126, MAX4);
   readVector2401(v127, MAX4);
   readVector2401(v128, MAX4);
   readVector2401(v129, MAX4);
   readVector2401(v130, MAX4);
   readVector2401(v131, MAX4);
   readVector2401(v132, MAX4);
   readVector2401(v133, MAX4);
   readVector2401(v134, MAX4);
   readVector2401(v135, MAX4);
   readVector2401(v136, MAX4);
   readVector2401(v137, MAX4);
   readVector2401(v138, MAX4);
   readVector2401(v139, MAX4);
   readVector2401(v140, MAX4);
   readVector2401(v141, MAX4);
   readVector2401(v142, MAX4);
   readVector2401(v143, MAX4);
   readVector2401(v144, MAX4);
   readVector2401(v145, MAX4);
   readVector2401(v146, MAX4);
   readVector2401(v147, MAX4);
   readVector2401(v148, MAX4);
   readVector2401(v149, MAX4);
   readVector2401(v150, MAX4);
   readVector2401(v151, MAX4);
   readVector2401(v152, MAX4);
   readVector2401(v153, MAX4);
   readVector2401(v154, MAX4);
   readVector2401(v155, MAX4);
   readVector2401(v156, MAX4);
   readVector2401(v157, MAX4);
   readVector2401(v158, MAX4);
   readVector2401(v159, MAX4);
   readVector2401(v160, MAX4);

   readVector16807(v161, MAX5);
   readVector16807(v162, MAX5);
   readVector16807(v163, MAX5);
   readVector16807(v164, MAX5);
   readVector16807(v165, MAX5);
   readVector16807(v166, MAX5);
   readVector16807(v167, MAX5);
   readVector16807(v168, MAX5);
   readVector16807(v169, MAX5);
   readVector16807(v170, MAX5);
   readVector16807(v171, MAX5);
   readVector16807(v172, MAX5);
   readVector16807(v173, MAX5);
   readVector16807(v174, MAX5);
   readVector16807(v175, MAX5);
   readVector16807(v176, MAX5);
   readVector16807(v177, MAX5);
   readVector16807(v178, MAX5);
   readVector16807(v179, MAX5);
   readVector16807(v180, MAX5);
   readVector16807(v181, MAX5);
   readVector16807(v182, MAX5);
   readVector16807(v183, MAX5);
   readVector16807(v184, MAX5);
   readVector16807(v185, MAX5);
   readVector16807(v186, MAX5);
   readVector16807(v187, MAX5);
   readVector16807(v188, MAX5);
   readVector16807(v189, MAX5);
   readVector16807(v190, MAX5);
   readVector16807(v191, MAX5);
   readVector16807(v192, MAX5);
   readVector16807(v193, MAX5);
   readVector16807(v194, MAX5);
   readVector16807(v195, MAX5);
   readVector16807(v196, MAX5);
   readVector16807(v197, MAX5);
   readVector16807(v198, MAX5);
   readVector16807(v199, MAX5);
   readVector16807(v200, MAX5);

   readVector117649(v201, MAX6);
   readVector117649(v202, MAX6);
   readVector117649(v203, MAX6);
   readVector117649(v204, MAX6);
   readVector117649(v205, MAX6);
   readVector117649(v206, MAX6);
   readVector117649(v207, MAX6);
   readVector117649(v208, MAX6);
   readVector117649(v209, MAX6);
   readVector117649(v210, MAX6);
   readVector117649(v211, MAX6);
   readVector117649(v212, MAX6);
   readVector117649(v213, MAX6);
   readVector117649(v214, MAX6);
   readVector117649(v215, MAX6);
   readVector117649(v216, MAX6);
   readVector117649(v217, MAX6);
   readVector117649(v218, MAX6);
   readVector117649(v219, MAX6);
   readVector117649(v220, MAX6);
   readVector117649(v221, MAX6);
   readVector117649(v222, MAX6);
   readVector117649(v223, MAX6);
   readVector117649(v224, MAX6);
   readVector117649(v225, MAX6);
   readVector117649(v226, MAX6);
   readVector117649(v227, MAX6);
   readVector117649(v228, MAX6);
   readVector117649(v229, MAX6);
   readVector117649(v230, MAX6);
   readVector117649(v231, MAX6);
   readVector117649(v232, MAX6);
   readVector117649(v233, MAX6);
   readVector117649(v234, MAX6);
   readVector117649(v235, MAX6);
   readVector117649(v236, MAX6);
   readVector117649(v237, MAX6);
   readVector117649(v238, MAX6);
   readVector117649(v239, MAX6);
   readVector117649(v240, MAX6);

   readVector823543(v241, MAX7);
   readVector823543(v242, MAX7);
   readVector823543(v243, MAX7);
   readVector823543(v244, MAX7);
   readVector823543(v245, MAX7);
   readVector823543(v246, MAX7);
   readVector823543(v247, MAX7);
   readVector823543(v248, MAX7);
   readVector823543(v249, MAX7);
   readVector823543(v250, MAX7);
   readVector823543(v251, MAX7);
   readVector823543(v252, MAX7);
   readVector823543(v253, MAX7);
   readVector823543(v254, MAX7);
   readVector823543(v255, MAX7);
   readVector823543(v256, MAX7);
   readVector823543(v257, MAX7);
   readVector823543(v258, MAX7);
   readVector823543(v259, MAX7);
   readVector823543(v260, MAX7);
   readVector823543(v261, MAX7);
   readVector823543(v262, MAX7);
   readVector823543(v263, MAX7);
   readVector823543(v264, MAX7);
   readVector823543(v265, MAX7);
   readVector823543(v266, MAX7);
   readVector823543(v267, MAX7);
   readVector823543(v268, MAX7);
   readVector823543(v269, MAX7);
   readVector823543(v270, MAX7);
   readVector823543(v271, MAX7);
   readVector823543(v272, MAX7);
   readVector823543(v273, MAX7);
   readVector823543(v274, MAX7);
   readVector823543(v275, MAX7);
   readVector823543(v276, MAX7);
   readVector823543(v277, MAX7);
   readVector823543(v278, MAX7);
   readVector823543(v279, MAX7);
   readVector823543(v280, MAX7);

   readVector5764801(v281, MAX8);
   readVector5764801(v282, MAX8);
   readVector5764801(v283, MAX8);
   readVector5764801(v284, MAX8);
   readVector5764801(v285, MAX8);
   readVector5764801(v286, MAX8);
   readVector5764801(v287, MAX8);
   readVector5764801(v288, MAX8);
   readVector5764801(v289, MAX8);
   readVector5764801(v290, MAX8);
   readVector5764801(v291, MAX8);
   readVector5764801(v292, MAX8);
   readVector5764801(v293, MAX8);
   readVector5764801(v294, MAX8);
   readVector5764801(v295, MAX8);
   readVector5764801(v296, MAX8);
   readVector5764801(v297, MAX8);
   readVector5764801(v298, MAX8);
   readVector5764801(v299, MAX8);
   readVector5764801(v300, MAX8);
   readVector5764801(v301, MAX8);
   readVector5764801(v302, MAX8);
   readVector5764801(v303, MAX8);
   readVector5764801(v304, MAX8);
   readVector5764801(v305, MAX8);
   readVector5764801(v306, MAX8);
   readVector5764801(v307, MAX8);
   readVector5764801(v308, MAX8);
   readVector5764801(v309, MAX8);
   readVector5764801(v310, MAX8);
   readVector5764801(v311, MAX8);
   readVector5764801(v312, MAX8);
   readVector5764801(v313, MAX8);
   readVector5764801(v314, MAX8);
   readVector5764801(v315, MAX8);
   readVector5764801(v316, MAX8);
   readVector5764801(v317, MAX8);
   readVector5764801(v318, MAX8);
   readVector5764801(v319, MAX8);
   readVector5764801(v320, MAX8);

   clock_t begin = clock();
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
   clock_t end = clock();

   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 7 elements: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
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
   clock_t end2 = clock();

   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 49 elements: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
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
   clock_t end3 = clock();

   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 343 elements: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
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
   clock_t end4 = clock();

   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 2401 elements: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
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
   clock_t end5 = clock();

   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 16807 elements: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
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
   clock_t end6 = clock();

   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 117649 elements: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
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
   clock_t end7 = clock();

   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 823543 elements: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
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
   clock_t end8 = clock();

   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 5764801 elements: %.3f ms\n", timeSpent);

   // printVector(v1, MAX1);
   // printVector(v2, MAX1);
   // printVector(v3, MAX1);
   // printVector(v4, MAX1);
   // printVector(v5, MAX1);
   // printVector(v6, MAX1);
   // printVector(v7, MAX1);
   // printVector(v8, MAX1);
   // printVector(v9, MAX1);
   // printVector(v10, MAX1);
   // printVector(v11, MAX1);
   // printVector(v12, MAX1);
   // printVector(v13, MAX1);
   // printVector(v14, MAX1);
   // printVector(v15, MAX1);
   // printVector(v16, MAX1);
   // printVector(v17, MAX1);
   // printVector(v18, MAX1);
   // printVector(v19, MAX1);
   // printVector(v20, MAX1);
   // printVector(v21, MAX1);
   // printVector(v22, MAX1);
   // printVector(v23, MAX1);
   // printVector(v24, MAX1);
   // printVector(v25, MAX1);
   // printVector(v26, MAX1);
   // printVector(v27, MAX1);
   // printVector(v28, MAX1);
   // printVector(v29, MAX1);
   // printVector(v30, MAX1);
   // printVector(v31, MAX1);
   // printVector(v32, MAX1);
   // printVector(v33, MAX1);
   // printVector(v34, MAX1);
   // printVector(v35, MAX1);
   // printVector(v36, MAX1);
   // printVector(v37, MAX1);
   // printVector(v38, MAX1);
   // printVector(v39, MAX1);
   // printVector(v40, MAX1);

   // printVector(v41, MAX2);
   // printVector(v42, MAX2);
   // printVector(v43, MAX2);
   // printVector(v44, MAX2);
   // printVector(v45, MAX2);
   // printVector(v46, MAX2);
   // printVector(v47, MAX2);
   // printVector(v48, MAX2);
   // printVector(v49, MAX2);
   // printVector(v50, MAX2);
   // printVector(v51, MAX2);
   // printVector(v52, MAX2);
   // printVector(v53, MAX2);
   // printVector(v54, MAX2);
   // printVector(v55, MAX2);
   // printVector(v56, MAX2);
   // printVector(v57, MAX2);
   // printVector(v58, MAX2);
   // printVector(v59, MAX2);
   // printVector(v60, MAX2);
   // printVector(v61, MAX2);
   // printVector(v62, MAX2);
   // printVector(v63, MAX2);
   // printVector(v64, MAX2);
   // printVector(v65, MAX2);
   // printVector(v66, MAX2);
   // printVector(v67, MAX2);
   // printVector(v68, MAX2);
   // printVector(v69, MAX2);
   // printVector(v70, MAX2);
   // printVector(v71, MAX2);
   // printVector(v72, MAX2);
   // printVector(v73, MAX2);
   // printVector(v74, MAX2);
   // printVector(v75, MAX2);
   // printVector(v76, MAX2);
   // printVector(v77, MAX2);
   // printVector(v78, MAX2);
   // printVector(v79, MAX2);
   // printVector(v80, MAX2);

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

void readVector7(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 7;
   }
}

void readVector49(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 49;
   }
}

void readVector343(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 343;
   }
}
void readVector2401(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 2401;
   }
}
void readVector16807(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 16807;
   }
}
void readVector117649(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 117649;
   }
}
void readVector823543(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 823543;
   }
}
void readVector5764801(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 5764801;
   }
}

// void printVector(int *v, int length) {
//    for (int i = 0; i < length; i++) {
//       printf("v[%d] = %d\n", i, v[i]);
//    }
//    printf("\n\n");
// }
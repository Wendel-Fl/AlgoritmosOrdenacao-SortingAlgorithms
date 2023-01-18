#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX1 3
#define MAX2 9
#define MAX3 27
#define MAX4 81
#define MAX5 243
#define MAX6 729
#define MAX7 2187
#define MAX8 6561

void swap(int *x, int *y);
void quickSort(int *vet, int length);
void quickSortRecursion(int *vet, int primeiro, int ultimo);
int partition(int *vet, int primeiro, int ultimo);
void readVector3(int *v, int length);
void readVector9(int *v, int length);
void readVector27(int *v, int length);
void readVector81(int *v, int length);
void readVector243(int *v, int length);
void readVector729(int *v, int length);
void readVector2187(int *v, int length);
void readVector6561(int *v, int length);

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
   readVector9(v9, MAX2);
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
   clock_t end = clock();

   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 3 elements: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
   quickSort(v41, MAX2);
   quickSort(v42, MAX2);
   quickSort(v43, MAX2);
   quickSort(v44, MAX2);
   quickSort(v45, MAX2);
   quickSort(v46, MAX2);
   quickSort(v47, MAX2);
   quickSort(v48, MAX2);
   quickSort(v9, MAX2);
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
   clock_t end2 = clock();

   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 9 elements: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
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
   clock_t end3 = clock();

   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 27 elements: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
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
   clock_t end4 = clock();

   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 81 elements: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
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
   clock_t end5 = clock();

   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 243 elements: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
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
   clock_t end6 = clock();

   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 729 elements: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
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
   clock_t end7 = clock();

   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 2187 elements: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
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
   clock_t end8 = clock();

   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 6561 elements: %.3f ms\n", timeSpent);

   return 0;
}

void swap(int *x, int *y)
{
   int aux = *x;
   *x = *y;
   *y = aux;
}

void quickSort(int *vet, int length)
{
   srand(time(NULL));
   quickSortRecursion(vet, 0, length - 1);
}

void quickSortRecursion(int *vet, int primeiro, int ultimo)
{
   if (primeiro < ultimo)
   {
      int pivotIndex = partition(vet, primeiro, ultimo);
      quickSortRecursion(vet, primeiro, pivotIndex - 1); // Engloba o primeiro elemento até pivotIndex - 1
      quickSortRecursion(vet, pivotIndex + 1, ultimo);   // Engloba de pivotIndex + 1 até o último elemento
   }
}

int partition(int *vet, int primeiro, int ultimo)
{
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
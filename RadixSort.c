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

int max(int *v, int length);
int min(int *v, int length);
void radixSort(int *v, int length);
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
   clock_t end = clock();

   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 3 elements: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
   radixSort(v41, MAX2);
   radixSort(v42, MAX2);
   radixSort(v43, MAX2);
   radixSort(v44, MAX2);
   radixSort(v45, MAX2);
   radixSort(v46, MAX2);
   radixSort(v47, MAX2);
   radixSort(v48, MAX2);
   radixSort(v9, MAX2);
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
   clock_t end2 = clock();

   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 9 elements: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
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
   clock_t end3 = clock();

   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 27 elements: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
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
   clock_t end4 = clock();

   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 81 elements: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
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
   clock_t end5 = clock();

   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 243 elements: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
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
   clock_t end6 = clock();

   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 729 elements: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
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
   clock_t end7 = clock();

   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 2187 elements: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
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
   clock_t end8 = clock();

   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Time spent sorting 40 vectors of 6561 elements: %.3f ms\n", timeSpent);

   return 0;
}

// maior elemento do vetor
int max(int *vet, int length) {
   int max = vet[0];
   for (int i = 1; i < length; i++)
      if (vet[i] > max)
         max = vet[i];
   return max;
}

// menor elemento do vetor
int min(int *vet, int length) {
   int min = vet[0];
   for (int i = 1; i < length; i++)
      if (vet[i] < min)
         min = vet[i];
   return min;
}

// função que ordena o vetor usando o algoritmo Counting Sort
void countingSort(int *vet, int length, int coloca) {
   int i;
   int maxElement = max(vet, length);
   int minElement = min(vet, length);
   int range = maxElement - minElement + 1;
   int output[length + 1];
   int max = (vet[0] / coloca) % range;

   for (i = 1; i < length; i++)
      if (((vet[i] / coloca) % range) > max)
         max = vet[i];

   int count[max + 1];

   for (i = 0; i < max; i++)
      count[i] = 0;

   for (i = 0; i < length; i++)
      count[(vet[i] / coloca) % range]++;

   for (i = 1; i < range; i++)
      count[i] += count[i - 1];

   for (i = length - 1; i >= 0; i--) {
      output[count[(vet[i] / coloca) % range] - 1] = vet[i];
      count[(vet[i] / coloca) % range]--;
   }

   for (i = 0; i < length; i++)
      vet[i] = output[i];
}

// radix sort
void radixSort(int *vet, int length) {
   int maxElement = max(vet, length);
   int minElement = min(vet, length);
   int range = maxElement - minElement + 1;

   for (int coloca = 1; maxElement / coloca > 0; coloca *= range)
      countingSort(vet, length, coloca);
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
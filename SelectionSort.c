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
   clock_t end = clock();

   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 3 elementos: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
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
   clock_t end2 = clock();

   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 9 elementos: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
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
   clock_t end3 = clock();

   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 27 elementos: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
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
   clock_t end4 = clock();

   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 81 elementos: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
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
   clock_t end5 = clock();

   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 243 elementos: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
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
   clock_t end6 = clock();

   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 729 elementos: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
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
   clock_t end7 = clock();

   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 2187 elementos: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
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
   clock_t end8 = clock();

   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 6561 elementos: %.3f ms\n", timeSpent);

   return 0;
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
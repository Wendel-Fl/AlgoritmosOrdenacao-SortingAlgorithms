#include <stdio.h>
#include "algoritmos.h"

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
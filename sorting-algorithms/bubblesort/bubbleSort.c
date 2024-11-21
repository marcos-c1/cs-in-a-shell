#include "bubbleSort.h"
#include "../utils/utils.h"
#define TRUE 1
#define FALSE 0

void bubbleSort(int *v, size_t size){
    // n * n = n^2 
    int bool = FALSE;
    for(int i = 0; i < size-1; i++){ 
        for(int j = 0; j < size-i-1; j++){ 
            if (v[j] > v[j+1]){
                swap(&v[j], &v[j+1]);
            }
        }
    }
}
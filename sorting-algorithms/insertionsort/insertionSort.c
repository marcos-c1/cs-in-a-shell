#include "insertionSort.h"
#include "../utils/utils.h"

void insertionSort(int *v, size_t size){
    int i, j, chave;
    
    // [85, 12, 59, 45, 72, 51]
    for(i = 1; i < size; i++){
        chave = v[i];
        for (j = i-1; j >= 0 && v[j] > chave; j--){
            v[j+1] = v[j];
        }
        v[j+1] = chave;
    }
}
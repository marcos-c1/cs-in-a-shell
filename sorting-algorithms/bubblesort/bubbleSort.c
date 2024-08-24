#include "bubbleSort.h"
#include "../Utils/utils.h"

void bubbleSort(int *v, size_t size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if (v[j] > v[j+1])
                swap(&v[j], &v[j+1]);
        }
    }
}
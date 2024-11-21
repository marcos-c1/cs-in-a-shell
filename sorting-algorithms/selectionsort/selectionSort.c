#include "selectionSort.h"
#include "../utils/utils.h"

void selectionSort(int *v, size_t size)
{
    int min;
    for(int i = 0; i < size-1; ++i){
        min = i;
        for(int j = i+1; j < size; ++j){
            if (v[j] < v[min])
                min = j;
        }
        swap(&v[min], &v[i]);
    }
}
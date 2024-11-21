#include <stdio.h>

#include "./bubblesort/bubbleSort.h"
#include "./mergesort/mergeSort.h"
#include "./heapsort/heapSort.h"
#include "./insertionsort/insertionSort.h"
#include "./selectionsort/selectionSort.h"
#include "./quicksort/quickSort.h"
#include "./countingsort/countingSort.h"

#include "./utils/utils.h"

#define tam 1000000

int main(){
    int *v = (int*)malloc(sizeof(int)*tam);
    generate(v, tam);

    int opcao = 0;

    printf("\n1- BubbleSort\n2- HeapSort\n3- MergeSort\n4- InsertionSort\n5- SelectionSort\n6- QuickSort\n7- CountingSort\n\n> ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: bubbleSort(v, tam); break;
        case 2: heapSort(v, 0, tam); break;
        case 3: mergeSort(v, 0, tam); break;
        case 4: insertionSort(v, tam); break;
        case 5: selectionSort(v, tam); break;
        case 6: quickSort(v, 0, tam-1); break;
        case 7: countingSort(v, tam, tam); break;
        //case 8: shellSort(v, tam); break;
        default: return -1;
    }

    printArray(v, tam);

    free(v);
    return 0;
}
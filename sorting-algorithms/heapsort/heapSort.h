/*
* Descrição: Implementação do HeapSort
* Autor: Marcos B. Campos
* Ano: 2021
*/

#ifndef HEAP_SORT
#define HEAP_SORT
#include <stdlib.h>

void heapify(int *v, int begin, int end);
void heapSort(int *v, int l, size_t size);

#endif
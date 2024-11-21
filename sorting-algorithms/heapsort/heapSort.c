#include "heapSort.h"
#include "../utils/utils.h"
void heapify(int *v, int begin, int end){
    int maior = begin;
    int left_child = 2*begin+1, right_child = 2*begin+2;

    // Se o filho da esquerda for maior do que a raiz
    if (left_child < end && v[left_child] > v[maior])
        maior = left_child;
    
    // Se o filho da direta for maior que a raiz 
    if (right_child < end && v[right_child] > v[maior])
        maior = right_child;

    // Se o maior não estiver na raiz, ou seja, teve a troca
    if (maior != begin){
        // Faço a troca do pai com o filho
        swap(&v[begin], &v[maior]);

        // Recursivamente faço o heapify nas árvores secundárias
        heapify(v, maior, end);
    }
}

void heapSort(int *v, int l, size_t size){
    // Estrutura a maximum heap com o elemento pai sendo maior que os filhos
    for(int i = size/2-1; i >= 0; i--){
        heapify(v, i, size);
    }
    // Ordena o vetor pegando a raiz em cada iteração e colocando ordenamente descrentemente
    // Por ser uma maximum heap, o vetor está ordenado decrescentemente
    for (int i = size-1; i > 0; i--){
        swap(&v[0], &v[i]);
        heapify(v, 0, i);
    }
}
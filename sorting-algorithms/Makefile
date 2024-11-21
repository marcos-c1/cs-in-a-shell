FILES=u bubbleSort heapSort mergeSort insertionSort selectionSort quickSort countingSort
CFLAGS=-Wall
GCC=gcc -c

run: main rm

main: sorting
	gcc $(CFLAGS) $(FILES) main.c -o main

sorting: utils
	$(GCC) ./utils/utils.c -o u
	$(GCC) ./bubblesort/bubbleSort.c -o bubbleSort
	$(GCC) ./heapsort/heapSort.c -o heapSort
	$(GCC) ./mergesort/mergeSort.c -o mergeSort
	$(GCC) ./insertionsort/insertionSort.c -o insertionSort
	$(GCC) ./selectionsort/selectionSort.c -o selectionSort
	$(GCC) ./quicksort/quickSort.c -o quickSort
	$(GCC) ./countingsort/countingSort.c -o countingSort

utils:  
	$(GCC) ./utils/utils.c -o u

rm:
	rm -f *.o $(FILES)
	./main
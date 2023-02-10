STD = -std=c99

OPTIONS = -Wall -Wpedantic -Wno-unused-result -O0 -g


all: trabalho

trabalho: Trabalho.c algoritmos.h InsertionSort.c SelectionSort.c BubbleSort.c MergeSort.c QuickSort.c RadixSort.c CountingSort.c BucketSort.c
	gcc $(STD) $(OPTIONS) Trabalho.c InsertionSort.c SelectionSort.c BubbleSort.c MergeSort.c QuickSort.c RadixSort.c CountingSort.c BucketSort.c -o trabalho

run: trabalho
	./trabalho
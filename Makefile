STD = -std=c99

OPTIONS = -Wall -Wpedantic -Wno-unused-result -O0 -g

all:
	gcc $(STD) $(OPTIONS) BubbleSort.c -o BubbleSort
	gcc $(STD) $(OPTIONS) BucketSort.c -o BucketSort
	gcc $(STD) $(OPTIONS) CountingSort.c -o CountingSort
	gcc $(STD) $(OPTIONS) InsertionSort.c -o InsertionSort
	gcc $(STD) $(OPTIONS) MergeSort.c -o MergeSort
	gcc $(STD) $(OPTIONS) QuickSort.c -o QuickSort
	gcc $(STD) $(OPTIONS) RadixSort.c -o RadixSort
	gcc $(STD) $(OPTIONS) SelectionSort.c -o SelectionSort
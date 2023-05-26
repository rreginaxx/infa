#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"lib.h"

int main() {
	srand((unsigned)time(NULL));
	int* masBuble = (int*)malloc(SIZE * sizeof(int));
	for (int i = 0; i < SIZE; i++) {
		masBuble[i] = rand();
	}
	clock_t begin = clock();
	bubleSort(masBuble);
	clock_t end = clock();
	printf_s("%ld\n", end - begin);
	free(masBuble);
	int* masPyr = (int*)malloc(SIZE * sizeof(int));
	for (int i = 0; i < SIZE; i++) {
		masPyr[i] = rand();
	}
	clock_t begin1 = clock();
	pyramidSort(masPyr, SIZE);
	clock_t end1 = clock();
	printf_s("%ld\n", end1 - begin1);
	free(masPyr);
	return 0;
}
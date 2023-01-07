#ifndef Search_algos
#define Search_algos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binarysearch(int *array, int start, int size, int value);
int jump_search(int *array, size_t size, int value);

#endif

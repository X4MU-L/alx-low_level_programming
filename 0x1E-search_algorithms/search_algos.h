#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>

/*
 *   AUTHOR: okoli chukwuebuka
 *   email: okolisamuel21@gmail.com
 *   github: x4mu-l
*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS*/

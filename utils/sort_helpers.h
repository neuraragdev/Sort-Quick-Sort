/*
    Create by @neurargdev (www.neurarg.com.ar)
*/

#ifndef _SORT_HELPERS_H_
#define _SORT_HELPERS_H_

#include <stdbool.h>

bool goes_before(int x, int y);

bool array_is_sorted(int a[], unsigned int length);

void swap(int a[], unsigned int i, unsigned int j);

/* 
    PRECONDITION:
    0 <= lft < rgt < length of the array

    Permutation of elements of a[izq..der] and returns pivot such that:
     - lft <= pivot <= rgt
     - elements in a[lft,pivot) all 'go_before' (according to function goes_before) a[pivot]
     - a[pivot] 'goes_before' all the elements in a(pivot,rgt]
*/

unsigned int partition(int a[], unsigned int lft, unsigned int rgt);

#endif
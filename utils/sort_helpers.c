/*
    Create by @neurargdev (www.neurarg.com.ar)
*/

#include <stdbool.h>
#include "sort_helpers.h"

bool goes_before(int x, int y) {
    return x <= y;
}

bool array_is_sorted(int a[], unsigned int length) {
    unsigned int i = 1;

    while (i < length && goes_before(a[i-1], a[i])) {
        i++;
    }
    
    return i >= length;
}

void swap(int a[], unsigned int i, unsigned int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

unsigned int partition(int a[], unsigned int lft, unsigned int rgt) {
    unsigned int i;
    unsigned int ppiv = rgt; 
    i = lft - 1;

    for (unsigned int j = lft; j < rgt; ++j) {
        if (goes_before(a[j], a[ppiv])) {
            i++;
            swap(a, i, j);
        }
    }
    
    ppiv = i+1;
    swap(a, ppiv, rgt);
    
    return ppiv;
}    

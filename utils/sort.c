/*
    Create by @neurargdev (www.neurarg.com.ar)
*/

#include "sort.h"
#include "sort_helpers.h"

#include <stdio.h>

static void quick_sort_rec(int a[], unsigned int lft, unsigned int rgt) {
    unsigned int ppiv;

    if (rgt > lft) {
        ppiv = partition(a, lft, rgt);
        quick_sort_rec(a, lft, ppiv-1);
        quick_sort_rec(a, ppiv+1, rgt);
    }
}

void quick_sort(int a[], unsigned int length) {
    quick_sort_rec(a, 0, (length == 0) ? 0 : length - 1);
}


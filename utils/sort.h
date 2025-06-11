/*
    Create by @neurargdev (www.neurarg.com.ar)
*/

#ifndef _SORT_H_
#define _SORT_H_

/*
    {Pre: 0 ≤ rgt ≤ n ∧ 1 ≤ lft ≤ n+1 ∧ lft-1 ≤ rgt ∧ a = A}
        
        quick_sort_rec (a: array[1..n] of int, lft,rgt: nat)
            var ppiv: nat
            if rgt > lft → partition(a,lft,rgt,ppiv)
                    { 
                      lft ≤ ppiv ≤ rgt
                      elements in a[lft,ppiv-1] ≤ a[ppiv] 
                      elements in a[ppiv+1,rgt] ≥ a[ppiv]
                    }
                quick_sort_rec(a,lft,ppiv-1)
                quick_sort_rec(a,ppiv+1,rgt)
            fi 
    
    {Post: a is permutation of A && a[lft,rgt] is an ordered permutation of A[lft,rgt]}
*/

/*
    Sort the array 'a' using the Quicksort algorithm. The resulting sort
    will be ascending according to the goes_before function.

    The array 'a' must have exactly 'length' elements.

*/
void quick_sort(int a[], unsigned int length);

#endif

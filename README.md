# Sorting-Quick-Sort

**Quick Sort**
Is an efficient sorting algorithm that uses the concept of Divide and Conquer in order to sort lists.
It is a popular choice for programmers who require quick sorting methods.

**How it Works**
- Choose a pivot element, this is the element that you will be comparing.
- Iterate through the list and compare each element with the pivot.
- Place all the larger elements to the right of the pivot and all the smaller ones to the left.
- Repeat this process with the left and right side separately, now choosing another pivot.
- When singular bocks are reached, they are merged and the array is sorted.

  
**Time and Space Complexity**
Hopefully, you now understand how Quick Sort works.

Quick Sort, similar to Merge Sort has a time complexity of O(nlog n). However, note that this is only the case when the pivot is well selected. Some common pivot selection methods include median-of-three and random selection. In the worst-case scenario where the pivot is the largest or smallest value, the time complexity will become O(n²), however, this is usually not the case.

Moreover, Quick Sort has an auxiliary space complexity of O(log n) making it superior to Merge Sort’s O(n).

In fact, while the partitioning process of Quick Sort does not require any additional memory, Quick Sort uses recursive calls, which require memory for the call stack. Therefore, giving its auxiliary space complexity of O(log n) and its worst-case of O(n).

**Applications of Quick Sort**
Due to Quick Sort’s efficient time complexity, it is often chosen over other sorting algorithms when needing to sort things efficiently.

Some more specific applications may include its use in datasets, operating systems and E-commerce recommender systems.


> [!tip]
> Run a program for command line:
> - gcc -Wall -Werror -Wno-newline-eof -Wextra -pedantic -std=c99 -c utils/array_helpers.c utils/sort.c utils/sort_helpers.c main.c
> - gcc -Wall -Werror -Wno-newline-eof -Wextra -pedantic -std=c99 -o main array_helpers.o sort.o sort_helpers.o main.o
> - ./main sorted-elements-100.in

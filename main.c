/*
    Create by @neurargdev (www.neurarg.com.ar)
*/

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "utils/array_helpers.h"
#include "utils/sort_helpers.h"
#include "utils/sort.h"

/* Maximum allowed length of the array */
static const unsigned int MAX_SIZE = 100000u;

void print_helper(char *program_name) {
    /* Print the usage help of this program */
    printf("Usage: %s <input file path> \n\n"
        "Sort an array given in a file in a disk. \n"
        "\n"
        "The input file must have the follow format: \n"
        "* The first line must contain only a positive integer,"
        "which is the length of the array"
        "* the second line must contain the members of the array"
        "separate by one or more spaces. Each member must be a integer."
        "\n\n"
        "In the other words, the file format is: \n"
        "<amount of array element>\n"
        "<array element 1> <array element 2> ... <array element N> \n\n",
        program_name);
}

char *parse_file(int argc, char *argv[]) {
    /* Parse the file path given by command line argument */
    char *result = NULL;

    if (argc < 2) {
        print_helper(argv[0]);
        exit(EXIT_FAILURE);
    }
    
    result = argv[1];

    return result;
}

int main(int argc, char *argv[]) {
    char *filepath = NULL;

    /* Parse the file path given in command line arguments */
    filepath = parse_file(argc, argv);

    /* Create an array of MAX_SIZE elements */
    int array[MAX_SIZE];

    /* Parse the file to fill the array and obtain the actual length */
    unsigned int length = array_from_file(array, MAX_SIZE, filepath);

    /* Create a copy of the array, to do some checks later */
    int copy[MAX_SIZE];
    array_copy(array, copy, length);

    /* Do the actual sorting */
    quick_sort(array, length);

    /* Show the ordered array in the screen */
    array_dump(array, length);

    /* Check if it is sorted */
    assert(array_is_sorted(array, length));

    /* Check if its a permutation of original */
    assert(array_is_permutation_of(copy, array, length));

    return EXIT_SUCCESS;
}
#include <stddef.h> // For NULL
#include <stdio.h>
#include <stdlib.h>

/**
 * Creates an array with even numbers
 * 
 * @param begin starting value
 * @param end ending value
 * 
 * @return pointer to array
 */
int* array_create_evens(int begin, int end) {
    if(begin >= end){
        return NULL;
    }

    int length = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            length++;
        }
    }

    int* array = malloc(sizeof(int) * length);
    if (!array) {
        return NULL;
    }

    int* p = array; // use a separate pointer to fill

    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            *p = i;
            p++;
        }
    }

    return array;
}

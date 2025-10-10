#include <stddef.h> // For NULL

/**
 * Fills array in increasing order
 * 
 * @param array given array
 * @param array_len length of array
 * @param begin Starting value
 * @param end maximum value
 * 
 * @return The number of values able to fit
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if(array == NULL){
        return 0;
    }

    int result = 0;
    while(result<array_len && begin <= end){
        *array = begin;
        array++;
        begin++;
        result++;
    }

    return result;
}

#include <stddef.h> // For NULL

/**
 * Fills empty array with chars to make a string
 * 
 * @param dest the empty buffer to fill
 * @param dest_cap the max size of the array
 * @param c the character to fill
 * 
 */
void string_fill(char dest[], int dest_cap, char c) {
    if (dest == NULL || dest_cap <= 0) {
        return;
    }

    for (int i = 0; i < dest_cap - 1; i++) {
        dest[i] = c;
    }

    dest[dest_cap - 1] = '\0';
}



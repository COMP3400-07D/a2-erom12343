#include <stddef.h> // For NULL

/**
 * Concats two strings
 * 
 * @param src1 First string
 * @param src2 String to concat
 * @param src1_cap Size limit of string 1
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (!src1) return;
    if (!src2) return;

    // finds end of first array
    char* end = src1;
    while (*end) {
        end++;
        src1_cap--;
    }

    // adds second array to end of first
    while (*src2 && src1_cap > 1) {
        *end = *src2;
        end++;
        src2++;
        src1_cap--;
    }

    //terminates array
    *end = '\0';
}


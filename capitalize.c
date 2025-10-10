#include <stddef.h> // For NULL
#include <stdlib.h> // for malloc
#include <ctype.h> // for toupper

/**
 * Takes string and returns new, Capitilized string
 * 
 * @param s string to capitilize
 * 
 * @return new string
 */
char* capitalize(const char* s) {
    if(s == NULL) return NULL;

    int length = 0;
    const char* p = s;
    while(*p){
        length++;
        p++;
    }

    char* newString = malloc(sizeof(char) * (length + 1));
    char* pnewString = newString;
    for(int i = 0; i < length; i++){
        *pnewString = toupper(*s);
        pnewString++;
        s++;
    }

    *pnewString = '\0';
    return newString;
}


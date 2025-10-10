#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h> // For character functions

/**
 * Checks validity of password. Must have 2 upper and 2 lower
 * 
 * @param s Password to be checked
 * 
 * @return True if password is valid
 */
bool valid_password(const char* s) {
    if(s == NULL){
        return false;
    }
    
    int length = 0;
    int upper = 0;
    int lower = 0;

    while(*s){
        if(!isalnum(*s)){
            return false;
        }

        if (isupper(*s)) {
            upper++;
        } else if (islower(*s)) {
            lower++;
        }

        length++;
        s++;
    }

    if(
        length >= 6 && length <= 10 &&
        upper >= 2 && lower >= 2
    ) {return true;} else {return false;}
}

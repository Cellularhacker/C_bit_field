/*
* Cellularhacker
* GNU GENERAL PUBLIC LICENSE Version 3
* BitField01.c
*/
#include <stdio.h>

#define true 1  //define true as 1
#define false 0 //define false as 2

typedef struct boolean {    //Declare boolean structrue
    unsigned int value : 1; //Declare value with unsigned int by 1bit
}bool;  //Rename "struct boolean" as "bool"

int main(void) {
    bool boolean_;   //Create new variable type of boolean struct 

    boolean_.value = true;   //Set value;memeber of boolean with true;1
    printf("Value: %d\n", boolean_.value);
    
    boolean_.value = false;  //Set value;memeber of boolean with false;0
    printf("Value: %d\n", boolean_.value);

    return 0;
}
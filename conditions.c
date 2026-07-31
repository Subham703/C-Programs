//if else conditional statement.
//wap to check if a user is elegible to vote or not
/**
 Syntax:

 if( condition ) {
    ...code;
 } else {
    ...code;
 }
 */

#include<stdio.h>

int main() {

    int age = 18;
    if ( age > 100 )
        printf("Invalid age!!"); 

    if (age >= 18) 
        printf("User is elegible to vote!!");
    else 
        printf("User is not elegible to vote!!");

    return 0;
}


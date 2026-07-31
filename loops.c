/**
 * loops -> program that continues until a condition is met
 *  C has 3 types of loops : for loop, while loop, do while loop
 */

#include<stdio.h>
int main () {
    /**
     for loop syntax:
     for( initialization ; condition ; updation ) {
        ...code;
     }

     */

    int i=1;

    for(i;i<=10;i++) {
        printf("The value of i is %d", i);
        printf("India is my country\n");
    }

    return 0;
}
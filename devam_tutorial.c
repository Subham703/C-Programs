// the code below below is a basic program to grab the readers attention for
// better understanding of C programming

// step 1
#include<stdio.h>


int addTwoNumbers(int a, int b) {
    int result = a + b;
    return result;
}

int main() {

    int a;      
    int b;

    printf("Enter 2 numbers: ");

    scanf("%d %d",&a, &b);

    int sum = addTwoNumbers(a, b);

    printf("The sum is: %d", sum);

    return 0;
}
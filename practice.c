/*
1. Ramesh's basic salary is input through keyboard. His dearness allowance is 40% of basic salary
and house rent allowance is 20% of basic salary. WAP to calculate his gross salary.
*/

#include <stdio.h>
int main()
{
    float da,hr,bs,gs;
    printf("enter ramesh's basic salary");
    scanf("%f",&bs); //bs=10000
    da= 40.0/100*bs; //da=0.4*bs -> 0.4*10000 ->4000
    hr= 20.0/100*bs; //
    gs = da+hr+bs;
    printf("ramesh's gross salary is %f",gs);
    return 0;

}

/*
2. The distance between 2 cities ( in km ) is input through keyboard. WAP to convert and print the 
distance in meter, feet, inches and centimeters.
*/

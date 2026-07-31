/*
1. Ramesh's basic salary is input through keyboard. His dearness allowance is 40% of basic salary
and house rent allowance is 20% of basic salary. WAP to calculate his gross salary.
*/

// #include <stdio.h>
// int main()
// {
//     float da,hr,bs,gs;
//     printf("enter ramesh's basic salary");
//     scanf("%f",&bs); //bs=10000
//     da= 40.0/100*bs; //da=0.4*bs -> 0.4*10000 ->4000
//     hr= 20.0/100*bs; //
//     gs = da+hr+bs;
//     printf("ramesh's gross salary is %f",gs);
//     return 0;

// }

/*
2. The distance between 2 cities ( in km ) is input through keyboard. WAP to convert and print the 
distance in meter, feet, inches and centimeters.
*/

// #include <stdio.h>
// int main()
// {
//     float distance,dim,dif,dii,dic;
//     printf("enter the distance in km");
//     scanf("%f",&distance);
//     dim= distance*1000;
//     dif= dim*3.28;
//     dii= dif*12;
//     dic= dii*2.54;
//     printf("the distance between 2 cities in meter is %f\nin feet is %f\nin inches is %f\n and in centimeters is %f",dim,dif,dii,dic);

//     return 0;
// }

 /*
  3. WAP to convert celcius into farenhite and farenhite into celcius.
 */
// #include <stdio.h>
// int main()
// {
//     float celcius,farenhite;
//     printf("enter the temperature in celcius");
//     scanf("%f",&celcius);
//     farenhite=(celcius*1.8)+32;
//     printf("the temperature in farenhite is %f\n",farenhite);
//     printf("enter the temperature in farenhite");
//     scanf("%f",&farenhite);
//     celcius=(farenhite-32)*0.5;
//     printf("the temperature in celcius is %f",celcius);
//     return 0;
// }

// WAP to calc the area of a square.
#include <stdio.h>
int main()
{
    float side,area;
    printf("enter the length of a side of the square in meters");
    scanf("%f",&side);
    area= side*side;
    printf("the area of the square in meters is %f", area);
    
    return 0;
}

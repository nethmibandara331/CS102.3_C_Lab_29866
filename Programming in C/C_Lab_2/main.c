#include <stdio.h>
#include <stdlib.h>
//Question 1
int main()
{
    int age;
    printf("HI,HOW OLD ARE YOU?");
    scanf("%d",&age);
    printf("WELCOME%d\n",age);
    printf("LET'S BE FRIENDS\n");
}

//Question 2
int main()
{
    printf("%5d%5d%5d\n", 2, 4, 8);
    printf("%5d%5d%5d\n", 3, 9, 27);
    printf("%5d%5d%5d\n", 4, 16, 64);
}

//Question 3
int main()
{
    float average,distance,time;
    printf("Enter distance in meters");
    scanf("%f",&distance);
    printf("Enter time in seconds");
    scanf("%f",&time);
    average=distance/time;
    printf("Average speed:%.2f",average);
}

//Question 4
int main()
{
    float farenheit;
    float celsius;
    printf("Enter temperature in degrees farenheit");
    scanf("%f",&farenheit);
    celsius=(farenheit-32)*5/9;
    printf("Temperature in degrees celsius: %.2f\n",celsius);
}

#include <stdio.h>
#include <stdlib.h>
//Q-1
int main()
{
    int no;
    printf("Input a number");
    scanf("%d",&no);
    if(no%2==0)
        printf("It is an even number\n");
    else
        printf("It is an odd number\n");
    return 0;
}

//Q-2
int main()
{
    char Operator;
    float no1,no2;
    printf("Please Enter an Operator");
    scanf("%c",&Operator);
    printf("\n Please Enter the Values for two operands: no1 and no2");

    switch(Operator)
    {
    case '+':
        printf("the addition of two numbers are %f",no1+no2);
        break;
    case '-':
        printf("the substraction of two numbers are %f",no1-no2);
        break;
    case '*':
        printf("the multiplication of two numbers are %f",no1*no2);
        break;
    case '/':
        printf("the division of two numbers are %f",no1/no2);
        break;
    default:
        printf("\n You have entered an Invalid Operator");
    }
    return 0;
}

//Q-3
int main()
{
    int choice;
    float r,circum,area,volume,pi=3.14;
    printf("1.Circumference of a circle\n");
    printf("2.Area of a circle\n");
    printf("3.Volume of a sphere\n");
    printf("\n What is your choice?");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the radius:");
        scanf("%f",&r);
        circum=2.00*pi*r;
        printf("\n The circumference of the circle is %2f\n",circum);
        break;
    case 2:
        printf("Enter the radius:");
        scanf("%f",&r);
        area=pi*r*r;
        printf("\n The area of the circle is %2f\n",area);
        break;
    case 3:
        printf("Enter the radius:");
        scanf("%f",&r);
        volume=(4.00/3.00)*pi*r*r*r;
        printf("\n The volume of the sphere is %2f\n",volume);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;
}

//Q-4
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
        printf("a is a vowel");
        break;
    case 'e':
        printf("e is a vowel");
        break;
    case 'i':
        printf("i is a vowel");
        break;
    case 'o':
        printf("o is a vowel");
        break;
    case 'u':
        printf("u is a vowel");
        break;
    default:
        printf("%c is not a vowel\n",ch);
    }
    return 0;
}

//Q-5
int main()
{
    int month;
    printf("Enter the month number(1-12:");
    scaf("%d",&month);

    switch(month)
    {
    case 1:
        printf("January has 31 days\n");
        break;
    case 2:
        printf("February has 28 days\n");
        break;
    case 3:
        printf("March has 31 days\n");
        break;
    case 4:
        printf("April has 30 days\n");
        break;
    case 5:
        printf("May has 31 days\n");
        break;
    case 6:
        printf("June has 30 days\n");
        break;
    case 7:
        printf("July has 31 days\n");
        break;
    case 8:
        printf("August has 31 days\n");
        break;
    case 9:
        printf("September has 30 days\n");
        break;
    case 10:
        printf("October has 31 days\n");
        break;
    case 11:
        printf("November has 30 days\n");
        break;
    case 12:
        printf("December has 31 days\n");
        break;
    default:
        printf("Invalid month number\n");
    }
    return 0;
}

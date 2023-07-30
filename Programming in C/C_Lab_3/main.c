#include <stdio.h>
#include <stdlib.h>
//Q-1
int main()
{
    int n1,n2,max;
    printf("Enter Two Numbers");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    max=n1;
    else
        max=n2;
    printf("The Highest is %d\n",max);
    return 0;
}

//Q-2
int main()
{
    int n1,n2,n3,largest,smallest;

    printf("Enter Three Integer Numbers");
    scanf("%d %d %d",&n1,&n2,&n3);

    largest=n1;
    if(n2>largest)
    {
        largest=n2;
    }
    if(n3>largest)
    {
        largest=n3;
    }
    smallest=n1;
    if(n2<smallest)
    {
        smallest=n2;
    }
    if(n3<smallest)
    {
        smallest=n3;
    }
    printf("Largest Number %d\n",largest);
    printf("Smallest Number %d\n",smallest);

    return 0;
}

//Q-3
int main()
{
    char empname[20];
    float bs,inc,ns;
    printf("Enter Employee Name");
    scanf("%s",&empname);
    printf("Enter Basic Salary");
    scanf("%f",&bs);
    if (bs>=10000)
        inc=bs*0.15;
    else
        if(bs>=5000)
            inc=bs*0.10;
        else
            inc=bs*0.05;
        ns=bs+inc;
        printf("Employee Name %s\n",empname);
        printf("New Salary %.2f\n",ns);

    return 0;
}

//Q-4
int main()
{
    float radius;
    printf("Enter the radius");
    scanf("%f",&radius);

    printf("Diameter is %.2f\n",radius*2.0);
    printf("Circumference is %.2f\n",radius*2.0*3.14159);
    printf("Area is %.2f\n",radius*radius*3.14159);

    return 0;
}

//Q-5
int main()
{
    int n1,n2;
    printf("Enter two integer numbers");
    scanf("%d %d",&n1,&n2);
    if(n1%n2==0)
    {
        printf("%d is a multiple of %d.\n",n1,n2);
    }
    else
    {
        printf("%d s not a multiple of %d.\n",n1,n2);
    }

    return 0;
}

//Q-6
int main()
{
    char uppercase[]={'A', 'B', 'C'};
    char lowercase[]={'a', 'b', 'c'};
    char digits[]={'0', '1', '2'};
    char symbols[]={'$', '*', '+', '/', ' '};
    printf("Uppercase letters\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",uppercase[i],(int)uppercase[i]);
    }
    printf("\nLowercase letters\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",lowercase[i],(int)lowercase[i]);
    }
    printf("\nDigits\n");
    for (int i=0;i<3;i++)
    {
        printf("%c %d\n",digits[i],(int)digits[i]);
    }
    printf("\nSymbols\n");
    for (int i=0;i<5;i++)
    {
        printf("%c %d\n",symbols[i],(int)symbols[i]);
    }

    return 0;
}

//Q-7
int main()
{
    float BasicSalary,MonthlySales;
    int YearsOfService;
    char City;
    float AdditionalAllowance;
    float Bonus;
    float GrossRemuneration;

    printf("Enter the Basic Salary");
    scanf("%f",&BasicSalary);

    printf("Enter the number of Years Of Service");
    scanf("%d",&YearsOfService);

    printf("Enter the City (C for Colombo,any other character for other cities)");
    scanf("%c",&City);

    printf("Enter the Monthly Sales amount");
    scanf("%f",&MonthlySales);

    if (YearsOfService>5){
            AdditionalAllowance=0.1*BasicSalary;
    }
    if (City=='C'){
        AdditionalAllowance=AdditionalAllowance+2500;
    }
    if (MonthlySales>=0 && MonthlySales <= 25000){
        Bonus=0.1*MonthlySales;
    }
    else if (MonthlySales > 25000 && MonthlySales <= 50000){
        Bonus=0.12*MonthlySales;
    }
    else if (MonthlySales > 50000){
        Bonus=0.15*MonthlySales;
    }
    GrossRemuneration=BasicSalary + AdditionalAllowance + Bonus;
    printf("Gross Monthly Remuneration is %.2f\n",GrossRemuneration);
    return 0;
}


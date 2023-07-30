#include <stdio.h>
#include <stdlib.h>

//Q-1
int main()
{
    printf("Nethmi Bandara\n");
    printf("st.Joseph's Balika Maha Vidyalaya\n");
}

//Q-2
int main()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
}

//Q-3
int main()
{
    int itemno,qty;
    char desc[20];
    float price,tprice;
    printf("Item Number");
    scanf("%d",&itemno);
    printf("Enter The Item Description");
    scanf("%s",&desc);
    printf("Enter Item Quantity");
    scanf("%d",&qty);
    printf("Enter  Item Price");
    scanf("%f",&price);
    tprice=qty*price;
    printf("Item no %d\n",itemno);
    printf("Description %s\n",desc);
    printf("Total price %.2f\n",tprice);
}


//Q-4
int main()
{
    int no1,no2,total;
    printf("Enter First Number");
    scanf("%d",&no1);
    printf("Enter Second Number");
    scanf("%d",&no2);
    total=no1+no2;
    printf("The total is %d\n",total);
}




//Q-5
int main()
{
    float no1,no2,average;
    printf("Enter First Number");
    scanf("%f",&no1);
    printf("Enter Second Number");
    scanf("%f",&no2);
    average=(no1+no2)/2;
    printf("The average is %f\n",average);
}

//Q-6
int main()
{
    char name[20];
    int byear,age;
    printf("Enter Student Name");
    scanf("%s",&name);
    printf("%s\n",name);
    printf("Enter Birth Year");
    scanf("%d",&byear);
    age=2023-byear;
    printf("%d\n",age);
}


//Q-8
int main()
{
    printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);
	printf("Just print the percentage sign %%\n", 10);


}
Output :-
The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14
Hexadecimal: ff
Octal: 377
Unsigned value: 150
Just print the percentage sign %



    return 0;
}

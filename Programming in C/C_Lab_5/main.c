#include <stdio.h>
#include <stdlib.h>
//Section A
//Q-1
//Using While Loop
int main()
{
    int i=0;
    while(i<=100)
    {
        printf("%d",i);
        i++;
    }
    return 0;
}
//Using Do-While Loop
int main()
{
    int i=0;
    do
    {
        printf("%d",i);
        i++;
    }
    while(i<=100);
    return 0;
}
//Using For Loop
int main()
{
    int i=0;
    for (i=0;i<=100;i++);
    {
        printf("%d",i);
    }
    return 0;
}

//Q-2
int main()
{
    int marks[10];
    int i,total=0;
    float average;

    printf("Enter the 10 marks\n");

    for (i=0;i<10;i++)
    {
        scanf("%d",&marks[i]);
        total+=marks[i];
    }
    average=total/10.0;

    print("Total marks %d\n",total);
    printf("Average marks %.2f\n",average);

    if (average<50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }
    return 0;
}

//Q-3
int main()
{
    int i,num,fac=1;
    printf("Enter num");
    scanf("%d",&num);
    if(num<0)
    {
        printf("error");
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            fac*=i;
        }
        printf("factorial=%d",fac);
    }
    return 0;
}

//Q-4
int main()
{
    int num,sum=0,result;
    printf("Enter Number");
    scanf("%d",&num);

    while(num!=0)
    {
        result=num%10;
        sum+=result;
        num/=10;
    }
    printf("sum=%d",sum);
    return 0;
}

//Q-5
int main()
{
    int num,reversedNum=0,remain;
    printf("Enter a number");
    scanf("%d",&num);

    do
    {
        remain=num%10;
        reversedNum=reversedNum+10+remain;
        num/=10;
    }
    while (num!=0);
    printf("Reversed Number %d\n",reversedNum);
    return 0;
}

//Q-6
int main()
{
    int base,exponent,result=1;

    printf("Enter the base");
    scanf("%d",&base);

    printf("Enter the exponent");
    scanf("%d",&exponent);
    if(exponent>=0)
    {
        for(int i=0;i<exponent;i++)
        {
            result*=base;
        }
        else
            printf("Exponent should be a non-negative integer\n");
    }
    printf("Result %d\n",result);
    return 0;
}

//Q-7
int main()
{
   int n=10;
   int first=0,second=1,next;

   printf("Fibonacci Sequence");

   for(int i=0;i<n;i++);
   {
       if(i<=1)
       {
           next=i;
       }
       else
       {
           next=first+second;
           first=second;
           second=next;
       }
       printf("%d",next);
   }
   printf("\n");
   return 0;
}

//Q-8
int main()
{
    int number,originalNumber,remainder,result=0,n=0;

    printf("Enter an integer");
    scanf("%d",&number);

    originalNumber=number;

    while(originalNumber != 0)
        {
        originalNumber /= 10;
        ++n;
        }
    originalNumber = number;

    while(originalNumber != 0)
        {
        remainder=originalNumber%10;
        result+=pow(remainder,n);
        originalNumber/=10;
        }
    if (result==number)
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
   return 0;
}

//Q-9
int main()
{
   char letter;
   printf("ASCII values for letters A to Z:\n");
   for (letter = 'A'; letter <= 'Z'; letter++)
    {
        printf("%c: %d\n", letter, letter);
    }
   return 0;
}
//Q-10
int main()
{
    int rows=5;
    for (int i=1; i<=rows;i++)
    {
        for (int j=1;j<=i;j++)
         {
             printf("*");
         }
         printf("\n");
    }
  return 0;
}

//Q-11
int isPrime(int num)
{
    if (num<=1) {
        return 0;
    }

    for (int i=2;i*i<=num;i++)
        {
        if (num%i==0)
        {
            return 0;
        }
        }

    return 1;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (isPrime(number)) {
        printf("%d is a prime number\n",number);
    } else
    {
        printf("%d is not a prime number\n",number);
    }

    return 0;
}

//Q-12
void printFactors(int number)
{
    printf("Factors of %d",number);
    for (int i=1;i<=number;i++)
        {
        if (number%i==0)
        {
            printf("%d",i);
        }
        }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printFactors(num);
    return 0;
}

//Q-13
int main()
{
    int num,sum=0;

    printf("Enter numbers to add (enter -1 to stop)\n");

    while (1)
        {
        scanf("%d",&num);

        if (num==-1)
        {
            break;
        }

        sum+=num;
    }

    printf("Sum %d\n",sum);
    return 0;
}

//Q-14
int main()
{
    int arr[10];
    int i;

    printf("Please enter 10 integers\n");

    for (i=0;i<10;i++)
    {
        printf("Enter element %d", i + 1);
        scanf("%d",&arr[i]);
    }

    printf("\nThe array you entered is\n");

    for (i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

//Q-15
int main()
{
    int arr[10];
    int i;
    int evenCount=0;

    printf("Please enter 10 integers\n");

    for (i=0;i<10;i++)
    {
        printf("Enter element %d",i+1);
        scanf("%d",&arr[i]);

        if (arr[i]%2==0)
        {
            evenCount++;
        }
    }

    printf("\nThe array you entered is\n");

    for (i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
printf("\n\nThe count of even numbers in the array is %d\n",evenCount);

    return 0;
}

//Section B
//Q-1
int main()
{
    int numbers[10];
    int positiveCount=0,negativeCount=0,zeroCount=0;

    printf("Please enter 10 numbers\n");

    for (int i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
    }

    for (int i=0;i<10;i++)
    {
        if (numbers[i]>0)
        {
            positiveCount++;
        } else if (numbers[i]<0)
        {
            negativeCount++;
        } else
        {
            zeroCount++;
        }
    }
    printf("Number of positive numbers %d\n",positiveCount);
    printf("Number of negative numbers %d\n",negativeCount);
    printf("Number of zeros %d\n",zeroCount);

    return 0;
}

//Q-2
int main()
{
    int marks[10];
    int i,sum=0,max=0,min=100;
    float average;

    printf("Enter the marks of 10 students\n");

    for (i=0;i<10;i++)
    {
        printf("Enter the marks of student %d",i+1);
        scanf("%d",&marks[i]);

        sum+=marks[i];

        if (marks[i]>max)
        {
            max=marks[i];
        }

        if (marks[i]<min)
        {
            min=marks[i];
        }
    }

    average=(float)sum/10;

    printf("\nMaximum marks %d\n",max);
    printf("Minimum marks %d\n",min);
    printf("Average marks %.2f\n",average);
    return 0;
}

//Q-3
int main()
{
    float price[10];
    int count=0;
    float sum=0;

    printf("Please enter the prices of 10 items\n");
    for (int i=0;i<10;i++)
    {
        printf("Item %d",i+1);
        scanf("%f",&price[i]);
        sum+=price[i];

        if (price[i]>200)
        {
            count++;
        }
    }

    float average=sum/10;
    printf("\nAverage price of an item %.2f\n",average);

    printf("Number of items with price greater than 200 %d\n",count);

    return 0;
}

//Q-4
int main()
{
    int employeeNo,count=0;
    float basicSalary;

    printf("Enter the employee number and basic salary (enter -999 to stop)\n");

    while(1)
    {
        printf("Employee No");
        scanf("%d",&employeeNo);

        if(employeeNo==-999)
        {
            break;
        }

        printf("Basic Salary");
        scanf("%f",&basicSalary);

        if(basicSalary>=5000)
        {
            count++;
        }
    }

    printf("\nNumber of employees with basic salary >= 5000 %d\n",count);

    return 0;
}

//Q-5
int main()
{
    int employeeNumber,hoursWorked;
    int overtimePayment,overtimeExceeding4000=0;
    int totalEmployees=0,employeesWithOvertime=0;

    const int normalOvertimeRate=150;
    const int excessOvertimeRate=200;

    printf("Enter employee number (-999 to end)");
    scanf("%d",&employeeNumber);

    while (employeeNumber!=-999)
    {
        printf("Enter hours worked by employee %d",employeeNumber);
        scanf("%d",&hoursWorked);

        totalEmployees++;

        if (hoursWorked>40)
        {
            employeesWithOvertime++;

            int overtimeHours=hoursWorked-40;
            overtimePayment=(normalOvertimeRate*(40-overtimeHours))+(excessOvertimeRate*overtimeHours);

            if (overtimePayment>4000)
            {
                overtimeExceeding4000++;
            }
        }
        else
        {
            overtimePayment = 0;
        }

        printf("Employee Number %d\n", employeeNumber);
        printf("Overtime Payment %d\n", overtimePayment);

        printf("\nEnter employee number (-999 to end)");
        scanf("%d",&employeeNumber);
    }

    float percentageExceeding4000=(float)overtimeExceeding4000/employeesWithOvertime*100;

    printf("\nPercentage of employees with overtime payment exceeding Rs.4000 %.2f%%\n",percentageExceeding4000);

    return 0;
}






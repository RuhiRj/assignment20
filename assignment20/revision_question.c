/*Write a C program to take two numbers as input and print their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum=0;
    printf("enterthe two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d ",sum);
    return 0;
}
//Create a program that checks whether a given number is even or odd and prints the result.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n & 1)//n%2==0
        printf("given number is odd %d ",n);
    else
        printf("given number is even %d ",n);
    return 0;
}
//loop
//Implement a C program to print the Fibonacci series up to a specified number of terms.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,first=0,second=1,next,i;
    printf("enter the number:");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}*/
//Write a program to find the largest element in an array of integers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5],i,j,temp=0;
    printf("enter the five numbers:");
    for(i=0; i<5; i++)
        scanf("%d",&arr[i]);
    for(i=0; i<5; i++)
    {
        for(j=i+1; i<5; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(i=0; i<5; i++)
        printf("%d ",arr[i]);

    }

   // for(i=0; i<5; i++)
     //   printf("%d ",arr[i]);
    return 0;
}


























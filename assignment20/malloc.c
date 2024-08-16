#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int *ptr;
    int n,i;
    printf("enter the number of the elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
        printf("memory is not allocated");
    else
        printf("memory is allocated\n");
    printf("enter %d number:",n);
    for(i=0; i<n; i++)
        scanf("%d",&ptr[i]);
    for(i=0; i<n; i++)
        printf("%d\n",ptr[i]);
    return 0;



}

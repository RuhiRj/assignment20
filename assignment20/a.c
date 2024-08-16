/*#include<stdio.h>
#include<conio.h>
int main()
{
  int n,first=0,second=1,next,i;
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      if(i<=1){
      next=i;
     }
    else{
     next=first+second;
     first=second;
     second=next;
    }
  printf("%d ",next);
  }
  return 0;
}
//Write a program to find the largest element in an array of integers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int max=0,i,n;
    printf("enter the number ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0;i<n;i++){
    if(arr[i]<max){
        max=arr[i];
    }
    }

    printf("%d ",max);
    return 0;
}
int main()
{
    int min=0,i,n;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    for(i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    }
    printf("%d ",min);
    return 0;
}
//Define a function to calculate the factorial of a given number and use it in a program.(TSRS),(TSRN),(TNRS),(TNRN)
int main(){
    //int n=5;
    fact();
    return 0;
}
void fact()
{
    int fac=1,i,n=5;
    while(n){
        fac=fac*n;
        n--;
    }
        printf("%d ",fac);

}
*/

//Create a program that swaps the values of two variables using pointers.(TSRS)
int swap(int *,int *);
int main()
{
    int n=9,m=7;
    printf("%d%d",swap(&n,&m));
    return 0;

}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}























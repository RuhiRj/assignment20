#include<stdio.h>
#include<conio.h>
#include<string.h>
int lenth(char *);
int main()
{
    int l;
    char str[10];
    fgets(str ,10, stdin);
    l=lenth(str);
    printf("%d ",l);
    return 0;
}
int lenth(char *a)
{
    int i;
    for(i=0;*(a+i);i++);
        return i;
}

#include<stdio.h>
#include<conio.h>
struct book input();
int main()
{
    struct book b1={1,"ruhi",34.0f};
    display(b1);
    printf("\n");
    return 0;

}
struct book
{
    int bookid;
    char title[10];
    float price;
};
struct book input()
{
    struct book b;
    printf("enter the bookid , title, and price:");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,10,stdin);
    scanf("%f",b.price);
    return b;
}
void display(struct book b)
{
    printf("\n%d %s %f",b.bookid,b.title,b.price);
}

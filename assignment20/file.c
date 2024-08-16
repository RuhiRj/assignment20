#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("C:\\Users\\My\\Desktop\\prakash.txt","w");
    fprintf(fp,"%s","hello nature");
    fclose(fp);
    return 0;
}

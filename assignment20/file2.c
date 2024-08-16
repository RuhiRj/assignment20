#include<stdio.h>
int main()
{
    FILE *fp;
    char buffer[30];
    fp=fopen("C:\\Users\\My\\Desktop\\prakash.txt", "r");
    fgets(buffer,sizeof(buffer),fp);
    printf(buffer);
    fclose(fp);
    return 0;
}


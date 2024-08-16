/*
#include <stdio.h>
#include <string.h>
void swapStrings(char a[], char b[]);
int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);
    swapStrings(str1, str2);
    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);
    return 0;
}
void swapStrings(char a[], char b[]) {
    char temp[10];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}*/
#include<stdio.h>
#include<conio.h>

// Function declaration
void swap(char a[], int size_a, char b[], int size_b);

int main() {
    char arr[5];
    char ar[5];
    swap(arr, 2, ar, 3);
     printf("Swapped values in arr and ar are: %c %c %c %c %c and %c %c %c\n", arr[0], arr[1], arr[2], ar[0], ar[1], ar[2]);
    return 0;
}
void swap(char a[], int size_a, char b[], int size_b) {
    int i;
    printf("Enter %d values for arr:\n", size_a);
    for (i = 0; i < size_a; i++)
        scanf(" %c", &a[i]);
        printf("Enter %d values for arr:\n", size_b);
    for (i = 0; i < size_b; i++)
        scanf(" %c", &b[i]);
        char *temp;
    for (i = 0; i < size_a; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

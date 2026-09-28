#include<stdio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int c=a-b;
    printf("Difference of the numbers is %d",c);
    getch();
}
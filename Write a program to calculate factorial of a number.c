#include<stdio.h>
#include<conio.h>
void main()
{

    int fact=1,i=1;
    int number;
    printf("enter the number for which factorial is to be calcuated ");
    scanf("%d",&number);
    while(i<=number)
    {

        fact=fact*i;
        i++;
    }
    printf("%d",fact);
    getch();
}

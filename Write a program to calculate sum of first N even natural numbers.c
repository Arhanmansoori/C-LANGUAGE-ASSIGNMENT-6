#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i=1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
if(i%2==0)
{


        sum=sum+i;
}

        i++;
    }
    printf("the sum of the numbers is equal to %d",sum);
    getch();
}


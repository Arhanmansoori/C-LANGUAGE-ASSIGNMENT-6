#include<stdio.h>
#include<conio.h>
void main()
{

    int n,i=1,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)

{



        sum=sum+i*i;
        i++;
}

    printf("the sum of the numbers is equal to %d",sum);
    getch();
}




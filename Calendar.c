#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter number of days in month: \n");
    scanf("%d",&a);
    printf("Enter starting day 31of the week(1=Sun, 7=Sat):\n");
    scanf("%d",&b);
    for (int c=0;c<b-1;c++)
        printf("   ");
    for(int i=1;i<=a;i++)
    {
        if ((i+b-2)%7==0)
        {printf("\n");}
        if (i<10)
        printf("%2d",i);
        else
        printf("%3d",i);
    }
    return 0;
}   
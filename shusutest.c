#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=2;i<=sqrt(a);i++)
        if (a%i==0)
            {printf("No!\n");
            printf("%d",i);
            return 0;}
    printf("Yes!");
    return 0;
}

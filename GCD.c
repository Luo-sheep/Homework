#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    for (int a;n!=0;)
    {
        a=m%n;
        m=n;
        n=a;
    }
    printf("%d",m);

}
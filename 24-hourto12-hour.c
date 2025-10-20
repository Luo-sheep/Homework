#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    if (a>12)
    {
        a=a-12;
        printf("%d:%02d PM",a,b);
    }
    if (a==0)/*卧槽，==才是条件运算符*/
    {
        a=a+12;
        printf("%d:%02d AM",a,b);
    }
    else
        printf("%d:%02d AM",a,b);

    return 0;
}
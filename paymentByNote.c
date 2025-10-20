#include <stdio.h>
int main()
{
    /*类似取整，感觉*/
    int m,a,b,c,d;
    scanf("%d",&m);
    d=m%5;
    c=m%10/5;/*整数的除法会直接省去*/
    b=m%20/10;
    a=m/20;
    /*c=(m%10-d)/5;
    b=(m%20-d-c*5)/10;
    a=(m-d-c*5-b*10)/20;*/
    printf("$20 bills:%d\n",a);
    printf("$10 bills:%d\n",b);
    printf("$5 bills:%d\n",c);
    printf("$1 bills:%d\n",d);


}
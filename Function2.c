#include <stdio.h>
#include <stdlib.h> 
double min (double *x,double *y)//传入的是地址
//传入的类型也要注意！！也是double
{
    return ((*x<*y)? *x:*y);
}

int main()
{
    double a,b;
    //scanf("%f %f",&a,&b);是错的！！！double类型要用%lf
    scanf("%lf %lf",&a,&b);
    //"%f %f"之间的空白意味着跳过下一个输入项前的所有空白字符，包括空格、制表符或换行符
    printf("the min is %.2f\n",min(&a,&b));
    return 0;
}

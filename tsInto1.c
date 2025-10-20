#include <stdio.h>

int main() {
    // 在这里编写你的代码
    int a,b;
    scanf("%d",&a);
    while (a!=1)
    {
        if (a%2==0)
        {
            b=a;
            a=a/2;
            printf("%d/2=%d\n",b,a);
        }
        else
        {
            b=a;
            a=a*3+1;
            printf("%d*3+1=%d\n",b,a);
        }
    }
    return 0;
}
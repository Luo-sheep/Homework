#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (a<0)
        a=-a;
    if (b<0)
        b=-b;
    c=a+b;
    printf("absolute value:%d",c);
    return 0;
}
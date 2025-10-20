#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf("%d",&c);
    do{
        c+=1;
        putchar('A');
    }
    while((c%8)!=0);
    return 0;
}
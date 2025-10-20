#include <stdio.h>

int main() {
    int a,i=1,c;
    scanf("%d",&a);
    while (i*i<a)
    {
        if (i%2==0)
        {
            printf("%d\n",i*i);
        }
        i++;
    }
    
    return 0;
}
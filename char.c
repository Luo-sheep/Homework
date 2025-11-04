#include <stdio.h>
int main(void)
{
    char ch='A';
    for (int i=0;i<25;i++)
    {
        printf("%*c",-5,ch);
        ch++;
        if ((i+1)%10==0)
            printf("\n");
    }
    
    return 0;
}
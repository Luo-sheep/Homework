#include <stdio.h>
#define STLEN 10
int main(void)
{
    int min='A';
    int max='Z';
    int sum=min;
    int chat[9]={min};
    chat[9]=max;
    for(int i=1;i<9;i++)
    {
        sum+=3;
        chat[i]=sum;
    }
    for (int i=0;i<10;i++)
    printf("%d ",chat[i]);
    return 0;
}
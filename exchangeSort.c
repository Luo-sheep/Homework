#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a[6], i;
    for(i=1; i<=5; i++)
          scanf("%d", &a[i]);
    for(i=1; i<=5; i++)
        for(int t=i;t<=5;t++)
            if (a[i]>a[t])  //记得给if加（）！
            {
                int q;
                q=a[i];
                a[i]=a[t];
                a[t]=q;
            }

    for(i=1; i<=5; i++)
          printf("%d ", a[i]);
    return 0;
}

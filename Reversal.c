/*#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int sum=0;
    char a[sum];//长度为零的数组是非法的
    printf("Enter a message:");
    while((a[sum++]=getchar())!='\n')
    {
        continue;
    }
    printf("Reversal is:");
    while(sum>=0)
    putchar(a[sum--]);
    return 0;
}
*/
#include <stdio.h>

int main() {
    char a[1000];  // 固定大小，足够大
    int sum = 0;

    while ((a[sum] = getchar()) != '\n') {
        sum++;
    }

    // 逆序打印
    for (int i = sum - 1; i >= 0; i--) {
        putchar(a[i]);
    }

    return 0;
}
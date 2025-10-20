/*
#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int a[10]={0},t,j;
    for(int i=1; ; i++)
        {
            scanf("%d", &t); // 把每一个数读到变量t中
            a[t]++;          // t所对应小房子中的值增加1
        }
    for(int i=0; i<=9; i++)    // 依次判断0～9这个10个小房子
        printf("%d ", a[i]);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10] = {0};  // 用来统计0~9的出现次数
    char ch;

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {  // 逐字符读取直到换行
        if (ch >= '0' && ch <= '9') {
            a[ch - '0']++;  // 将字符转换为对应数字并统计
        }
    }

    printf("\nDigit:\t");
    for (int i = 0; i < 10; i++)
        printf("%d\t", i);

    printf("\nOccurrences:\t");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);

    return 0;
}

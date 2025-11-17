/*最大最小单词简略版（The Biggest and Smallest Words）

编写程序找出一组单词中“最小”单词和“最大”单词。

用户输入单词后，程序根据字典顺序决定排在最前面和最后面的单词。

当用户输入4个字母的单词时，程序停止读入。假设所有单词都不超过20个字母。

输出范例1：
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish


Smallest word: cat
Largest word zebra


输出范例2：


Enter word: computer
Enter word: ink
Enter word: light
Enter word: bookrack
Enter word: book


Smallest word: book
Largest word: light
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#define SIZE 21        /* 限制字符串长度，包括 \0 */
#define LIM 20         /* 可读入的最多行数 */
#define HALT ""        /* 空字符串停止输入 */
int main()
{
    char input[LIM][SIZE];        /* 储存输入的数组        */
    char *ptstr[LIM];             /* 内含指针变量的数组    */
    int ct = 0;                   /* 输入计数             */
    int k;                        /* 输出计数             */

    while (ct < LIM && s_gets(input[ct], SIZE) != NULL
            && input[ct][0] != '\0')
    {
        ptstr[ct] = input[ct];    /* 设置指针指向字符串    */
        ct++;
    }
    stsrt(ptstr, ct);             /* 字符串排序函数        */
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);           /* 排序后的指针          */


    return 0;
}


char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' )
            i++;
        while (getchar() != '\n')
                   continue;
    }
    return ret_val;
}

void stsrt(char *strings [], int num)    /* 字符串排序函数 */
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
             if (strcmp(strings[top], strings[seek]) > 0)
             {
                 temp = strings[top];
                 strings[top] = strings[seek];
                 strings[seek] = temp;
             }
}
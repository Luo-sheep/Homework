/*  fgets2.c  -- 使用 fgets() 和 fputs() */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    //第三个参数指明要读入的文件，eg.stdin:从键盘读入
        fputs(words, stdout);
    puts("Done.");

    return 0;
}
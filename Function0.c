#include <stdio.h>
#include <stdlib.h> 
/*Butler-男管家*/
void butler (void);
/*声明-有这么个函数*/

/*前一个void指的是函数没有返回值
后一个指的是不带参数*/

int main()
{
    puts("剧情：");
    char line[100];
    fgets(line,100,stdin);
    puts("\n");
    printf("男孩只是");
    puts(line);
    butler();
    return 0;
}

/*所有程序都是从main函数开始执行的！*/

void butler (void)
{
    printf("就被管家活活打断了双腿");
};
/*这是函数的定义，放哪都行
执行看他什么时候在main函数里出现*/
#include <stdio.h>
#include <stdlib.h> 
/*Butler-男管家*/
void butler (void);
/*声明-有这么个函数
前一个void指的是函数没有返回值
后一个指的是不带参数*/
int main()
{
    
    char line[100];
    fgets(line,100,stdin);
    printf("男孩只是");
    puts(line);
    butler();
    return 0;
}

void butler (void)
{
    printf("就被管家活活打断了双腿");
};
#include <stdio.h>
#include <string.h>   

#define SIZE 40
void transfer(char *tf);

int main(void)
{
    char call[SIZE];

    puts("Enter phone number:");
    fgets(call, SIZE,stdin);

    
    transfer(call);
    
    for (int i=0;call[i];i++)
    printf("%c",call[i]);
    return 0;
}


void transfer(char *tf)
{
    // 定义分组边界和对应的数字
    char groups[8][5] = {
        "ABC",  // 2
        "DEF",  // 3
        "GHI",  // 4
        "JKL",  // 5
        "MNO",  // 6
        "PQRS", // 7
        "TUV",  // 8
        "WXYZ"  // 9
    };
    
    for (int i = 0; tf[i] != '\0'; i++)
    {
        char ch = tf[i];
        if('A' <= ch && ch <= 'Z')
        {
            // 查找字符属于哪个分组
            for (int g = 0; g < 8; g++)
            {
                // 检查字符是否在当前分组字符串中
                for (int j = 0; groups[g][j] != '\0'; j++)
                {
                    if (ch == groups[g][j])
                    {
                        // 转换为数字
                        tf[i] = '2' + g;
                        break;
                    }
                }
                if (tf[i] != ch)  // 如果已经转换，跳出循环
                    break;
            }
        }
    }
}
/*void transfer(char *tf)
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
    
    for (int idx =0;tf[idx]!='\0';idx++)
    {
        char ch = tf[idx];
        if('A'<= ch && ch <='Z')
        for(int i=0;i<9;i++)
        for(int a=0;;a++)  
            if (chat[i] <= ch && ch <= chat[i+1])
                {
                    tf[idx]='A'+a;
                    break;
                }
    }
}*/

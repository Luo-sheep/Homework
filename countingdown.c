#include <stdio.h>
#include <stdlib.h> // 用于system()
#include <windows.h> // 用于Sleep()

void clearScreen() {
    system("cls");  // Windows清屏命令
}

int main()
{
    for (int i=120,a,b;i!=0;i--)
    {
        a=i/60;
        b=i%60;
        
        printf("%d:%02d\n", a,b);
        Sleep(1000);/*不知道为啥，好像没有这个语句了*/
        system("cls");/*不知道为啥，好像没有这个语句了*/
        /*clearScreen();; 这个；也用不了
        /*知道了，要win头文件和*/
    }
/*感觉还是无法实现清屏的效果*/
    return 0;
}
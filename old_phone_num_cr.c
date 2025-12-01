/*  */
#include <stdio.h>
#include <string.h>   

#define SIZE 40
char * tele_gets(char * st, int n);

char * transfer(char * tfnum);

int main(void)
{
    char call[SIZE];

    puts("Enter phone number:");
    tele_gets(call, SIZE);
    for (int i;call[i];i++)// 等价于 *str != '\0'
    {
        if ('A'<=call[i] && call[i]<='Z')
        transfer(call[i]);
    }
    puts("That's right!");

    return 0;
}

char * transfer(char * tf)
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
    
    for(int i=0;i<9;i++)
        for(int a=2;;a++)  
            if (chat[i]<=tf&&tf<=chat[i])
                tf
}

char * tele_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                 continue;
    }
    return ret_val;
}

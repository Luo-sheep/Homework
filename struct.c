/*
*对大学上课隐形成本的简单统计
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>//用字符串别忘了提供这个头
#define LEN 40

#if 0
struct cost{
    char name[20];
    int num;
};
#endif//安全注释

typedef struct cost{
    char name[20];
    char price[LEN];
} Cost; 

void update(Cost*,char[]);

int main()
{
    Cost Ec={"Economic","lose the ability to decide"};
    printf("The cost of Not listen %s is %s .\n",Ec.name,Ec.price);
    Cost* Ec_ptr = &Ec;

    puts("Please update:");//自动在其末尾添加一个换行符

    char new[LEN];
    update(Ec_ptr,fgets(new,LEN,stdin));

    puts("After update:\n");
    printf("The cost of Not listen %s is %s .",Ec_ptr->name,Ec_ptr->price);
    return 0;
}

void update(Cost *ke,char *why)
{
    strcpy(ke->price, why);
}
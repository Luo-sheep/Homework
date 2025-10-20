#include <stdio.h>
int main()
{
	float a,b;
    printf("Enter an amount: \n");
	scanf("%f", &a);
    b=a*1.05f;
	printf("with tax added: $%.2f\n",b);
	return 0;
}
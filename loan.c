#include <stdio.h>
int main()
{
	float a,b,c;
    printf("Enter amout of loan: \n");
	scanf("%f", &a);
	printf("Enter interest rate: \n");
	scanf("%f", &b);
	printf("Enter monthly payment:\n");
	scanf("%f", &c);
	b=((b*0.01)/12)+1;
	a=a*b-c;
	printf("$%.2f\n",a);
	a=a*b-c;
	printf("$%.2f\n",a);
	a=a*b-c;
	printf("$%.2f\n",a);
	return 0;
}
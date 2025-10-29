/* sort_str.c -- 读进一些字符串并对它们排序 */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt (char *strings[],int num);
char * ;

int main (void)
{
char input [LIM] [SIZE];
char *ptstr [LIM];
int ct = 0;
int k;
}

ptstr[ct] = input[ct];
ct++;

stsrt (ptstr, ct):
puts ("\nHere's the sorted list: \n"):
for (k = 0: k < ct: k++)
puts (ptstr[k] ):

return 0:

/* 字符串-指针-排序函数 */
void stsrt (char *strings[], int num)
printf ("Input up to $d lines, and I will sort them. \n", LIM);
printf ("To stop, press the Enter key at a line's start. \n");
while (ct < LIM && gets (input [ct]) != NULL && input [ct] [0] != '\0')
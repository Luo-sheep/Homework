#include <stdio.h>
int main(){
    int n;
    double m=1;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        double s=1;
        for(int j=1;j<i+1;j++)
            s*=j;
        m+=1/s;
    }
    printf("%f",m);
    return 0;
}
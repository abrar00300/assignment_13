#include<stdio.h>
int sumN(int n);
int main()
{
    int n;
    printf("enter value of N=");
    scanf("%d",&n);
    printf("sum of first %d natural numbers are = %d",n,sumN(n));
    return 0;
}
int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}

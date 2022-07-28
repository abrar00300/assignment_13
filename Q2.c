#include<stdio.h>
int odd(int);
int main()
{
    int n;
    printf("enter value for N=");
    scanf("%d",&n);
    printf("sum of first %d odd numbers are =%d",n,odd(n));
    return 0;
}
int odd(int n)
{
    if(n==1)
        return 1;
    int r=n*2-1+odd(n-1);
    return r;
}

#include<stdio.h>
int even(int);
int main()
{
    int n;
    printf("enter value for N=");
    scanf("%d",&n);
    printf("sum of first %d even numbers are =%d",n,even(n));
    return 0;
}
int even(int n)
{
    if(n==1)
        return 2;
    int r=n*2+even(n-1);
    return r;
}


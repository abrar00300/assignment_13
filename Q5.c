#include<stdio.h>
int Dsum(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    printf("sum of digits of %d is =%d ",n,Dsum(n));
    return 0;
}
int Dsum(int n)
{
    if(n==0)
        return 0;
        int r=(n%10)+Dsum(n/10);
        return r;
}

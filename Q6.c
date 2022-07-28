#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    printf("factorial of %d is = %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    int r=n*fact(n-1);
    return r;
}


#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    printf("number of digits in %d are = %d",n,count(n));
    return 0;
}
int count(int n)
{
    if(n==0)
        return 0;
    int r=1+count(n/10);
    return r;
}

#include<stdio.h>
void fab(int );
int main()
{
    int n;
    printf("enter value for N=");
    scanf("%d",&n);
    printf("0 1 ");
    fab(n);
    return 0;
}
void fab(int n)
{
    static int a=0,b=1,c;
    if(n>2)
    {
        fab(n-1);
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}

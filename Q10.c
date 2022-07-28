#include<stdio.h>
int power(int,int);
int main()
{
    int n,p;
    printf("enter number =");
    scanf("%d",&n);
    printf("enter power =");
    scanf("%d",&p);
    printf("Answer is = %d ",power(p,n));
    return 0;
}
int power(int p,int n)
{
    if(p==1)
        return n;
    int r=n*power(p-1,n);
    return r;
}

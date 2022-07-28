#include<stdio.h>
int hcf(int,int);
int main()
{
    int n1,n2;
    printf("enter two number =");
    scanf("%d%d",&n1,n2);
    printf("HCF of %d and %d is = %d",n1,n2,hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
    return n1/n2;
}

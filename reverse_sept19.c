#include<stdio.h>
int rev_fun(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,rev;
    scanf("%d",&n);
    rev=rev_fun(n);
    printf("%d",rev);
    return 0;
}

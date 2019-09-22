#include<stdio.h>
void table_fun(int n)
{
    int i;
    for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
}
int main()
{
int n,i;
scanf("%d",&n);
table_fun(n);
return 0;
}

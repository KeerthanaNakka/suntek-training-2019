#include<stdio.h>
void count_fun(int* a,int n)
{
int temp,i,j,count;
for(i=0;i<n;i++)
{
    count=0;
    for(j=i+1;j<n;j++)
    {
       if(a[i]==a[j])
       {
           count++;
           a[j]=temp;

       }
    }
    if(a[i]!=temp)
    printf("%d-%d\n",a[i],count+1);
}
}
int main()
{
int a[100],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    count_fun(a,n);
return 0;
}

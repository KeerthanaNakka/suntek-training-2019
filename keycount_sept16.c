#include<stdio.h>
void count_fun(int* a,int n,int key)
{
    int i,count=0;
    for(i=0;i<n;i++)
{
if(a[i]==key)
count++;
}
 if(count==0)
printf("-1");
else
printf("%d-%d\n",key,count);
}

int main()
{
int key,n,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&key);
count_fun(a,n,key);
return 0;
}

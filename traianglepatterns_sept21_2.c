#include<stdio.h>
#include<stdlib.h>
void pattern_fun(int n)
{
    int i,j,k,space;
    space=((n+1)/2)+1;
   for(i=0;i<n;i++)
   {
    for(k=0;k<=space;k++)
    printf(" ");
    for(j=0;j<=i;j++)
        printf("* ");
    printf("\n");
    space--;
   }
   printf("\n\n\n");
   space=0;
   for(i=n-1;i>=0;i--)
   {
       for(k=0;k<space;k++)
       {
           if(space==n)
            exit(0);
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
           printf("* ");
       }
       printf("\n");
       space++;
   }
}
void crosspattern_fun(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1||i==j||i==n-1-j)
                printf("* ");
                else
                printf("  ");
        }
        printf("\n");
    }
}
int main()
{
int n;
scanf("%d",&n);
pattern_fun(n);
printf("\n\n\n");
crosspattern_fun(n);
return 0;
}

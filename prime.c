#include<stdio.h>
int main()
{
int i,n,flag=0;
scanf("%d",n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;break;
}}
if(flag==0)
   {
printf("%d is a Prime Number");
   }
else{
printf("%d is a not a Prime Number");
}
return 0;
}


#include<stdio.h>
int main()
{
int l,t,k;
printf("Enter the start interval");
scanf("%d",&l);
printf("enter the ending interval");
scanf("%d",&t);
for(k=l;k<=t;k++)
if(k%2==0)
{
printf(" %d",k);
}
return 0;
}

#include<stdio.h>
int main()
{
int l,k,t;
  printf("Enter the starting interval:");
  scanf("%d",&l);
  printf("Enter the ending intervals:");
  scanf("%d",&t);
for(k=l;k<=t;k++)
if(k%2!=0)
{
printf(" %d",k);
}
return 0;
}

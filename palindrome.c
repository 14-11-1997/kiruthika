#include<stdio.h>
#include<conio.h>
int main()
{
int n,s=0,b,a;
printf("Enter the value");
scanf("%d",&n);
a=n;
while(n!=0)
{
 b=n%10;
 s=s*10+b;
 n=n/10;
}
if(a==s)
{
printf("This is a palindrome");
}
else
{
printf("This is a not palindrome");
}
return 0;
getch();
}


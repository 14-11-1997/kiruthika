#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=0,c;
printf("Enter the value");
scanf("%d",&a);
while(a!=0){
c=a%10;
b=b*10+c;
a/=10;
}
printf("The Reverse Number is %d",b);
return 0;
}

#include <stdio.h>
int main()
{
    int n, r=0,remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = r*10+remainder;
        n /= 10;
    }
       printf("Reversed Number is:%d",r);
       return 0;
}

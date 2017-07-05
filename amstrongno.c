#include <stdio.h>
int main()
{
    int n, o, r, r1 = 0;

    printf("Enter a the integer: ");
    scanf("%d", &n);

    o = n;

    while (o != 0)
    {
        r= o%10;
        r1= r1+r*r*r;
        o/= 10;
    }

    if(r1== n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}

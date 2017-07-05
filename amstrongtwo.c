#include <stdio.h>
int main()
{
    int l,h,i,temp1,temp2,remainder,n=0,r=0;

    printf("Enter two numbers: ");
    scanf("%d %d", &l, &h);
    printf("Armstrong numbers between %d an %d are: ",l,h);

    for(i=l+1;i<h;++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            r+= pow(remainder, n);
            temp2 /= 10;
        }
        if (r== i) {
            printf("%d ", i);
        }
        n = 0;
        r= 0;

    }
    return 0;
}

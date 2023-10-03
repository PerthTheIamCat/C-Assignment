// Lab 06
// 6530300970
// Ex.4
#include <stdio.h>

int a, b, c=1, max, min, count=0, i=2, var;
int main()
{
    printf("inter two integers: ");
    scanf("%d %d",&a, &b);
    if (a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    while (min <= max)
    {
        var = 0;
        i = 2;
        if (min<=1)
        {
            ++min;
            continue;
        }
        while (i <= min/2)
        {
            if (min%i == 0)
            {
                var = 1;
                break;
            }
            ++i;
        }
        if (var == 0)
        {
            ++count;
        }
        ++min;
    }
    if (count>1)
        {
        printf("\nThere are %d prime number between %d and %d\n",count, a, b);
        }
    if (a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    while (min <= max)
{
        var = 0;
        i = 2;
        if (min<=1)
        {
            ++min;
            continue;
        }
        while (i <= min/2)
        {
            if (min%i == 0)
            {
                var = 1;
                break;
            }
            ++i;
        }
        if (var == 0)
        {
            printf("%d ",min);
            if (c <= count-1)
            {
                printf("and ");
                ++c;
            }
        }
        ++min;
    }
    if (c>1)
    {
        printf("are prime numbers.");
    }
    else
    {
        printf("is the only one prime number between %d and %d.\n",a ,b);
    }
    return 0;
}

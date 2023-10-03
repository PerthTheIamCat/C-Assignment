//Lab 04 (19/07/2565)
//Ex 1
//Author 6530300970
#include <stdio.h>
int a, b, c;

void main()
{
    printf("Enter Three interger numbers: ");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a>b && a>c)
        printf("The maximum number is %d",a);
    else if (b>a && b>c)
        printf("The maximum number is %d",b);
    else
        printf("The maximum number is %d",c);

}

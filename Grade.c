#include <stdio.h>
int main()
{
    int a;
    printf("Enter your score: ");
    scanf("%d",&a);
    if (a>=80)
    {
        printf("A");
    }
    else if (a>=70)
    {
        printf("B");
    }
    else if (a>=60)
    {
        printf("C");
    }
    else if (a>=50)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}

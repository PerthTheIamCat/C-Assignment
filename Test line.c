// Lab 06
// 6530300970
// Ex.5
#include <stdio.h>
int a, i ,j;
int main()
{
    printf("Enter an integer number: ");
    scanf("%d",&a);
    for (i=1; i<=a/2; i++)
    {
        if (i%2 == 1)
        {
            for (j=1; j<=a/2; j++)
            {
                printf("O ");
                printf("X ");
            }
            printf("\n");
        }
        if (i%2 == 0)
        {
            for (j=1; j<=a/2; j++)
            {
                printf("X ");
                printf("O ");
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}

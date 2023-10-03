//50_6530300970
//Lab_08
//Ex_01
#include <stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10}, i, j;
    printf("Initializing the array...\n");
    for(i=0;i<=9;i++)
    {
        printf("\nPrint out index %d = %d\n",array[i]-1 ,array[i]);
    }
    printf("\nPrinting out the array...\n");
    for(j=0;j<=9;j++)
    {
        if(j==0)
        {
            printf("[");
        }
        printf("%d, ",array[j]);
        if(j==9)
        {
            printf("\b\b]");
        }
    }
    return 0;
}

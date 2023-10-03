//50_6530300970
//Lab_08
//Ex_05
#include <stdio.h>
int array[100];
int checked_input(int array[], int n)
{
    int input, i, j, ans, index, found = 0;
    printf("\nEnter the number to search: ");
    scanf("%d",&input);
    for (i=0;i<=n;i++)
    {
        if(input == array[i])
        {
            found = 1;
            ans = array[i];
            index = i;
        }
    }
    if (found==1)
    {
        printf("\n%d is found in [",input);
        for(j=0;j<=n-1;j++)
        {
            printf("%d,",array[j]);
        }
        printf("\b] at index %d.",index);
    }
    else
    {
        printf("\nSorry, %d is not in [",input);
        for(j=0;j<=n-1;j++)
        {
            printf("%d,",array[j]);
        }
        printf("\b].");
    }
    return index;
}
int main()
{
    int input, i = 0;
    do{
        printf("Enter an integer (-1 to exit): ");
        scanf("%d",&input);
        if(input!=-1)
        {
            array[i] = input;
            i++;
        }
    }while(input!=-1);
    checked_input(array, i);
    return 0;
}

//50_6530300970
//Lab_08
//Ex_03
#include <stdio.h>
int array[5];
int find_max_num(int array[])
{
    int i, max, index;
    max = array[0];
    for(i=1;i<=5;i++)
    {
        if(max<array[i])
        {
            max = array[i];
            index = i-1;
        }
    }
    printf("\nThe maximum value is %d at index %d\n",max, index);
    return max, index;
}
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        printf("Enter number#%d: ",i);
        scanf("%d",&array[i]);
    }
    find_max_num(array);
    return 0;
}

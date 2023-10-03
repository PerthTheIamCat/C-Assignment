//50_6530300970
//Lab_08
//Ex_02
#include <stdio.h>
int main()
{
    int array[100], count=0, num;
    do{
        printf("Enter a number (-1 to exit): ");
        scanf("%d",&num);
        if (num!=-1)
        {
            array[count] = num;
        }
        count++;
    }while(num!=-1);
    printf("\nThe number of inputs in %d",count-1);
    printf("\nThe numbers in reverse order are ");
    count -= 2;
    while(count>=0)
    {
        if(array[count]!=0)
        {
            printf("%d ",array[count]);
        }
        --count;
    }
    return 0;
}

//50_6530300970
//Lab_08
//Ex_03
#include <stdio.h>
float array[100], sum = 0;

float find_sum(float array[], int n)
{
    int i, j;
    for(i=0;i<=100;i++)
    {
    sum = sum+array[i];
    }
    printf("\nThe summation of [");
    for(i=0;i<=n-2;i++)
    {
        printf("%.2f, ",array[i]);
    }
    printf("\b\b]");
    printf(" is %.2f\n",sum);
    return sum;
}

int main()
{
    int i=0, j;
    float input;
    do{
        printf("Enter a number (-1 to exit): ");
        scanf("%f",&input);
        if(input!=-1)
        {
            array[i] = input;
        }
        i++;
    }while (input!=-1);
    find_sum(array,i);
    return 0;
}

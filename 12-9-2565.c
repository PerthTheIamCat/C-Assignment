#include <stdio.h>
float ArraySum(float data[ ], int size)
{
    int i;
    float sum = 0.0;
    for (i=0; i<size; i++)
    sum += data[i];
    return sum;
}
float ArrayAverage(float data[ ])
{
    float avg;
    avg = ArraySum(data,4)/4;
    return avg;
}
int main()
{
    float myData[4];
    int i,n;
    printf("Enter 4 items:\n");
    for (i=0; i<4; i++)
    {
        printf("Enter item# %d: ",i+1);
        scanf("%f",&myData[i]);
    }
    printf("Average = %.1f \n ",ArrayAverage(myData));
}

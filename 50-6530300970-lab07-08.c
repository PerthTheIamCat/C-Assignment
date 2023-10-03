//50-6530300970
//Lab 07
//Ex 08
#include <stdio.h>
#include <math.h>
float find_distance(int x1,int x2,int y1,int y2)
{
    float distance;
    distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("\nDistance between (%d,%d) and (%d,%d) = %.2f",x1,y1,x2,y2,distance);
    return distance;
}
int main()
{
    int x1,x2,y1,y2;
    printf("Enter x of point 1: ");
    scanf("%d",&x1);
    printf("Enter y of point 1: ");
    scanf("%d",&y1);
    printf("Enter x of point 2: ");
    scanf("%d",&x2);
    printf("Enter y of point 2: ");
    scanf("%d",&y2);
    find_distance(x1,x2,y1,y2);
    return 0;
}

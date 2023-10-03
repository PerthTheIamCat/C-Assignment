//50-6530300970
//Lab 07
//Ex 09
#include <stdio.h>
#include <math.h>
float find_distance(int x1,int x2,int x3,int y1,int y2,int y3)
{
    float A,B,C,s,area;
    A = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    B = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    C = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    s = (A+B+C)/2;
    area = sqrt(s*(s-A)*(s-B)*(s-C));
    printf("\nThe area of a triangle = %.2f",area);
    return area;
}
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter point 1 (x1,y1)\n");
    printf("x: ");
    scanf("%d",&x1);
    printf("y: ");
    scanf("%d",&y1);
    printf("Enter point 2 (x2,y2)\n");
    printf("x: ");
    scanf("%d",&x2);
    printf("y: ");
    scanf("%d",&y2);
    printf("Enter point 3 (x3,y3)\n");
    printf("x: ");
    scanf("%d",&x3);
    printf("y: ");
    scanf("%d",&y3);
    find_distance(x1,x2,x3,y1,y2,y3);
    return 0;
}

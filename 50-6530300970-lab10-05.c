//6530300970-50
//Lab 10
//Ex 05
#include <stdio.h>
#include <math.h>
struct coordinate
{
    int x[2];
    int y[2];
};
void find_distance(struct coordinate point)
{
    printf("Distance between (%d,%d) and (%d,%d) is %.2f ", point.x[0], point.y[0], point.x[1], point.y[1], sqrt(pow(point.x[0]-point.x[1],2)+pow(point.y[0]-point.y[1],2)));
}
int main()
{
    struct coordinate point;
    for(int i=0; i<2; i++)
    {
        printf("Enter %dst coordinate (x y): ",i+1);
        scanf("%d%d",&point.x[i],&point.y[i]);
    }
    find_distance(point);
    return 0;
}

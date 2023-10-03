#include <stdio.h>
#include <math.h>
void cal_x(float a, float b, float c)
{
    float ans;
    ans = (b*-1)+(sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("Output : %.2f",ans);
}

int main()
{
    float a, b, c;
    printf("Input a b c : ");
    scanf("%f %f %f", &a, &b, &c);
    cal_x(a, b, c);
    return 0;
}

#include <stdio.h>
float h,w,r,b ;
float pi = 3.1416;
char All;
int main()
{
    printf("[r] Rectangle");
    printf("\n[c] Circle");
    printf("\n[t] Triangle");
    printf("\n[x] Exit");

    do{
        printf("\n\nselect r/t/c/x :");
        scanf(" %c",&All);

    if(All == 'r'){
        printf("Enter height:");
        scanf("%f",&h);
        printf("Enter width:");
        scanf("%f",&w);
        printf("Area of rectangle is %.2f\n\n",h*w);
    }
    else if (All == 'c'){
        printf("Enter radius:");
        scanf("%f",&r);
        printf("Area of this circle is %.2f\n\n",pi*r*r);
    }
    else if(All == 't'){
        printf("Enter height:");
        scanf("%f",&h);
        printf("Enter base:");
        scanf("%f",&b);
        printf("Area of this triangle %.2f\n\n",0.5*h*b);
    }
    else if (All == 'x'){
        printf("Bye!");
    }
    else{
        printf("\nInvalid command!\n");
    }
    }
    while(All !='x');

    return 0;
}

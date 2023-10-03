#include <stdio.h>
float h,w,r,b ;
float pi = 3.1416;
char input;
int main()
{
    printf("[r] Rectangle\n");
    printf("[c] Circle\n");
    printf("[t] Triangle\n");
    printf("[x] Exit\n");

    do{
        printf("\n\nSelect r/t/c/x :");
        scanf(" %c",&input);

    if(input == 'r'){
        printf("Enter height:");
        scanf("%f",&h);
        printf("Enter width:");
        scanf("%f",&w);
        printf("Area of rectangle is %.2f\n\n",h*w);
    }
    else if (input == 'c'){
        printf("Enter radius:");
        scanf("%f",&r);
        printf("Area of this circle is %.2f\n\n",pi*r*r);
    }
    else if(input == 't'){
        printf("Enter height:");
        scanf("%f",&h);
        printf("Enter base:");
        scanf("%f",&b);
        printf("Area of this triangle %.2f\n\n",0.5*h*b);
    }
    else if (input == 'x'){
        printf("Bye!");
    }
    else{
        printf("\nInvalid command!\n");
    }
    }
    while(input !='x');

return 0;
}

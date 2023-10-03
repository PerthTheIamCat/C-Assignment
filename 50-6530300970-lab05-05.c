#include <stdio.h>
int a,b,i=0,max,min;

int main(){
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    if(min%2 == 0){
        for(i=min;i<=max;i+=2){
            printf(" %d",i);
        }
    }
    else{
        for(i=min+1; i<=max;i+=2){
            printf(" %d",i);

        }
    }
    return 0;
}

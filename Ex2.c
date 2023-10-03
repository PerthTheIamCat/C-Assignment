//Lab 04 (19/07/2565)
//Ex 1
//Author 6530300970
#include <stdio.h>
#include <string.h>
char input[];
char pass[]="B";
int main()
{

    printf("Enter your password: ");
    scanf("%s",input);
    //printf("%s\n",input);
    gets(input);
    if (pass == input)
        printf("Access Granted!\nWelcome to MI6.");
    else
        printf("Access Denied!\nProgram Terminated.");
    return 0;
}

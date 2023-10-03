#include <stdio.h>
char a, b, c;
int con, vowels;

int main()
{
do {
    printf("Input three characters:> ");
    scanf("%c %c %c",&a, &b, &c);
    switch(a){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowels = vowels+1;
        break;
        default:
            con = con+1;
    }
    switch(b){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowels = vowels+1;
        break;
        default:
            con = con+1;
    }
    switch(c){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            vowels = vowels+1;
        break;
        default:
            con = con+1;
    }

    printf("\nThe number of constants :%d",con);
    printf("\nThe number of vowels :%d\n",vowels);
    con *= 0;
    vowels *=0;
}
    while (1);

    return 0;
}

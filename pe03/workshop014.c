#include <stdio.h>
#include <conio.h>

#define op printf("-------------------------------------\n");

void main()
{
    int level;

    op
    printf("        PROGRAM WELCOME SAU\n");
    op
    printf("Input your level :");
    scanf("%d" ,&level);
    op
    switch( level ){
        case 1 :    printf("Welcome Freshy........\n");
                    break;
        case 2 :    printf("Welcome Sophomore........\n");
                    break;
        case 3 :    printf("Welcome Junior........\n");
                    break;
        case 4 :    printf("Welcome Senior........\n");
                    break;
        default :   printf("Oh....no........\n");
    }
    op
}
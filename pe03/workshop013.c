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
    if(level== 1){
        printf("Welcome Freshy........\n");
    }else if(level == 2 ){
        printf("Welcome sophomore........\n");
    }else if(level == 3 ){
        printf("Welcome Junior........\n");
    }else if(level == 4 ){
        printf("Welcome Senior........\n");
    }else{
        printf("Oh....no.......\n");
    }
    op
}
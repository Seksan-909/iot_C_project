#include<stdio.h>
#include<conio.h>

#define Pa printf("================================\n");

void main(){
    float widths,longs,highs;Color_use;

    Pa
    printf("Program Color\n");
    Pa
    printf("Input widths : ");
    scanf("%f",&widths);
    Pa
    printf("Input longs : ");
    scanf("%f",&longs);
    Pa
    printf("Input highs : ");
    scanf("%f",&highs);
    Pa
    Color_use = widths* longs/ 3;
    printf("square area :%.2f\n", Color_use);
    
    Getch();
}
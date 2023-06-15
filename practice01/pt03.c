#include<stdio.h>
#include<conio.h>

#define Pa printf("================================\n");

void main(){
    float widths,longs,highs,color_use;

    Pa
    printf("Program Color\n");
    Pa
    printf("Input widths : ");
    scanf("%f",&widths);
    printf("Input longs : ");
    scanf("%f",&longs);
    printf("Input highs : ");
    scanf("%f",&highs);
    Pa
    color_use = widths * longs/3;
    printf("square area :%.2f\n", color_use);
    Pa


    getch();
}
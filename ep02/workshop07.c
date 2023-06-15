#include<stdio.h>
#include<conio.h>

#define Pa printf("------------------------------\n");
void main(){
    
    float widths, longs, area_square, bases, highs, area_triangle;
    Pa
    printf("Program Ares Shapes\n");
    Pa
    printf("Input widths : ");
    scanf("%f",&widths);
    printf("Input longs : ");
    scanf("%f", &longs);
    Pa
    area_square = widths * longs;
    printf("square area :%.2f\n", area_square);
    Pa

    Pa
    printf("Input bases : ");
    scanf("%f",&bases);
    printf("Input highs : ");
    scanf("%f", &highs);
    Pa
    area_square = bases * highs / 2;
    printf("Triangle area :%.2f\n", area_square);
    Pa


    getch();
}
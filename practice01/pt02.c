#include<stdio.h>
#include<conio.h>

#define Pa printf("========================================\n");

void main(){
    float price_begin, sale;
    char name[50];
    
    Pa
    printf("Enter product name :");
	scanf("%s"    ,&name);
    Pa
	printf("Enter price begin :");
	scanf ("%f"   ,&price_begin);
    Pa
    sale = price_begin - (price_begin * 10/100);
    printf ("Price for sale is  %.2f Bath.\n",sale);
    
    getch();
}
   
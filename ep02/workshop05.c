#include<stdio.h>
#include<conio.h>

#define wow printf("--------------------------------\n");

 void main(){
    float money,money_share ;
    int person ;

   wow
    printf("       Program Money Share \n");
   wow
    printf("Input money : ");
    scanf("%f" , &money );

    printf("Input person: ");
    scanf("%d" , &person);

    wow
    
    money_share = money / person;
    printf("Money share is %.2f Banht",money_share);
   wow
    getch();
 }
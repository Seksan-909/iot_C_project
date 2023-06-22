#include <stdio.h>
#include <conio.h>

    void main(){
        int number;
        printf("Input number:");
        scanf("%d", &number);
        printf("-----------------------------------------------\n");

        switch( number) {
           case 2 :     printf("A...");
                        printf("B...");
                        break;
            case 10 :   printf("C...");
                        break;
            case 99 :   printf("D...");
                        break;
            default :   printf("Wow");
                        printf("Woo");


       }
       printf("IoT...");


    }
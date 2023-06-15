// โจทย์ข้อที่ 1
#include "stdio.h"
#include "conio.h"

#define PA printf("======================================================\n");
void main (){
    float widths,longs,hights,wh_area , wh_areamax,lh_area, lh_areamax,lw_area, lw_areamax ,area_max, color_used;
    int x = 2  ;
    PA
    printf("Input Width:");
    scanf("%f", &widths);
    printf("Input Long:");
    scanf("%f", &longs);
    printf("Input Hight:");
    scanf("%f", &hights);
    wh_area = widths * hights;
    wh_areamax = wh_area * x ;
    lh_area = longs * hights ;
    lh_areamax = lh_area * x ;
    lw_area = longs * widths ;
    lw_areamax = lw_area * x ;
    area_max = wh_areamax + lh_areamax +lw_areamax;
    color_used = area_max / 3 ;
    printf("Color for use is:%.2f\n",color_used);
    PA
    getch();
}
#include"stdio.h"

void main(){
    // ประกาศตัวแปร declaration variavble
    int midtermScore = 50;
    int final_score;
    int total_score;
    double gpa = 3.99;

    final_score = 20;
    total_score = midtermScore + final_score;

    // การแสดงผลคำที่เก็บในตัวแปรต้องเขียนนอก ""
    // แลกตรงคำแหน่งที่จะแสดงให้ formate code %
    printf("Midterm is :%d   \n", midtermScore);
    printf("Final   is :%d   \n", final_score);
    printf("Total   is :%d   \n", total_score);
    printf("My GPA  is :%lf   \n", gpa);
    printf("My GPA  is :%2lf  \n", gpa);
    printf("My GPA  is :%4lf  \n", gpa);
    printf("---------------------------------\n");
    // 50 + 20 =70 ได้เกรด 3.99
    printf("%d + %d = %d ได้เกรด %.2lf\n",midtermScore,final_score, total_score,gpa);

}
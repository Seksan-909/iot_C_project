#include <stdio.h>

int main(){
	char name[50];
	int age;
	double salary;
	
	printf("Enter your name :");
	scanf("%s"    ,&name);
	printf("Enter your age :");
	scanf("%d:",   &age);
	printf("Enter your salary:");
	scanf("%lf",&salary);
	printf("*********************************\n");
	printf("hi...%s",name);
	printf("You are %d years old.\n",age);
	printf("Your salary is %.24f Bath.\n",salary);
	
	
	return 0;
}

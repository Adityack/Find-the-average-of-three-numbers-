#include<stdio.h>
#include<conio.h>

void main()

{ 
    //write a program to find of avg three numbers

float a,b,c,avg; clrscr();

printf ("Enter the 1st integer");

scanf("%f",&a);

printf("Enter the 2nd integer"); scanf("%f",&b);

printf("Enter the 3rd integer");

scanf("%f",&c);

avg=(a+b+c)/3;

printf ("the avg is %f", avg);

getch();
}
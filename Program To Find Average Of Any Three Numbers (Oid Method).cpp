//Program to find average of any three numbers by using statements of "C".

#include<iostream>
#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c,TOT,AVG;
	printf("\n\tEnter First Number.....");
	scanf("%f",& a);
	printf("\tEnter Second Number.....");
	scanf("%f" ,& b);
	printf("\tEnter Third Number.....");
	scanf("%f" ,& c);
	system("CLS");
	TOT = a+b+c;
	AVG = TOT/3;
	printf("\n\tAverage Of Given Three Numbers Is.....%.0f",AVG);
	getch();
}

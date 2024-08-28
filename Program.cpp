/*You may not need to add more header files because most of the header files, that were in my knowledge, have been included*/
//Header Files:-
#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstring>
#include<stdio.h>
#include<cstdio>
#include<stdlib.h>
#include<cstdlib>
#include<math.h>
#include<cmath>
using namespace std;
float average(int a, int b);

int main()
{
	int x,y;
	cout<<"\n \t Enter the value of x..........: ";
	cin>>x;
	cout<<"\n \t Enter the value of y..........: ";
	cin>>y;
	cout<<"\n \t The average of your given two numbers is.........."<<average(x,y);
	getch();
	return 0;
}

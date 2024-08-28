//Program to find average of any three numbers by using statements of "C++".

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,c,TOT,AVG;
	cout<<"\n\t Enter First Number.....";
	cin>>a;
	cout<<"\t Enter Second Number.....";
	cin>>b;
	cout<<"\t Enter Third Number.....";
	cin>>c;
	system("CLS");
	TOT = a+b+c;
	AVG = TOT/3;
	cout<<"\n\t\aAverage Of "<<a<<", "<<b<<" and "<<c<<" Is....."<<AVG;
	getch();
}

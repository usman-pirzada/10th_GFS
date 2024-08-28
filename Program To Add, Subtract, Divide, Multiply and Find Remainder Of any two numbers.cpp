//Program to Add, Subtract, Divide, Multiply and find Remainder of any two numbers.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int main()
{
	int a,b,add,sub,muti,remd;
	float div;
	cout<<"\n\t\t CALCULATOR";
	cout<<"\n\t\t ==========";
	cout<<"\n \t Enter the value of a.....";
	cin>>a;
	cout<<"\t Enter the value of b.....";
	cin>>b;
	system("CLS");
	add=a+b;
	cout<<"\n \t Addition of "<<a<<" and "<<b<<" is...."<<add;
	sub=a-b;
	cout<<"\n \t Subtraction of "<<a<<" and "<<b<<" is...."<<sub;
	div=a/b;
	cout<<"\n \t Division of "<<a<<" and "<<b<<" is...."<<div;
	remd=a%b;
	cout<<"\n \t \aRemainder of Modulus of division of "<<a<<" and "<<b<<" is...."<<remd;
	getch();
	}

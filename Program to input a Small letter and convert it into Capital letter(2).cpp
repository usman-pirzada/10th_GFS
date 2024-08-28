//Program to input a Small letter and convert it into Capital letter.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a;
	int b;
	cout<<"Enter a small character: ";
	cin>>a;
	b=int(a);
	cout<<"\n"<<char(b-32);
 getch();
 return 0;
}

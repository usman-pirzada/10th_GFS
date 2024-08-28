//Program to input any two number digit. If numver is (67, 36, 95) then print "You Won!" otherwise print "Try Again!".
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"\n\tEnter any two digit number.........";
	cin>>a;
	if(a==67 || a==36 || a==95)
		cout<<"\tYow Won!";
	else
		cout<<"\tTry Again!";
 getch();
 return 0;
}

//Program for making "Nested Loop" by using "for" statement.

#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
	int a,b;
	
	for(a=1;a<=5;a++)
	 for(b=1;b<=3;b++)
		cout<<b<<"  "<<char(a)<<"\n";
	return 0;
}

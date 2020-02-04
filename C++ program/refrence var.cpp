#include<iostream.h>
void main()
{
	int x=3;
	int& y=x;
	cout<<x<<" "<<y<<endl;
	y=4;
	cout<<x<<endl;
}

#include<iostream.h>
void main()
{
	int y,x,z,w,a,b,sum;
	cout<<"enter a number=";
	cin>>x;
	if(x>9999)
		cout<<"please enter 4 digit number";
	else
	{
	y=x/1000;
	z=x/100;
	w=x/10;
	a=w*10;
	b=x-a;
	sum=y+b;
	
	cout<<y<<endl;
	cout<<b<<endl<<"sum="<<sum<<endl;
}}
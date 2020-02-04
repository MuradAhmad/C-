#include<iostream.h>
void main()
{
	float package,y,z,a,b;
	 float x;
	cout<<"enter amount=";
	cin>>x;
	a=x/100*15;
	b=x/100*10;
	y=x-a;
	z=x-b;
	package=9999;

	if (package>=5000)
		cout<<"take amount="<<y<<endl;
	else
		cout<<"take amount="<<z<<endl;
}
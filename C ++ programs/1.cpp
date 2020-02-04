#include<iostream.h>
void main()
{
	float x, y;
	cout<<"Please enter first number \t";
	cin>>x;
	cout<<"Please enter second number \t";
	cin>>y;
	cout<<"The Sum of the two numbers gives\t"<<x+y<<endl;
	cout<<"The Difference of the two numbers gives\t"<<x-y<<endl;
	cout<<"The Product of the two numbers gives\t"<<x*y<<endl;
	if (y==0)
	{
		cout<<"Cannot Divide by Zero \n";
	}
	else
	{
		cout<<"The Divisor of the two numbers gives\t"<<x/y<<endl;
	}

}

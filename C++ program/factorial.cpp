///// lab 4 Q 1

#include<iostream.h>
double sum(int,int);
double factorial(int);
void main()
{
	int x,y;
	double z;
	cout<<"enter numbers for factorial";

	z=sum(x,y);
	cout<<"sum:"<<z;
}
double factorial(int a)
{
	double fact=1;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
}
	return fact;
}
double sum(int x,int y)
{
	int s,d;
	cin>>s>>d;
	double add;
	
	x=factorial(s);
	y=factorial(d);
	add=x+y;
	return add;
}


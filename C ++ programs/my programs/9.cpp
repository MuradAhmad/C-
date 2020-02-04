#include<iostream.h>
void main()
{
	int a;
	int x=1;
	cout<<"enter number for factorial=";
	cin>>a;
	if(a<0) cout<<"Math error"<<endl;
	else
	{
	for(int i=1;i<=a;i++)
	{
		x=x*i;
	}
	cout<<x<<endl;
	}
}
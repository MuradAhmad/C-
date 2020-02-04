#include<iostream.h>
void main()
{
	int i,j,a;
	for(i=1;i<=9;i+=2)
	{
		for(j=1;j<=(9-i/2);j++)
		{
			cout<<" ";
	}
		for(a=0;a<i;a++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(i=9;i>=1;i-=2)
	{
		for(j=1;j<=(9-i/2);j++)
		{
			cout<<" ";
	}
		for(a=0;a<i;a++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}}
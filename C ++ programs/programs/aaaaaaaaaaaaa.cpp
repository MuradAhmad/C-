#include<iostream.h>
int fact(int);
void main()
{
	int x,res;
	cout<<"Enter any positive number";
	cin>>x;
	res=fact(x);
	cout<<res;
	cout<<endl;
	
}
///////********function**************
int fact(int x)
{
	if(x==0 || x==1)
		return 1;
	else
	{
		return x*fact(x-1);
	}
}


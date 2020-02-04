#include<iostream.h>
void main()
{
	int n=0;
	cout<<"Enter any Integer: ";
	cin>>n;
	
	for (int i=n;i>=0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		
			for(int k=((2*i)+1);k<=((2*n)+1);k=k++)
			{
		      cout<<"*";
			}
		
	cout<<endl;
	
		}
	
}

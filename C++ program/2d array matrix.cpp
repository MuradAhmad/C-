#include<iostream.h>
void main()
{
	const m=3,n=3;
	int i,j,arr[m][n];
	cout<<"enter values"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{ 
			cin>>arr[i][j];
		}
	}
	cout<<"matrix:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{ 
			cout<<"\t"<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

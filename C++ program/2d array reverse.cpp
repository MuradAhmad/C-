#include<iostream.h>
void main()
{
	const m=3,n=3;
	int i,j,arr2d[m][n];
	cout<<"enter array"<<endl;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			cin>>arr2d[i][j];
		}
		cout<<"array is:"<<endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
		{
			cout<<arr2d[i][j]<<" ";
			
		}
		cout<<endl;
}
			cout<<"reverse"<<endl;
					for(i=0;i<m;i++)
			{
				for(j=m;j>0;j--)
		{
			cout<<arr2d[i][j]<<" ";
			
		}
		cout<<endl;
}
int temp;




}
		
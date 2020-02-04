#include<iostream.h>
void main()
{
	const size=5;
	int arr[size];
	int i,temp;
	cout<<"values"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
		cout<<"reverse"<<endl;
	for(i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-i];
		cout<<arr[i];
		
}
}
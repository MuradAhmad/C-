#include<iostream.h>
void binary(int [],int,int);
void main()
{
	const size=5;
	int arr[size]={1,3,5,7,9};
	int v;
	cout<<"enter a value to search:";
	cin>>v;
     binary(arr,size,v);
}
void binary(int arr[],int size,int v)
{
	int low=0;
	int high=size-1;
	int mid=(low+high)/2;
	int found=0;
	while(high>low && found==0)
	{
		if(arr[mid]>v)
		
			high=mid-1;
		else if(arr[mid]<v)
			low=mid+1;
		else
			cout<<"found";
		found=1;
	}
	if(found==0)
		cout<<"not found";
}
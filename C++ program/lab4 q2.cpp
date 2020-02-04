#include<iostream.h>
int sum(int [],int);
void main()
{
	const size=5;
	int arr[size];

	int z;
	cout<<"enter array elements";
	for (int i=0;i<size;i++)
		cin>>arr[i];
	z=sum(arr,size);
	cout<<"sum:"<<z;
}
int sum(int arr[],int size)
{
	int i,add1=0,add2=0,add;

	for (i=0;i<size;i=i+2)
	{

//	if (arr[i]%2==0)
//	{
	add1=add1+arr[i]*arr[i];
			
//	}
	
//	if (arr[i]%2!=0)
//	{
	}
		for (i=1;i<size;i=i+2)
		{
	add2=add2+arr[i]*arr[i]*arr[i];
	
			
	}
//	}
	 add =add1+add2;

		
	 return add;
}

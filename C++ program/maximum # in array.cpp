#include<iostream.h>
int find_max(int [],int);
void main()
{
	const size=5;
	int arr[size],i;
	cout<<"enter numbers";
	for ( i=0;i<size;i++)
		cin>>arr[i];
	cout<<"array is :";
	for ( i=0;i<size;i++)
		cout<<arr[i]<<"\t";
	int z;
	z=find_max(arr,size);
	cout<<"maximum number is:"<<z;
}
int find_max(int arr[],int size)
{
	int max=arr[0];
	for (int j=0;j<size;j++)
	{
		if (max<arr[j])
			max=arr[j];
	}
	cout<<"index of maximum number is"<<endl;
	return max;
}

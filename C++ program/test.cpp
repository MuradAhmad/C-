#include<iostream>
#include<conio.h>
using namespace std;
int* binary_search(int [],int,int);
void main()
{ 
	const int size=6;
	int v,arr[size]={1,3,4,6,8,9};
	cout<<"enter a number to search:";
	cin>>v;
	int *p=binary_search(arr,size,v);
	cout<<*p;
	
}

int* binary_search(int arr[],int size,int v)
{
	int *p;
	p=&v;
	int i=0,found=0;
	int low=0,high=size-1,mid;
	while(high>low && found==0)
	{
		mid=(low+high)/2;
		if (arr[mid]==v)
		{
			cout<<"found";
		break;
	}
		else if(arr[mid]>v)
		{
			high=mid-1;

		}
		else if(arr[mid]<v)
		{
			low=mid+1;
	
	}
		else 
		
			cout<<"not found";
			
		i++;
		found=1;
		}
	if(found==1){

		cout<<"found:";
		return (p);
	}
	if(found==0)
	{
		cout<<"not found";
		return 0;
	}
}
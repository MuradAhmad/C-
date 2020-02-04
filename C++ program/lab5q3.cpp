
#include<iostream.h>

void main()
{
int i,*a;
int size;
cout<<"Enter array size\n";
cin>>size;
a =new int[size]; 


cout<<"Enter array elements\n";
for(i=1;i<=size;i++)
{
	cin>>a[i];


}
cout<<"Address of a = "<<&a<<endl;
cout<<"\n\nYour Entered values are\n";
for(i=1;i<=size;i++)
{
	cout<<a[i]<<endl;


}
delete[] a;


}

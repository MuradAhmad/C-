#include<iostream.h>

double* max(double*,int);
void main()
{
int size;
cout<<"Enter size of array\n";
cin>>size;
double *arr;
double *b;
arr =new double[size]; 


cout<<"Enter array elements\n";
for(int i=1;i<=size;i++)
{
	cin>>arr[i];


}
b=max(arr,size);

cout<<endl<<endl<<endl<<*b<<endl;

}
double* max(double *arr1,int a)
{
	double max=arr1[0];
	double *temp;

	for(int i=0;i<a;i++)
	{
		
		if(arr1[i]>max)
			max=arr1[i];
	}
	temp=&max;
return temp;
}


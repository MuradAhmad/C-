#include<iostream.h>
void main()
{
	int i=0,sum=0,last=1,next=0,num;
	cout<<"enter number";
	cin>>num;
	while(i<=num)
	{

		cout<<last<<"\t";
		sum=last+next;
		next=last;
		last=sum;
		i++;
		
	 }
}
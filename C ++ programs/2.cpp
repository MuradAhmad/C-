#include<iostream.h>
void main()
{
	int age1,age2, x;
	while (x!=2)
	{
	cout<<"enter age1= \t";
	cin>>age1;
	cout<<"enter age2= \t";
	cin>>age2;
	if (age1==-1 || age2==-1)
	{
		break;
	}
	else if (age1==age2)
	{
		cout<<"Both students have the same age \n";
	}
	else if(age1>age2)
	{
		cout<<"student1 is "<<age1-age2<<" years older to student2\n";
	}
	else
	{ 
		cout<<"student2 is "<<age2-age1<<" years older to student1\n";
	
	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"1. Compare age \t\t";
	cout<<"2. Exit \n";
	cin>>x;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";


	}
}
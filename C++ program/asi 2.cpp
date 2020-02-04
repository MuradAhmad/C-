#include<iostream.h>
void main()
{
	float x,y,a;    // x,y are numbers,and 'a' is used for choice
	char choice;
	cout<<"\t\t\t**CALCULATOR**"<<endl;
	while(choice!='y')
	{
		cout<<"enter ist Number:\t";
		cin>>x;
		cout<<endl;
		cout<<"enter 2nd Number:\t";
		cin>>y;
		cout<<"Enter ur Choice"<<endl;
		cout<<"1.addition\t 2.subtraction\t3.Multiplication\t4.division\t\t";
		cin>>a;
		if (a==1)
		{
			
			cout<<"addition\t"<<(x+y)<<endl;
		}
		else if (a==2)
		{
			
			cout<<"subtraction\t"<<(x-y)<<endl;
		}
		else if (a==3)
		{
			
			cout<<"multiplication\t"<<x*y<<endl;
		}
		else if(a==4)
		{
			if(y==0)
				cout<<"invalid number";
			else
			
			cout<<"division\t"<<(x/y)<<endl;
		}
		else
			cout<<"enter correct choice";
		
		cout<<endl<<" \t\tExit y/n"<<endl;
		cin>>choice;
	}
	}

#include<iostream.h>
void main()
{
	int Age1,Age2,x;
	while(x!=2)
	{
    cout<<"Enter Age1=\t";
	cin>>Age1;
	cout<<"Enter Age2=\t";
	cin>>Age2;
	if(Age1<0 || Age2<0){
		cout<<"Please enter correct age\n";
	}	
	else if(Age1==Age2)
		cout<<"Both students have same age\n";
	else if (Age1>Age2)
	{
		cout<<"\n\n\n";
		cout<<"Age1 student is  "<<Age1-Age2 <<" years older"<<endl;
	}
	else 
	{
		cout<<"Age2 student is "<<Age2-Age1<<" years older"<<endl;

	}
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"Press 1.to compare\t\t";
	cout<<"Press 2.to exit\n";
	cin>>x;
}
}

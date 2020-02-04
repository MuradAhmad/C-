#include<iostream.h>
void main()
{
	float x,y;
	char choice;
	while(choice!='n')
	{
	cout<<"\tEnter point"<<endl;
	cout<<"Enter x-axis\t";
	cin>>x;
	cout<<"Enter y-axis\t";
	cin>>y;
	cout<<"the point "<<"("<<x<<","<<y<<")"<<"lies in the\t";
	if(x>0 && y>0)
		cout<<"1st quadrant";
	else if (x<0 && y>0)
		cout<<"2nd quadrant";
	else if (x>0 && y<0)
		cout<<" 4rth quadrant";
	else 
		cout<<"3rd quadrant";
	cout<<endl<<"Do u want to Continue y/n ?";
	cin>>choice;
}}
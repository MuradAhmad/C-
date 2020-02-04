//counts the number of words user enter.

#include<iostream.h>
void main()
{
	char name[10];
	int count=0;
	cout<<"name:";
	
	cin>>name;
	cout<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<name[i];
		if(name[i]=='\0')
			break;
		count++;
		}
	cout<<endl<<"no of words:"<<count;
}
#include<iostream.h>
void main()
{
	int choice;
    cout<<"1.self confident\n"; 
	cout<<"2.hardwarking\n";
	cout<<"3.smart\n";
	cout<<"please enter the choice";
	cin>>choice;
	switch (choice)
	{
	case 1:
		cout<<"1.self confident\n";
		break ;
	case 2:
		cout<<"2.hardwarking\n";
		break;
	case 3:
		cout<<"3.smart";
		break;
	default:
		cout<<"enter a valid number\n";
	}
}
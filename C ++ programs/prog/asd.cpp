#include<iostream.h>
void main()
{
	float marks;
	int exit,selection;
	cout<<"enter subject no\n";
	cout<<"1 cal\n";
	cout<<"2 phy\n";
	cout<<"3 ict\n";
	cout<<"4 islam\n";
	cout<<"5 elec\n";
	cin>>selection;
	cout<<"enter marks out of 100\n";
	cin>>marks;
	
	
	
	switch(selection)
	{
	case 1:
		cout<<"cal="<<marks<<endl;
		break;
	case 2:
		cout<<"phy="<<marks<<endl;
		break;
		case 3:
		cout<<"ict="<<marks<<endl;
		break;
		case 4:
		cout<<"islam="<<marks<<endl;
		break;
		case 5:
		cout<<"elec="<<marks<<endl;
		break;
		default:
		cout<<"enter corect subject no\n";
	}
	if(marks<=90)
		cout<<"your grade is A \n";
	else if(marks<=80)
			cout<<"your grade is B\n";
	else if(marks<=70)
			cout<<"your grade is C\n";
	else if(marks<=60)
			cout<<"your grade is D\n";
	else if(marks<=50)
		cout<<"u have failed\n";
	
	

}
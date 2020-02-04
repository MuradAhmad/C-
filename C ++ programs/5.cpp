#include<iostream.h>
main()
{
	float marks;
	int selection;

	cout<<"Please select the subject you \nwant to know your Grade for! \n";
	cout<<"1. Physics \n";
	cout<<"2. Calculus \n";
	cout<<"3. Islamiat \n";
	cout<<"4. ICT \n";
	cout<<"5. Communication Skills \n\n";
	cin>>selection;
	cout<<"Please enter marks obtained out of 100 \n";
	cin>>marks;
	switch(selection)
	{
	case 1:
		cout<<"you have selected Physics and \n";
		break;
	case 2:
		cout<<"You have selected Calculus and \n";
		break;
	case 3:
		cout<<"You have selected Islamiat and \n";
		break;
	case 4:
		cout<<"You have selected ICT and \n";
		break;
	case 5:
		cout<<"You have selected Communication Skills and \n";
		break;
	default:
		cout<<"Sorry not a menu item \n";
	}

		if (marks>=40 && marks<50)
		{
			cout<<"You have passed with a D grade \n";
		}
		else if (marks>=50 && marks<60)
		{
			cout<<"You have scored a C grade \n";
		}
		else if (marks>=60 && marks<80)
		{
			cout<<"You have got a B grade \n";
		}
		else if (marks>=80 && marks<=100)
		{
			cout<<"congrats you have scored an A! \n";
		}
		else
		{
			cout<<"Sorry you have failed! \n";
		}
}


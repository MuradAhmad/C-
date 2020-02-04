#include<iostream.h>
void main()
{
	float num1,num2,result;
	int select;
	cout<<"1.addition\n";
	cout<<"2.subtraction\n";
	cout<<"3.multiplication\n";
	cout<<"4.division\n";
	cout<<"select operation\n";
	cin>>select;
	cout<<"enter num1=\t";
	cin>>num1;
	cout<<"enter num2=\t";
	cin>>num2;
	switch(select)
	{
	case 1:
		result=num1+num2;
		cout<<num1<<"+"<<num2<<"="<<result<<endl;
		break;
		case 2:
		result=num1-num2;
		cout<<num1<<"-"<<num2<<"="<<result<<endl;
		break;
		case 3:
		result=num1*num2;
		cout<<num1<<"*"<<num2<<"="<<result<<endl;
		break;
		case 4:
			result=num1/num2;
			if(num2==0)
				cout<<"undefind<<endl";
			else
				cout<<result<<endl;
			break;
	}
}




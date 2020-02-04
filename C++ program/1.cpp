#include<iostream.h>
//using namespace std;
void main()
{
	int number,digit;
	cout<<"please enter the four digit number=\t";
	cin>>number;
	cout<<"U entered"<<number<<endl;
	digit=number%10;
	cout<<"the digit is = "<<digit<<" ";
	number=number/10;
	digit=number%10;

	cout<<digit<<" ";
		number=number/10;
		digit=number%10;
		cout<<digit<<" ";
		number=number/10;
		cout<<number<<endl;

}




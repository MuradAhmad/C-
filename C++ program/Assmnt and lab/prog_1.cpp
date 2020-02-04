#include <iostream>
using namespace std;

void main()

{
	int num;
	cout<<"Enter a number that you want to generate table ";
	cin >>num;
	int a;
	int multiplier=1;

cout<<"your table of "<<num<<" is with 10 coloumns and 20 rows :: "<<endl;
	for(a=1 ; a<=20 ; a++)
		{
			for (int b=1; b<=10; b++)
			{
			
			cout<<num*multiplier<<"\t";
			multiplier++;
			}
			cout<<endl;
			//cout<<"\t";
		}
//	multiplier++;


}
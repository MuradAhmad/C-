#include<iostream.h>
void main()

{ char grade;
  cout<<"enter grade";
  cin>>grade;

switch ( grade)
{
		case 'A' :	cout << " Excellent " ;	
			break;
		case 'B' :	cout << " Very Good " ;
			break;
		case 'C' :  cout << "Good " ;
			break;
		case 'D' :	cout << " Poor " ;
			break;
		case 'F' :	cout << " Fail " ;
			break;
}
}
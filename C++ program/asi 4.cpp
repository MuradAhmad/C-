#include<iostream.h>
void main()
{
	int y=1,num,pow,z=1;
	cout<<"enter base number:";
	cin>>num;
	cout<<"enter power:";
	cin>>pow;
	while(y<=pow)
	{
		z=z*num;
		y++;
		
		}cout<<"the Result is \t"<<z<<endl;
}

/*
#include <iostream.h> 
//using namespace std; 
void main() 
{ 
int number,power,count,i; 

cout << "Enter Number: "; cin >> number; 
cout << "Enter the power: "; cin >> power; 

count = 1; 
for (i=1; i <=power; i++) 
count = count*number; 

cout << count << endl; 

//return 0; 
}
*/


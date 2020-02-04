#include<iostream.h>
#include<fstream.h>
void main()
{
	ifstream asd("m.txt");
	char name[15];
	cout<<"enter name:";
	asd>>name;
	cout<<name;
}

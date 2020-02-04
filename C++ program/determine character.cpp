#include<iostream.h>
#include<ctype.h>

void main()
{ 
	char c;
	
cout << "Please enter a character string then press enter";
cin>>c;
while (c != '\n' )
{
    if ( islower ( c ) )
	{
		cout<<"lower" ;
	break;
}
    else if ( isupper ( c ) )
    {
		cout<<"uper";
	break;
	}
    else if (isdigit ( c ) )
	{
		cout<<"digit";
	break;
	}
    else if ( isspace ( c ) )
	{
		cout<<"space";
	break;
	}
    else if ( ispunct ( c ) )
	{
		cout<<"punctuation";
	break;
	}
    else
    {
		cout<<"other"; 
	break;
	}
} 
} 

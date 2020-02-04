#include<iostream.h>
main ( ) 
{
	int y[2][2]={{1,5},{3,9}};
	
	cout<<*(*(y+1)+2);
}

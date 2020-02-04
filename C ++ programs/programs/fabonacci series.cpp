#include<iostream.h>
int fabo(int);
void main()
{
	int a,j;
	cout<<"first 25 numbers of fabonacci series\n";
	for(j=1;j<=25;j++)
	{
		a=fabo(j);
		cout<<a<<" ";
		
		
	}
	cout<<endl;
}

int fabo(int x)
{
	if(x<=2)
		return 1;
	else
		return fabo(x-2)+fabo(x-1);
}


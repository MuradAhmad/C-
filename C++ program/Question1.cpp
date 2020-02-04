#include <iostream.h>

int main()
{
	int x=0;
	while(x<=100)
	{
		for(int n=1;n<(x/2);n++)
		{
			if(x%n==0 && x!=n)
			{
				cout<<x<<"\t";
				break;
			}
		}
	}
	return 0;
}

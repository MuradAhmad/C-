#include<iostream.h>
void main()
{
	for(int i=0;i<100;i++)
	{
		for (int j=2;j<i/2;j++)
		{
			if (i%j!=0)
				cout<<i<<"\t";

	}
	}
}

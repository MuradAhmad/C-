#include<iostream.h>

void main()
{
cout<<"Non-prime numbers from 0 to 100 are given below:	"<<endl<<endl;
	for(int i=0;i<=100;i++)
	{
		for(int num=2;num<i;num++)
		
			if (i%num==0)
			{
				cout<<i<<"\t";
				break;
			}
			
				
		
	}

	
	
}


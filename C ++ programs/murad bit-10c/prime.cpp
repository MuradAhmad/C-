#include<iostream.h>
main()
{
	int a,b;
	cout<<"Enter number"<<endl;
	cin>>a;
	cout<<"Prime factors are: "<<endl;
	for(int i=2; i<=a; i++)
	{
		b=a%i;
		if(b==0)
		{
			a=a/i;
			cout<<i<<endl;
			i=1;
		}
	}
	return 0;

}

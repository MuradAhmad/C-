#include<iostream.h>
void main()
{
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<"#######";

	
	for(int k=0;k<(20-(2*i));k++)
	{
		cout<<" ";
	}
	cout<<"######";
	cout<<endl;

}
}
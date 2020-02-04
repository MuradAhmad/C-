#include<iostream>
using namespace std;
void reverse(char [],int);
void main()
{
	int i;
	const size=6;
	char a[size];
	
	for(i=0;i<size;i++)
		cin>>a[i];
	for(i=0;i<size;i++)
		cout<<a[i]<<endl;
	reverse(a,size);


}
void reverse(char b[],int c){
	char temp;
	int i,a=6;
	for(i=0;i<c/2;i++)
	{
		temp=b[i];
		b[i]=b[a-1];
		b[a-1]=temp;
		a--;
	}
	for(i=0;i<c;i++)
		cout<<b[i];
}


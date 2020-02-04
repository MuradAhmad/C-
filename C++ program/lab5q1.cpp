#include<iostream.h>
void main()

{
	int x,y,z;
	cout<<"Enter three numbers\n";
	cin>>x>>y>>z;

	int *arr[3];
	arr[0]=&x;
	arr[1]=&y;
	arr[2]=&z;
	

		cout<<"Value of X = "<<*arr[0]<<endl<<endl;
		cout<<"Value of y = "<<*arr[1]<<endl<<endl;
		cout<<"Value of Z = "<<*arr[2]<<endl<<endl;

	
	
		int *ptr;
		int *ptr1;
	ptr=&x;
	ptr1=&y;
	arr[0]=ptr1;
	arr[1]=arr[2];
	arr[2]=ptr;

	cout<<"Value of x after swapping = "<<*arr[0]<<endl;
	cout<<"Value of y after swapping = "<<*arr[1]<<endl;
	cout<<"Value of z after swapping = "<<*arr[2]<<endl;
}


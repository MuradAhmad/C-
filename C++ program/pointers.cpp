

#include <iostream.h>
void main()
{
 const SIZE = 5;
 int i, arr[SIZE] = {98, 87, 92, 79, 85};
 int *ptr;
  ptr=arr;
 //ptr=&arr[2];
 cout<<*(ptr+2)<<endl;
 
 //for(i=0; i<SIZE; i++)
  // cout << arr[i] <<" ="<< *(arr + i)<<"="<<*ptr++<< endl;
  // cout<<*ptr<<endl;
  // ptr++;
//	cout<<*ptr<<endl;
  // ptr+=2;
   //cout<<*ptr<<endl;
   //*ptr+=2;
   //cout<<*ptr<<endl;
}

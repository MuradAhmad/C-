#include<iostream.h>
main()
{
	int x, p, a, b, c ,d, e;
	cout<<"Please enter a five digit number"<<endl;
	cin>>x;
	if(x<10000 || x>99999) cout<<"Sorry, not a five digit number"<<endl;
	else
	{
		a=x/10000;
		//cout<<"a= "<<a<<endl;
		b=x/1000;
		p=a*10;
		b=b-p;
		//cout<<"b= "<<b<<endl;
		c=x/100;
		p=x/1000;
		c=c-(p*10);
		//cout<<"c= "<<c<<endl;
		d=x/10;
		p=x/100;
		d=d-(p*10);
		//cout<<"d= "<<d<<endl;
		p=x/10;
		e=x-(p*10);
		//cout<<"e= "<<e<<endl;
		p=(a*1)+(b*10)+(c*100)+(d*1000)+(e*10000);

		cout<<"You have entered "<<x<<endl;
		cout<<"And the reverse is "<<p<<endl;

		if(p==x) cout<<"And the two numbers are equal"<<endl;
		else cout<<"and the two numbers are different"<<endl;

		}
	return 0;
}
		




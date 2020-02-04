#include<iostream.h>
#include<fstream.h>
#include<cstring>



struct student
{
	char name[15];
	int rol_no;
	char batch[10];
	char disipline[15];
};
struct faculty
{
	char name[15],department[15];
	int id;
};
struct book
{
	char book_name[20];
	int issbn;
};


void studentdata(student);
void facultydata(faculty);


ofstream file;




void main()
{
int count=1;
	student s;
	faculty f;
	int select;
	cout<<"\t\t\t******************"<<endl<<endl;
	cout<<"\t\t\tWELCOME TO LIBRARY"<<endl<<endl;
	cout<<"\t\t\t******************"<<endl<<endl;
	cout<<"\t\t\tPlease select your Account:"<<endl<<endl;
	cout<<"\t1.Student"<<"\t\t 2.Faculty"<<endl<<endl;
	cin>>select;
	/////student account/////////
	while(select==1 && a!='n')
	{
		cout<<"You have selected:"<<endl;
		cout<<"\t\t\tStudent Account:"<<endl<<endl;
		cout<<" if your account exists press (Y),if not then press [N]"<<endl;

		char choice;
		cin>>choice;
		if(choice=='n')
		{
			/////enter new student detail///////////////////
			file.open("student.txt",ios::app);
			cout<<"\t\tplease enter your data"<<endl;
		cout<<"enter data for student:"<<count<<endl;
			studentdata(s);
			file.close();


			


		}

		else if(choice=='y')
		{
			char name[15];
			int p;
			cout<<"\t\tSign in"<<endl<<endl;
			cout<<"please enter user name:";
			cin>>name;
			cout<<"please enter pasward:";
			cin>>p;
			///////////////make a function,pass the pasward
			////////compare it with roll number
			//////////then search in file.


		}
		else 
			cout<<"Wrong choice"<<endl;
	
	
	cout<<"data entered for student:"<<count<<"sucessfully"<<endl;
	cout<<"press 1 to enter next student data or press (2) for other operation"<<endl;
	int op;
	cin>>op;
switch(op)
{
case 1:
	cout<<"press (1) to enter data for next student"<<endl;
	cin>>select;
	break;
case 2:
	cout<<"other operations are:"<<endl;
	cout<<"A. issue a book \t B.return a book "<<endl;
	char ch;
	cin>>ch;
	if(ch=='A')
	{
		////issue book ftn call
	}
	else if(ch=='B')
	{
	////	return book ftn call
	}
default:
	cout<<"invalid choice";
}
cin>>a;	
count++;
}
/////////faculty account



	while(select==2)
	{
		cout<<"You have selected:"<<endl;
		cout<<"\t\tFaculty Account:"<<endl<<endl;
		cout<<" if your account exists press (Y),if not then press [N]"<<endl;
		char choice;
		cin>>choice;
		if(choice=='n')
		{
			/////enter faculty detail///////////////////
			file.open("faculty.txt",ios::app);
			cout<<"\t\tplease enter your data"<<endl;
			facultydata(f);
			file.close();

			


		}
		else if(choice=='y')
		{
			char name[15];
			int p;
			cout<<"\t\tSign in"<<endl<<endl;
			cout<<"please enter user name:";
			cin>>name;
			cout<<"please enter pasward:";
			cin>>p;
			///////////////make a function,pass the pasward
			////////compare it with roll number
			//////////then search in file.


	}
		else 
			cout<<"Wrong choice"<<endl;





cin>>select;
}
}


/////////////////////////student data function   ////////////////////////////////////

void studentdata(student s)
{
	
	char choice;
	while(choice!='n')
	{
	
	
	cout<<"enter student name"<<endl;
	cin>>s.name;
	file<<s.name<<endl;
	cout<<"enter student roll number"<<endl;
	cin>>s.rol_no;
	file<<s.rol_no<<endl;
	cout<<"enter student batch"<<endl;
	cin>>s.batch;
	file<<s.batch<<endl;
	cout<<"enter student disipline"<<endl;
	cin>>s.disipline;
	file<<s.disipline<<endl;
	
	
	cout<<"--------------------------------------------------"<<endl;
	cout<<"would u like to change ur given data? \t(y/n)"<<endl;
	cin>>choice;
}

}

////////////////faculty data function///////////



void facultydata(faculty f)
{
	int count=1;
	char choice;
	while(choice!='n')
	{
	cout<<"enter data for faculty member:"<<count<<endl;
	
	cout<<"enter Teacher name"<<endl;
	cin.getline(f.name,15);
	file<<f.name<<endl;
	cout<<"enter Teacher id number"<<endl;
	cin>>f.id;
	file<<f.id<<endl;
	cout<<"enter Teacher Department"<<endl;
	cin.getline(f.department,15);
	file<<f.department<<endl;
	
	cout<<"data entered for faculty:"<<count<<"sucessfully"<<endl;
	count++;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"would u like to change ur given data? \t(y/n)"<<endl;
	cin>>choice;
}

}

	

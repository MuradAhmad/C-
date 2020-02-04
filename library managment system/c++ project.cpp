
/*
MURAD AHMAD
BIT-10C
REG # 41
*/

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

struct book
{

	char book_name[30];
	char author_name[15];
	double isbn;

};



struct faculty
{
	char name[15],department[15];
	int id;
};



void issue_book1();
void issue_book();
void faculty_record();
void existing_faculty_member();
void student_record();
void existing_student();
void add_new_faculty_member();
void add_new_book();
void add_new_student();


ofstream file;
fstream file1;

    student s;
	book b;
	faculty f;



void main()
{

	int select;
label:	cout<<"\t\t\t******************"<<endl<<endl;
	cout<<"\t\t\tWELCOME TO LIBRARY"<<endl<<endl;
	cout<<"\t\t\t******************"<<endl<<endl;
	cout<<"\t\t\tMAIN MENU"<<endl;
	cout<<"------------------------------------------";
	cout<<"--------------------------------------"<<endl;
	cout<<"\t\t\tSelect 0ne Option"<<endl;
	cout<<"\t\t\t-----------------"<<endl<<endl;
	cout<<"For New Entry Select the following options"<<endl<<endl;
	cout<<"1. Add New Student Record"<<endl<<"2. Add New Faculty Member Record"<<endl
	<<"3. Add New Book"<<endl;
		cout<<"---------------------------------------";
		cout<<"-----------------------------------------"<<endl;
		cout<<"To SIGN IN Select:"<<endl<<endl;
		cout<<"4. Existing Student"<<endl<<"5. Existing Faculty Member"<<endl;
	cin>>select;
 switch(select)
	{
	case 1: 
			add_new_student();
			goto label;
			break;
	case 2:
			add_new_faculty_member();
			goto label;
			break;
	case 3: 
			add_new_book();
			
			goto label;
			break;
	case 4:
			existing_student();
			goto label;
			break;
	case 5:
			existing_faculty_member();
			goto label;
			break;

	default:
		cout<<"Invalid selection"<<endl;
	}
	

}
//////////////////////////////////////////////////////////////////////////////////
//////////FUNCTIONS DEFINITION///////////////////////////////////////////////////


////////////// ADD NEW BOOK//////////////

void add_new_book()
{
	char ch;
	cout<<"Enter New BOOK Detail:"<<endl;
	file.open("book.txt", ios::app);
	cout<<"Enter the name of the book for record:"<<endl;
	cin>>b.book_name;
	file<<b.book_name<<endl;
	cout<<"Enter the name of the author of the book:"<<endl;
	cin>>b.author_name;
	file<<b.author_name<<endl;
	cout<<"enter the ISBN number:"<<endl;
	cin>>b.isbn;
	file<<b.isbn<<endl;
	cout<<"BOOK Detail Entered Sucessfully"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Would You Like To Add Another BOOK (y/n)"<<endl;
	cin>>ch;
	if(ch=='y')
	{
		add_new_book();
	}
	cout<<endl;
		char m;
	cout<<"press (M) to return to Main Menu"<<endl;
	cin>>m;

}



/////enter new student detail///////////////////
			
void add_new_student()
{
cout<<"Enter Information for New Student"<<endl;
file.open("student.txt",ios::app);
	cout<<"Enter Student Name:"<<endl;
	cin>>s.name;
	file<<s.name<<endl;
	cout<<"enter student roll number:"<<endl;
	cin>>s.rol_no;
	file<<s.rol_no<<endl;
	cout<<"enter student batch:"<<endl;
	cin>>s.batch;
	file<<s.batch<<endl;
	cout<<"enter student disipline:"<<endl;
	cin>>s.disipline;
	file<<s.disipline<<endl;
	
		file.close();

	cout<<"Data is entered for new Student sucessfully"<<endl;

	cout<<"--------------------------------------------------"<<endl<<endl;
	cout<<"Do you Want to Issue a Book?(y/n)"<<endl;
	char choice1;
	cin>>choice1;
	if(choice1=='y')
	{
		issue_book();
	}
	char m;
	cout<<"press (M) to return to Main Menu"<<endl;
	cin>>m;
		cout<<endl;	



}
////////New faculty detail/////////////


void add_new_faculty_member()
{

		
	cout<<"Enter data for faculty Member:"<<endl;
	
	file.open("faculty.txt",ios::app);
			
	cout<<"enter Teacher name"<<endl;
	cin>>f.name;
	file<<f.name<<endl;
	cout<<"enter Teacher id number"<<endl;
	cin>>f.id;
	file<<f.id<<endl;
	cout<<"enter Teacher Department"<<endl;
	cin>>f.department;
	file<<f.department<<endl;
	file.close();
	cout<<"Data entered for Faculty Member sucessfully"<<endl;
	
	cout<<"-------------------------------------"<<endl;
	cout<<"Do you Want to issue a book?(y/n)"<<endl;
	char choice2;
	cin>>choice2;
	if(choice2=='y')
	{
		issue_book1();
	}
	char m;
	cout<<"press (M) to return to Main Menu"<<endl;
	cin>>m;
		cout<<endl;	
	
}

/////// existing student ////////////

void existing_student()
{
	char ch;
	int pass;
	char st_name[15];
	cout<<"Enter your login Information"<<endl;
	cout<<"User Name: ";
	cin>>st_name;
	cout<<"Password: ";
	
	file1.open("student.txt",ios::in);
	cin>>pass;
	if(pass==s.rol_no)
	{
		
	student_record();
	
	}
	else
			cout<<"Invaild password"<<endl;
	cout<<"Would you to add  new Book?(y/n)"<<endl;
	cin>>ch;
    if(ch=='y')
	{
		issue_book();
	}
	char m;
	cout<<"press (M) to return to Main Menu"<<endl;
	cin>>m;
	cout<<endl;

	file1.close();
}

///////////// issue Book for student////////////


void issue_book()

{
	char book_name1[30], author_name1[15];
	double isbn1;
	cout<<"Enter Book Name"<<endl;
	cin>>book_name1;
	cout<<"Enter Author Name"<<endl;
	cin>>author_name1;
	cout<<"Enter ISBN no"<<endl;
	
	file1.open("book.txt", ios::in);
	cin>>isbn1;

	if(b.isbn==isbn1)
	{
		file.open("student.txt", ios::app);
		file<<"book name is : "<<book_name1<<"\t Author name is : "<<author_name1<<endl;
		cout<<"book issued successfully"<<endl;
		cout<<"Book Must Be Return Within 15 Days From Now"<<endl;
		file.close();
	}
	else
		cout<<"Book is not found in the record"<<endl;

	

}


/////////student detail out put /////////////////


void student_record()
{
	cout<<"your Information is"<<endl;
	cout<<"Name:"<<s.name<<endl;
	cout<<"Roll number:"<<s.rol_no<<endl;
	cout<<"Batch:"<<s.batch<<endl;
	cout<<"Discipline:"<<s.disipline<<endl;
	file1.open("student.txt", ios::in);

	cout<<"Book:"<<b.book_name<<endl;
	cout<<"Author name:"<<b.author_name<<endl;
	file1.close();
}





//////////////// Existing faculty//////



void existing_faculty_member()
{
	char ch;
	int pass;
	char fa_name[15];
	cout<<"Enter your login Information"<<endl;
	cout<<"User Name: ";
	cin>>fa_name;
	cout<<"Password: ";
	file1.open("faculty.txt",ios::in);
	cin>>pass;
		if(pass==f.id)
		{
			faculty_record();
		}
		else
			cout<<"Invaild password"<<endl;
		cin>>ch;
    if(ch=='y')
	{
		issue_book1();
	}
		file1.close();
		char m;
	cout<<"press (M) to return to Main Menu"<<endl;
	cin>>m;
		cout<<endl;	

}


void faculty_record()
{
	cout<<"your Information is"<<endl;
	cout<<"Name:"<<f.name<<endl;
	cout<<"Id:"<<f.id<<endl;
	cout<<"Department:"<<f.department<<endl;
	file.open("faculty.txt", ios::in);
    cout<<"Book:"<<b.book_name<<endl;
	cout<<"Author name:"<<b.author_name<<endl;
	file.close();
	
	
}


//////////issue book to teachers///////


void issue_book1()

{
	char book_name1[30], author_name1[15];
	double isbn1;
	cout<<"Enter Book Name"<<endl;
	cin>>book_name1;
	cout<<"Enter Author Name"<<endl;
	cin>>author_name1;
	cout<<"Enter ISBN no"<<endl;
	cin>>isbn1;
	if(b.isbn==isbn1)
	{
		file.open("book.txt", ios::in);
		file<<"book name is : "<<book_name1<<"\t Author name is : "<<author_name1<<endl;
		cout<<"book issued successfully"<<endl;
		cout<<"Book Must Be Return Within 15 Days From Now"<<endl;
		file.close();
	}
	else
		cout<<"Book is not found in the record"<<endl;

	

}














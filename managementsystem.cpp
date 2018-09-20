//============================================================================
// Name        : managementsystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

class student
{  public:
	//data members of class student
	string name,branch;
    int year,sem;
    float percentage;

//member function of class student
 void add_data();
 void displaydata();
 void filterdata();

};





	void student:: add_data()
	{

	     //Taking the details from the user
		cout<<"MANAGEMENT SYSTEM";
		cout<<endl;

	   cout<<"FILL OUT THE FOLLOWING DETAILS"<<endl;

		cout<<"Enter the name"<<endl;
		getline(cin,name);
		cout<<"Enter Branch"<<endl;
		getline(cin,branch);
		cout<<"Enter Year"<<endl;
		cin>>year;
		cout<<"Enter semester"<<endl;
		cin>>sem;
		cout<<"Previous Year Score in %";
		cin>>percentage;

	}


	void student::displaydata()
	{
		//Function to display the data

		cout<<"THE STUDENTS RECORD"<<endl;
		cout<<"Record of student"<<name<<endl;
		cout<<"Name="<<name<<endl;
		cout<<"Branch="<<branch<<endl;
		cout<<"Year="<<year<<endl;
		cout<<"Semester="<<sem<<endl;
		cout<<"Percentage="<<percentage<<endl;

	}
	void student::filterdata()
	{
		float percentage_req;
		cout<<"Enter the required percentage";
		cin>>percentage_req;

		//Filtering the data based on the criteria given by the user

		if(percentage>=percentage_req)
		{

			    cout<<"Name="<<name<<endl;
				cout<<"Branch="<<branch<<endl;
				cout<<"Year="<<year<<endl;
				cout<<"Semester="<<sem<<endl;
				cout<<"Percentage="<<percentage<<endl;
		}

	}


	int main()
	{student obj1;
	obj1.add_data();
	obj1.displaydata();
	obj1.filterdata();



		return 0;
	}

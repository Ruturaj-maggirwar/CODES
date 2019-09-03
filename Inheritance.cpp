#include <iostream>
using namespace std;

class personal
{
	int age;
	string height, weight, name;
	char gender;

	public:

	void get()
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter age:";
	cin>>age;
	cout<<"Enter height:";
	cin>>height;
	cout<<"Enter weight:";
	cin>>weight;
	cout<<"Enter gender:";
	cin>>gender;
	cout<<"\n";
}

	void show()
{
	cout<<"Name: "<<name<<"\n";
	cout<<"Age: "<<age<<"\n";
	cout<<"Height: "<<height<<"\n";
	cout<<"Weight: "<<weight<<"\n";
	cout<<"Gender: "<<gender<<"\n";
}

};

	class academic
{
	int percentage;
	int roll;
	string extra;
	string marks;

	public:

	void getdata()
{
	cout<<"Enter the overall percentage:";
	cin>>percentage;
	cout<<"Enter the 12th marks:";
	cin>>marks;
	cout<<"Enter the year roll no:";
	cin>>roll;
	cout<<"Enter the extra curriculum activities:";
	cin>>extra;
	cout<<"\n";
}

	void showdata()
{
	cout<<"Overall percentage: "<<percentage<<"\n";
	cout<<"12th marks: "<<marks<<"\n";
	cout<<"Roll Number: "<<roll<<"\n";
	cout<<"Extra curriculum activities: "<<extra<<"\n";
}


};

	class professional
{
	int salary, experience;
	string job, internship, company_name;

	public:

	void gets()
{
	cout<<"Enter the salary earned:";
	cin>>salary;
	cout<<"Enter the amount of experience in years:";
	cin>>experience;
	cout<<"Enter the job in the company:";
	cin>>job;
	cout<<"Enter the company where the internship took place:";
	cin>>internship;
	cout<<"Enter the name of the company you work for:";
	cin>>company_name;
	cout<<"\n";
}

	void shows()
{
	cout<<"Company name: "<<company_name<<"\n";
	cout<<"Experience: "<<experience<<" years"<<"\n";
	cout<<"Job in the company: "<<job<<"\n";
	cout<<"Salary earned: "<<salary<<"\n";
	cout<<"Place of internship: "<<internship<<"\n";
}


};

	class biodata : public personal, public professional, public academic
{
	public :

};



int main()
{	biodata x;
	x.get();
	x.gets();
	x.getdata();
	int ch;

cout<<"Enter the option you want to choose"<<"\n";
cout<<"Enter 1 to display the personal data"<<"\n";
cout<<"Enter 2 to display the academic data"<<"\n";
cout<<"Enter 3 t display the professional data"<<"\n";
cout<<"Enter 4 to display the entire bio-data"<<"\n";
cin>>ch;

	switch(ch)
{
	case 1:	 x.show();
 	 	 	 break;

	case 2:	 x.showdata();
 	 	 	 break;

	case 3:	 x.shows();
 	 	 	 break;

	case 4:	 x.show();
			 x.shows();
			 x.showdata();
			 break;
		}

	return 0;
}

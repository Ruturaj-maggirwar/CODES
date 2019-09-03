
#include <iostream>
using namespace std;
string str="EXCEPTION";
string str1="EXCEPTION";
string str11="EXCEPTION";
string str111="EXCEPTION";

	class s
{
        int age, income, vehicle;
        string city;

	public:

        int g_age();
        long int g_inc();
        string g_city();
        int g_veh();
};


	int s::g_age()
{
        cout<<"Enter age properly: ";
        cin>>age;
        return age;
}

	long int s::g_inc()
{
        cout<<"Enter income properly: ";
        cin>>income;
        return income;

}
	string s::g_city()
{
        cout<<"Enter city properly: ";
        cin>>city;
        return city;
}

	int s::g_veh()
{
        cout<<"Enter vehicle details properly: ";
        cin>>vehicle;
        return vehicle;
}




	int main(void) {

        s ss;
        int ch=0;
        int b,c,e;
        string d;

do{
        cout<<"Enter 1 to enter age\n";
        cout<<"Enter 2 to enter income\n";
        cout<<"Enter 3 to enter city\n";
        cout<<"Enter 4 to enter vehicle\n";
        cin>>ch;

        switch(ch)
{
        case 1:
        b=ss.g_age();
        try
        {
                if(b<55 && b>18)
                {cout<<"Age Accepted\n ";}
                else throw str;
        }

        catch(string str)
        {
                cout<<"EXCEPTION OCCURED DURING ACCEPTION OF AGE\n";
        }

        break;

        case 2:
        c=ss.g_inc();
        try
        {
                if(c<100000 && c>50000)
                {cout<<"Income  Accepted\n ";}
                else throw str1;
        }

        catch(string str1)
        {
                cout<<"EXCEPTION OCCURED DURING ACCEPTION OF INCOME \n";
        }
        break;

        case 3:
        d=ss.g_city();
        try
        {
                if(d=="pune"||d=="mumbai"||d=="chennai"||d=="bangalore")
                {cout<<"City Accepted\n ";}
                else if(d=="PUNE"||d=="MUMBAI"||d=="CHENNAI"||d=="BANGALORE")
                {cout<<"City Accepted\n ";}
                else throw str11;
        }

        catch(string str11)
        {
                cout<<"EXCEPTION OCCURED DURING ACCEPTION OF CITY\n";
        }
        break;

        case 4:
        e=ss.g_veh();
        try
        {
                if(e==4 || e==2)
                {cout<<"VEHICLE Details  Accepted\n ";}
                else throw str111;
        }

        catch(string str111)
        {
                cout<<"EXCEPTION OCCURED DURING ACCEPTION OF VEHICLE DETAILS\n";
        }
        break;

        default: ch=0;
                                break;


        }}

while(ch!=0);


}

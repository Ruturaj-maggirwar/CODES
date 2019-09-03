#include <iostream>
using namespace std;

class complex
{
int real, imag;

public:	void get()
{	cout<<"Enter the real part";
cin>> real;
cout<<"Enter the imaginary part";
cin>> imag;	}

complex operator + (complex a)
{	complex z;
z.real= a.real + real;
z.imag= a.imag + imag;
return z; }

void show()
{	cout<<"\n";
cout<<"Real part is = "<<real<<endl;
cout<<"Imaginary part is = "<<imag;}
};

int main()
{
complex c1,c2,c3;
c1.get();
c2.get();
c3=c1+c2;
c3.show();
return 0;
}

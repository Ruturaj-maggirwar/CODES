#include <iostream>
using namespace std;

class calculator
{
    float a,b,c;
    public:

    void get()
    {cout<<"Enter the 2 numbers on which you want to perform your calculations: \n";
     cin>>a>>b;}

    void add()
    {
        c=a+b;
        cout<<c;
    }

    void sub()
    {
        c=a-b;
        cout<<c;
    }

    void multi()
    {
        c=a*b;
        cout<<c;
    }

    void div()
    {
        c=a/b;
        cout<<c;
    }

};


int main()
{
    calculator x;
    x.get();
    int ch;

    cout<<"\n 1.Add ";
    cout<<"\n 2.Subtract ";
    cout<<"\n 3.Multiply";
    cout<<"\n 4.Divide";
    cout<<"Enter the number you want to select \n";
    cin>>ch;

    switch(ch)
    {
        case 1:
                x.add();
                break;
        case 2:
                x.sub();
                break;
        case 3:
                x.multi();
                break;
        case 4:
                x.div();
                break;
    }

    return 0;
}

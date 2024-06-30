#include<iostream>

using namespace std;

struct Complex{
    double a,b;
};

Complex add_complex(Complex,Complex);

void display_complex(Complex);

int main()
{
    Complex c1,c2,c;
    cout<<"Enter first complex number a+ib"<<endl<<"a:";
    cin>>c1.a;
    cout<<"b:";
    cin>>c1.b;
    cout<<endl<<endl<<"Enter second complex number a+ib"<<endl<<"a:";
    cin>>c2.a;
    cout<<"b:";
    cin>>c2.b;
    c=add_complex(c1,c2);
    cout<<endl<<endl<<endl<<"Sum is:";
    display_complex(c);
    return 0;
}
Complex add_complex(Complex x, Complex y)
{
    Complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
void display_complex(Complex c)
{
    cout<<c.a<<" + i"<<c.b;
}
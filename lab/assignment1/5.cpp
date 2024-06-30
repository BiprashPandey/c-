#include<iostream>
using namespace std;
double perimeter(double);
double perimeter(double,double);
double perimeter(double,double,double);
int main()
{
    cout<<"Perimeter of circle with radius=2 : "<<perimeter(2)<<endl;
    cout<<"Perimeter of rectangle with length=2 and breadth=4 : "<<perimeter(2,4)<<endl;
    cout<<"Perimeter of triangle with sides 2,3,4 : "<<perimeter(2,3,4);
    return 0;
}
double perimeter(double r)  
{   if(r<0)
    r=-r;
    return 2*3.14*r;
}
double perimeter(double l, double b)
{
    if(l<0)
    l=-l;
    if(b<0)
    b=-b;
    return 2*(l+b);
}
double perimeter(double a, double b, double c)
{ 
    if(a<0)
    a=-a;
    if(b<0)
    b=-b;
    if(c<0)
    c=-c;
    return a+b+c;
}
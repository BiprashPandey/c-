#include<iostream>
using namespace std;
int square(int);
float square(float);
double square(double);
int main()
{
    cout<<"Square of 3 is : "<<square(3)<<endl;
    cout<<"Square of 3.3 is : "<<square(3.3f)<<endl;
    cout<<"Square of 3.3333 is : "<<square(3.3333);
    return 0;
}
int square(int x)   {   return x*x; }
float square(float x)   {   return x*x; }
double square(double x) {   return x*x; }
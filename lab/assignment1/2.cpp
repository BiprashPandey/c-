#include<iostream>
using namespace std;
inline void BMI(float,float);
int main()
{
    double wt,ht;
    cout<<"Enter wt:";
    cin>>wt;
    cout<<"Enter ht:";
    cin>>ht;
    BMI(wt,ht);
    return 0;
}
void BMI(float weight, float height)
{
    cout<<"Your BMI(Body Mass Index is:)"<<weight/(height*height);
}
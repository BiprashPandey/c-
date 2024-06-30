#include<iostream>

using namespace std;

double primarySchoolTotalMonthlyFee(double, double=3000, double=3000);
double secondarySchoolTotalMonthlyFee(double, double=3000, double=3000);
double highSchoolTotalMonthlyFee(double, double=3000, double=0);

int main()

{
    double primarySchoolTutuionFee=5000;
    double secondarySchoolTutuionFee=8000;
    double highSchoolTutuionFee=10000;

    double primarySchoolTransportationFee=2000;
    double secondarySchoolTransportationFee=3000;
    double highSchoolTransportationFee=3000;

    double primarySchoolLunchFee=3000;
    double secondarySchoolLunchFee=3000;

    cout<<"Total monthly Fee of Primary school: "<<primarySchoolTotalMonthlyFee(primarySchoolTutuionFee,primarySchoolTransportationFee,primarySchoolLunchFee)<<endl;
    cout<<"Total monthly Fee of secondary school: "<<secondarySchoolTotalMonthlyFee(secondarySchoolTutuionFee,secondarySchoolTransportationFee,secondarySchoolLunchFee)<<endl;
    cout<<"Total monthly Fee of high school: "<<highSchoolTotalMonthlyFee(highSchoolTutuionFee,highSchoolTransportationFee)<<endl;

    return 0; 
}

double primarySchoolTotalMonthlyFee(double primarySchoolTutuionFee, double primarySchoolTransportationFee, double primarySchoolLunchFee)
{
    return primarySchoolTutuionFee+primarySchoolTransportationFee+primarySchoolLunchFee;
}
double secondarySchoolTotalMonthlyFee(double secondarySchoolTutuionFee, double secondarySchoolTransportationFee, double secondarySchoolLunchFee)
{
    return secondarySchoolTutuionFee+secondarySchoolTransportationFee+secondarySchoolLunchFee;
}
double highSchoolTotalMonthlyFee(double highSchoolTutuionFee, double highSchoolTransportationFee, double highSchoolLunchFee)
{
    return highSchoolTutuionFee+highSchoolTransportationFee+highSchoolLunchFee;
}
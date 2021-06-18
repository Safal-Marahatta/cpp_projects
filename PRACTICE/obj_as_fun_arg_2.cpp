//create a class called time with data member hr,min and sec.wap to add two time object
#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    void input()
    {
        cout<<"enter hour minute and second"<<endl;
        cin<<hr<<min<<sec;

    }
    void calculate(time t1,time t2)
    {
        hr=t1.sec/3600+t2.sec/3600+t1.min/60+t2.min/60+t1.hr+t2.hr;
        min=
    }

}
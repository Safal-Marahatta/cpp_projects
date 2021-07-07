//write operator functions as member function of a class to overload arithemetic operator "+",
//logical operator"<=" and stream operator "<<" to operate on the objects of user defined type
//time(hr,min,sec).
#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    void getdata()
    {
        cout<<"enter the hr min and sec"<<endl;
        cin>>hr>>min>>sec;
    }
    time operator +(time t)
    {
        time temp;//temporary object
        temp.sec=sec+t.sec;
        temp.min=min+t.min+temp.sec/60;
        temp.hr=hr+t.hr+temp.min/60;
        temp.sec=temp.sec%60;
        temp.min=temp.min%60;
    }
    int operator <=(time t)
    {
        if(hr>t.hr)
        {
            return 1;
        }
        else if(min>t.min)
        {
            return 1;
        }
        else if(sec>t.sec)
        {
            return 1;
        }
        else if(hr==t.hr&&min==t.min&&sec==t.sec)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
    void operator <<()
    {

    }
};


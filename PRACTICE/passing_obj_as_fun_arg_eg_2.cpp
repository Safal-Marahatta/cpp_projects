//create a class called time with data member hr,min and sec. WAP to add
//two time objects
#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    void input()
    {
        cout<<"enter the hour ,min and sec "<<endl;
        cin>>hr>>min>>sec;

    }
    void add(time t1,time t2)
    {
        sec=(t1.sec+t2.sec)%60;
        min=(t1.min+t2.min+(t1.sec+t2.sec)/60)%60;
        hr=t1.hr+t2.hr+(t1.min+t2.min)/60;


    }
    void display()
    {
        cout<<"hour="<<hr<<endl<<"minute="<<min<<endl<<"sec="<<sec<<endl;


    }
    
};
int main()
{
    time t1,t2,t3;
    t1.input();
    t2.input();
    t3.add(t1,t2);
    t3.display();
    return 0;
}
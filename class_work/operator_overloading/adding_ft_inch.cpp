//wap to add two distance object by overloading binary + operator
#include<iostream>
using namespace std;
class distance1
{
    private:
    int ft,inch;
    public:
    distance1()
    {
        ft=0;
        inch=0;
    }
    void input()
    {
        cout<<"enter the value of feet and inch"<<endl;
        cin>>ft>>inch;
    }
    distance1 operator +(distance1 d2)
    {
        distance1 d3;
        d3.inch=inch+d2.inch;
        d3.ft=ft+d2.ft+d3.inch/12;
        d3.inch=d3.inch%12;
        return d3;
    }
    void display()
    {
        cout<<"feet="<<ft<<endl<<"inch="<<inch<<endl;
    }
};
int main()
{
    distance1 d1,d2,d3;
    d1.input();
    d2.input();
    d3=d1+d2;
    d3.display();
    return 0;
}


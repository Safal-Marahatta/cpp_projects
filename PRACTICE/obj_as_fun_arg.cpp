//create a class called distance with data member feet and inch.Wap to add two distance and display result
#include<iostream>
using namespace std;
class distance1
{
    private:
    int feet,inch;
    public:
    void input()
    {
        cout<<"enter the feet and inch"<<endl;
        cin>>feet>>inch;

    }
    void add(distance1 d1,distance1 d2)
    {
        inch=d1.inch+d2.inch;
        feet=d1.feet+d2.feet+inch/12;
        inch=inch%12;

    }
    void display()
    {
        cout<<"inch="<<inch<<endl<<"feet="<<feet<<endl;
    }
};
int main(){
    distance1 d1,d2,d3;
    d1.input();
    d2.input();
    d3.add(d1,d2);//passing object as function argument
    d3.display();
    return 0;
}

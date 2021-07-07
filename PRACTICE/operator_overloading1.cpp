//wap to add a data member of two different objects by operator overloading
#include<iostream>
#include<conio.h>
using namespace std;
class test
{
    private:
    int count;
    public:
    void input()
    {
        cout<<"enter the value of count"<<endl;
        cin>>count;
    }
    test operator+(test t)//binary operator overloading function
    {
        test t1;//temporary object
        t1.count=count+t.count;//count is implicit value whereas t.count is
        //explicit value
        return (t1);
    }
    void display()
    {
        cout<<"the value of count is"<<count<<endl;
    }
};
int main()
{
    test t1,t2,t3;
    t1.input();
    t2.input();
    t3=t1.operator+(t2);//t3=t1+t2
    //binary operator overloading call
    t3.display();
    getch();
    return 0;
}
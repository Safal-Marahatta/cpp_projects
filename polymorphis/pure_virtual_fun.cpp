#include<iostream>
using namespace std;
class shape
{
    protected:
    int length,breadth,a;
    public:
    void getdata(int a,int b)
    {
        length=a;
        breadth=b;
    }
    virtual void area()=0;//pure virtual function
    void display()
    {
        cout<<"the area is"<<a<<endl;
    }
};
class rectangle:public shape
{
    public:
    void area()
    {
        a=length*breadth;
    }
};
class square:public shape
{
    public:
    void area()
    {
        a=length*length;
    }
};
int main()
{
    shape *s1,*r1;
    square s;
    rectangle r;
    s1=&s;
    r1=&r;
    s1->getdata(1,1);
    r1->getdata(3,4);
    s1->area();
    r1->area();
    s1->display();
    r1->display();
    return 0;


}
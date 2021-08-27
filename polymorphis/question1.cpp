//write a program having polygon as an abstract class with length and height as its 
//data member. Create derived class rectangle and triangle.make area() as a pure
//virtual function and redefined it in derived class to calculate respetive area.
#include<iostream>
using namespace std;
class polygon
{
    protected:
    int length,height,ar;
    public:
    void getdata(int a,int b)
    {
        length=a;
        height=b;
    }
    virtual void area()=0;//pure virtual function
    void display()
    {
        cout<<"the area is"<<ar<<endl;
    }
};
class rectangle:public polygon
{
    public:
    void area()
    {
        ar=length*height;
    }
};
class triangle:public polygon
{
    public:
    void area()
    {
        ar=(length*height)/2;
    }
};
int main()
{
    polygon *p1,*p2;
    rectangle r1;
    triangle t1;
    p1=&r1;
    p2=&t1;
    p1->getdata(3,4);
    p2->getdata(3,4);
    p1->area();
    p2->area();
    p1->display();
    p2->display();
    return 0;
}
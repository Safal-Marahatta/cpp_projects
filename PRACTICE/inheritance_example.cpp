#include<iostream>
using namespace std;
class rectangle
{
    protected:
    int l,b;
    public:
    void input()
    {
        cout<<"enter the value of length and breadth"<<endl;
        cin>>l>>b;
    }
};
class areaperi:public rectangle//derived class
{
    private:
    int a,p;
    public:
    void calc_ap()
    {
        a=l*b;
        p=2*(l+b);
    }
    void display()
    {
        cout<<"the area of rectangle ="<<a<<endl<<"the perimeter of rectangle="<<p<<endl;
    }
} ;
int main()
{
    areaperi a1;
    a1.input();
    a1.calc_ap();
    a1.display();
    return 0;
}
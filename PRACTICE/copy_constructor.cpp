//copy constructor example
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(int k)
    {
        a=k;
    }
    complex()
    {
        a=0;
        b=0;
    }
    complex(complex &c)
    {
        a=c.a;
        b=c.b;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    complex c1(3,4),c2,c3(5);
    complex c4(c1);
    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}
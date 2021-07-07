//wap to overload greater than or equals to(>=) by using the concept of operator
//overloading 
#include<iostream>
using namespace std;
class compare
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    int operator >=(compare c)//relational operator overloading function
    {
        if(a>c.a || a==c.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        cout<<"the value is"<<a<<endl;
    }
} ;
int main()
{
    compare c1,c2;
    c1.input();
    c2.input();
    if(c1>=c2)//relational operator call
    {
        cout<<"c1 is greater or equals to c2"<<endl;
    }
    else
    {
        cout<<"c2 is greater "<<endl;
        c2.display();
    }
    return 0;
}
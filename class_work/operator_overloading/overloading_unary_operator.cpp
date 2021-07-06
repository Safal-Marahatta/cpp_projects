//overloading pre unary operator that returns value
#include<iostream>
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
    test operator ++()
    {
        test t1;
        t1.count=count+1;
        return t1;
    }
    void display()
    {
        cout<<"the value of count is"<<count<<endl;
    }
};
int main()
{
    test t;
    t.input();
    t=++t;
    t.display();
    return 0;
}
#include<iostream>
using namespace std;
class parent
{
    public:
    virtual void show()//binding of function is done at runtime so that the type of
    //data pointed by base type pointer is knowm.
    {
        cout<<"this is parent class"<<endl;
    }
};
class child:public parent
{
    public:
    void show()
    {
        cout<<"this is child class"<<endl;
    }
};
int main()
{
    parent *ptr;
    child c1;
    ptr=&c1;
    ptr->show();
    return 0;
}

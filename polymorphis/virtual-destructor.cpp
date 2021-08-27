#include<iostream>
using namespace std;
class vechile
{
    public:
    vechile()
    {
        cout<<"constructor of vechile invoked"<<endl;
    }
    
    virtual ~vechile()
    {
        cout<<"destructor of vechile invoked"<<endl;
    }
};
class car:public vechile
{
    public:
    car()
    {
        cout<<"constructor of car invoked"<<endl;
    }
    
    ~car()
    {
        cout<<"destructor of car invoked"<<endl;
    }
};
int main()
{
    vechile *vp;
    vp=new vechile;
    
    delete vp;
    vp=new car;
    
    delete vp;
    return 0;
}
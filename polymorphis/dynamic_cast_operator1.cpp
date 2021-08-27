#include<iostream>
using namespace std;
class animal
{
   
    public:
    virtual void display()
    {
        cout<<"i am a animal"<<endl;
    }
};
class cow:public animal
{
    public:
    void display()
    {
        cout<<"i am a cow"<<endl;
    }
};
int main()
{
    animal *pa,a1;
    cow c1,*pc;
    pa=&a1;//base pointer points to derived object
    pc=dynamic_cast<cow*>(pa);//converting base type pointer to derived type
    if (pc)
    {
        cout<<"cast succeded"<<endl;
    }
    else
    {
        cout<<"cast failed"<<endl;
    }
    pc->display();
    pa->display();
    return 0;
}
//create a class called employee with data member name, post, salary, and id. Wap to scan and display the details of 10 employee
#include<iostream>
using namespace std;
class employee
{
    private:
    char name[20],post[20];
    int salary,id;
    public:
    void input()
    {
        cout<<"enter the name, post, salary and id"<<endl;
        cin>>name>>post>>salary>>id;

    }
    void display()
    {
        cout<<"name="<<name<<endl<<"post="<<post<<endl<<"salary="<<salary<<endl<<"id="<<id<<endl;

    }

};
int main()
{
    employee e[4];
    int i;
    for(i=0;i<4;i++)
    {
        e[i].input();
    }
    for(i=0;i<4;i++)
    {
        e[i].display();
    }
    return (0);
}
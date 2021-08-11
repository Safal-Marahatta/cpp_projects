#include<iostream>
using namespace std;
class staff
{
    protected:
    int code;
    char name[20];
    public:
    void input()
    {
        cout<<"enter the name and code of the staff"<<endl;
        cin>>code>>name;
    }
    void display()
    {
        cout<<"code="<<code<<endl<<"name="<<name<<endl;
    }
};
class teacher:public staff
{
    private:
    char subject[20];
    char publication[20];
    public:
    void input()
    {
        staff::input();
        cout<<"enter the subject and publication"<<endl;
        cin>>subject>>publication;
    }
    void display()
    {
        staff::display();
        cout<<"subject ="<<subject<<endl<<"publication="<<publication<<endl;
    }
};
class officer:public staff
{
    protected:
    int grade;
    public:
    void input()
    {
        staff::input();
        cout<<"enter the grade"<<grade<<endl;
    }
    void display()
    {
        staff::display();
        cout<"the grade of officer is"<<grade<<endl;
    }
};
class typist:public staff
{
    protected:
    int speed;
    public:
    void input()
    {
        staff::input();
        cout<<"enter the speed"<<endl;
        cin>>speed;
    }
    void display()
    {
        staff::display();
        cout<<"the speed is"<<speed<<endl;
    }
};
class causual
{
    protected:
    int daily;
    int wages;
    public()
    void input()
    {
        typist::input();
        cout<<"enter the no of hour the work is done daily and monthly waige"<<endl;
        cin>>daily>>wages;
     }
     void display()
     {
         typist::display();
         cout<<"the no of hour the work is done="<<daily<<endl<<"monthly waige="<<waiges;
     }
};
class regular:public typist
{

};
int main()
{
    
}
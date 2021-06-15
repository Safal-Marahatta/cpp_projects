//WAP to define a class in C++ as shown : class name - 
//Student attributes - name, roll, address, percentage 
//methods - input(), display()
#include<iostream>
using namespace std;
class student
{
    private:
    char name[20],address[20];
    int roll,percentage;
    public:
    void input()
    {
        cout<<"enter name,roll,address and percentage"<<endl;
        cin>>name>>roll>>address>>percentage;


    }
    void display()
    {
        cout<<"name="<<name<<endl<<"roll="<<roll<<endl<<"address="<<address<<endl<<"percentage="<<percentage<<endl;

    }
    void result()
    {
        if(percentage>40)
        {
            cout<<"student is passed"<<endl;
        }
        else
        {
            cout<<"failed"<<endl;
        }
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    s1.result();
    return 0;
}
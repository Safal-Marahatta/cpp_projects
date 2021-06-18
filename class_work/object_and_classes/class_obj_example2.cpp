//details of students
#include<iostream>
using namespace std;
class student
{
    private:
      char name[20],add[20],fac[20];

    public:
      void input()
      {
          cout<<"enter the name , adress and faculty of student"<<endl;
          cin>>name>>add>>fac;
      }
      void display()
      {
          cout<<"name="<<name<<endl<<"adress="<<add<<endl<<"faculty="<<fac<<endl;
      }
};
int main()
{
    student s1,s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    return 0;

}
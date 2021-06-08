// Q. Write a program in C++ to read the record of a student (name, address, roll) and display them using structure
#include<iostream>
using namespace std;
struct student
{
   string name;
   string address;
   int roll; 
};
int main()
{
    student s1;
    cout<<"enter the name of student"<<endl;
    cin>>s1.name;
    cout<<"enter the address"<<endl;
    cin>>s1.address;
    cout<<"enter the roll no"<<endl;
    cin>>s1.roll;
    cout<<"name is "<<s1.name<<endl;
    cout<<"adress is "<<s1.address<<endl;
    cout<<"roll is "<<s1.roll<<endl;
    return 0;

}
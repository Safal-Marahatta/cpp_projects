// Q. Write a program to read the record of 3 students(name, address and roll) and display the record using structure in C++// Q. Write a program in C++ to read the record of a student (name, address, roll) and display them using structure
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
    student s1[3];
    for(int i=0;i<3;i++)
    {
    cout<<"enter the name of student"<<endl;
    cin>>s1[i].name;
    cout<<"enter the address"<<endl;
    cin>>s1[i].address;
    cout<<"enter the roll no"<<endl;
    cin>>s1[i].roll;
    }
    for(int i=0;i<3;i++)
    {
    cout<<"name is "<<s1[i].name<<endl;
    cout<<"adress is "<<s1[i].address<<endl;
    cout<<"roll is "<<s1[i].roll<<endl;
    }
    return 0;

}
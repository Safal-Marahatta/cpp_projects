#include<iostream>
using namespace std;
void print(int data)
{
    cout<<"the data is "<<data<<endl;
}
template<class temp>
void show(temp d)
{
    cout<<"the data is"<<d<<endl;
}
int main()
{
    print(10);
    show(5.5);
    return 0;
}
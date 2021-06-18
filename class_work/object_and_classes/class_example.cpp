#include<iostream>
using namespace std;
class room
{
    public:
    int height,length,breadth;
    void getdata()
    {
        cout<<"enter the length, breadth and height"<<endl;
        cin>>length>>breadth>>height;

    }
    void showdata()
    {
        cout<<"length="<<length<<endl<<"breadth="<<breadth<<endl<<"height="<<height<<endl;

    }
};
 int main()
    {
        room r1,r2;
        r1.height=5;
        r1.length=10;
        r1.breadth=6;
        r2.getdata();
        r1.showdata();
        r2.showdata();
        return 0;

    }
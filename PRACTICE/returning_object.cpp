//create a class called distance with datamember cm,m and km.Wap to add two distance
//object and display the result in main()
#include<iostream>
using namespace std;
class dist
{
    private:
    int cm,m,km;
    public:
   /* dist()
    {
        km=3;
        m=500;
        cm=20;

    }*/
    void input()
    {
        cout<<"enter the kilometer meter and cm"<<endl;
        cin>>km>>m>>cm;
    }
    dist calculate(dist d1,dist d2)
    {
        dist temp;
        temp.cm=d1.cm+d2.cm;
        temp.m=d1.m+d2.m+(temp.cm)/100;
        temp.km=d1.km+d2.km+(temp.m)/1000;
        temp.m=temp.m%1000;
        temp.cm=temp.cm%100;
        return (temp);

    }
    void display()
    {
        cout<<"kilometer="<<km<<endl<<"meter="<<m<<endl<<"cm="<<cm<<endl;
    }

};
int main()
{
    dist d1,d2,d3;
    d1.input();
    d2.input();
    d3=d3.calculate(d1,d2);
    d3.display();
}
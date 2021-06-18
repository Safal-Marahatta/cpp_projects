//create a class called distance with datamember cm,m and km.Wap to add two distance
//object and display the result in main() using concept of passing obj by ref

#include<iostream>
using namespace std;
class dist
{
    private:
    int cm,m,km;
    public:
    void input()
    {
        cout<<"enter the kilometer meter and cm"<<endl;
        cin>>km>>m>>cm;
    }
    void calculate(dist d3,dist d4,dist &d5)
    {
        
        d5.cm=d3.cm+d4.cm;
        d5.m=d3.m+d4.m+(d5.cm)/100;
        d5.km=d3.km+d4.km+(d5.m)/1000;
        d5.m=d5.m%1000;
        d5.cm=d5.cm%100;

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
    d3.calculate(d1,d2,d3);
    d3.display();
}
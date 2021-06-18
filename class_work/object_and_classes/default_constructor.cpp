#include<iostream>
using namespace std;
class construct
{
    private:
    int x,y;
    public:
    construct()
    {
        x=10;
        y=20;
    }
    void display()
    {
        cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    }

};
int main()
{
    construct t;//constructor are automatically called when obj is declared
    t.display();
    return 0;
}
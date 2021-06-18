//create a class mdistance to store the values in meter and centimeter and class
//edistance to store values in feet and inches. Perform addition of object of 
//mdistance and object of edistance by using friend function
#include<iostream>
using namespace std;
class edistance;//forward declaration
class mdistance
{
    private:
    float meter,cm;
    public:
    void input()
    {
        cout<<"enter meter and cm"<<endl;
        cin>>meter>>cm;
    }
    friend void add(mdistance a,mdistance b,edistance b);
};
class edistance
{
    private:
    float feet;
    float inch;
    public:
    void input()
    {
        cout<<"enter the feet and inch"<<endl;
        cin>>feet>>inch;
    }
    friend void add(mdistance a,mdistance b,edistance b);

};
void add(mdistance a,mdistance b,edistance b)
{
    



}

//2. WAP to create sample class with 2 float data members and member 
//functions void getdata() to input the values and one friend function
//float mean(sample) to calculate and return mean value.
#include<iostream>
using namespace std;
class sample
{
    private:
    float d1,d2;
    public:
    void getdata()
    {
        cout<<"enter two float data"<<endl;
        cin>>d1>>d2;
    }
    friend float mean(sample s);//declaration of friend function 
    //declaration can be done in private as well as public part of class
    void showdata(float me)
    {
        cout<<"data1="<<d1<<endl<<"data2="<<d2<<endl;
        cout<<"mean="<<me<<endl;
    }
};
float mean(sample s)//defination of friend function
//defination can be done in any part of the program
{
    float me=(s.d1+s.d2)/2;
   return (me);
}
int main()
{
    sample s1,s2;
    float me;
    s1.getdata();
    me=mean(s1);//passing arg of type sample to friend function
    s1.showdata(me);//passing arg me to member function showdata()
    return 0;

}
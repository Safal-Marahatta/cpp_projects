 //WAP to add two complex numbers passing 
 //object as an argument and returning resultant complex number
#include<iostream>
using namespace std;
class complex1
{
    private:
    int real,imz;
    public:
    void input()
    {
        cout<<"enter the real and imaginary part of complex no"<<endl;
        cin>>real>>imz;
    }
    complex1 addcomplex(complex1 c1,complex1 c2)
    {
        complex1 temp;
        temp.real=c1.real+c2.real;
        temp.imz=c1.imz+c2.imz;
        return(temp);
    }
    void display()
    {
        cout<<"the summation is"<<endl<<real<<"+"<<"i"<<imz<<endl;
    }
};
int main()
{
    complex1 c1,c2,c3;
    c1.input();
    c2.input();
    c3=c3.addcomplex(c1,c2);//passing object as function argument
    c3.display();
    return(0);
}

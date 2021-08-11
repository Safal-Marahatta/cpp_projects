//add two complex numbers by the use of non member friend function
#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    complex(){}//initializes obj to zero if no arg passed
    complex(float rl,float im)
    {
        real=rl;
        imag=im;
    }
    void display()
    {
        cout<<"real="<<real<<","
    }
}
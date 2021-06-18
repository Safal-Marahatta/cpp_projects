//using object oriented technique write a program to create a class vector that reads
//integer number. perform vector addition by passing object as argument and returns
//the object as result.a vector is a class with array as member
#include<iostream>
using namespace std;
class vect
{
    private:
    int v[3];
    public:
    void input()
    {
        cout<<"enter the value of x y and z comp "<<endl;
        for(int i=0;i<3;i++)
        {
            cin>>v[i];
        }

    }
    vect add(vect v1,vect v2)
    {
        vect temp;
        temp.v[0]=v1.v[0]+v2.v[0];
        temp.v[1]=v1.v[1]+v2.v[1];
        temp.v[2]=v1.v[2]+v2.v[2];
        return (temp);

    }
    void diaplay()
    {
        cout<<v[0]<<"i+"<<v[1]<<"j+"<<v[2]<<"k"<<endl;
    }
};
int main()
{
    vect v1,v2,v3;
    v1.input();
    v2.input();
    v3=v3.add(v1,v2);
    v3.diaplay();
    return 0;


}
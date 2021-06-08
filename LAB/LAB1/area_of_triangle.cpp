#include<iostream>
#include<math.h>
using namespace std;
float area(float,float=4.0);
float area(int,int,int=5);

int main()
{
int option;
float ar;

cout<<"press 1 if you have base and height\npress 2 if you have three sides\nenter 0 if you  want default value";
cin>>option;
if(option==1)
{
    float base,height;
    cout<<"base"<<endl;
    cin>>base;
    cout<<"height"<<endl;
    cin>>height;
    if(height==0)
    {
       ar=area(base);
    }
    else
    {
        ar=area(base,height);
    }
    cout<<"area is :"<<ar;
}
else
{
    int a,b,c;
    cout<<"enter the three sides of the triangle"<<endl;
    cin>>a>>b>>c;
    if(c==0)
    {
        ar=area(a,b);
    }
    else
    {
        ar=area(a,b,c);
    }
    cout<<"area is:"<<ar;

}
return 0;
}
float area(float b,float h)
{
    float are=(b*h)/2;
    return are;
}
float area(int x,int y,int z)
{
 float s,area;
 s=(x+y+z)/2;
 area=sqrt(s*(s-x)*(s-y)*(s-z));
 return area;

}


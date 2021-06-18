#include<iostream>
using namespace std;
int add(int,int);
float add(int,float,int);
float add(int,float);
int main()
{

int a;
float b,c;
a=add(10,20);
b=add(5,20.5f,10);
c=add(2,3.5f);
cout<<"The sum are"<<a<<endl<<b<<endl<<c<<endl;
return 0;

}
int add(int x,int y)
{
    int sum=x+y;
    return(sum);
}
float add(int x,float y,int z)
{
    float sum=x+y+z;
    return(sum);
}
float add(int x,float y)
{
    float sum=x+y;
    return(sum);
}
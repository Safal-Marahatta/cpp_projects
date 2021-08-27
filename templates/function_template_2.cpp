//two function template
#include<iostream>
using namespace std;
template<class t1,class t2>
t1 sum(t1 a,t2 b)
{
    return(a+b);
}
int main()
{
    float x=5.5,s;
    int y=5;
    s=sum(x,y);
    cout<<"the sum is"<<s<<endl;
    return 0;

}

//one template parameter
#include<iostream>
using namespace std;
template<class tem>
tem sum(tem a,tem b)
{
    return((a+b)/2);
}
int main()
{
    int a=5,b=2;
    int s=sum(a,b);
    cout<<"the sum is"<<s<<endl;
    return 0;

}
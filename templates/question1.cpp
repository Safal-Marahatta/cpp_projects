//pushing and poping out of stack
#include<iostream>
using namespace std;
template<class tem>
class stack
{
    private:
    tem arr[20];
    int tos;//top of stack
    public:
    stack()
    {
        tos=-1;//initially top of stack=-1
    }
    void push(tem data)
    {
        tos++;
        arr[tos]=data;
    }
    tem pop()//removing data
    {
        return (arr[tos--]);
    }
};
int main()
{
    stack<int>s1;
    stack<float>s2;
    s1.push(11);
    s1.push(22);
    cout<<"the popped data is"<<s1.pop()<<endl;
    s2.push(32.55);
    s2.push(44.55);
    cout<<"the popped data is "<<s2.pop()<<endl;
    return 0;
}
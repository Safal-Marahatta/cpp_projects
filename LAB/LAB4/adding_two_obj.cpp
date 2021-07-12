//3. WAP to add 2 private data of two different classes.
#include<iostream>
using namespace std;
class two;//class two delaration
class one
{
    private:
    int a;
    public:
    void input()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
    friend int sum(one o,two t);//friend function decleration
};
class two
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    friend int sum(one o, two t);//friend function decleration
};
int sum(one o,two t)
{
    return(o.a+t.b);
}
int main()
{
one o;
two t;
o.input();
t.input();
int s=sum(o,t);
cout<<"the sum of data member of two different class is"<<s<<endl;
return 0;
}

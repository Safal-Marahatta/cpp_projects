#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char o;
    cout<<"enter the two operands"<<endl;
    cin>>a>>b;
    cout<<"enter the operand you want *,+,-,/"<<endl;
    cin>>o;
    switch(o)
    {
        case '+':
        cout<<"the sum is "<<a+b;
        break;
        case '*':
        cout<<"the multiplication is "<<a*b;
        break;
        case '-':
        cout<<"the difference is "<<a-b;
        break;
        case '/':
        cout<<"division gives "<<a/b;
        break;
        default:
        cout<<"no match found";
        break;
    }
    return (0);
}
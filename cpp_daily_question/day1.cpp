//WAP to find sum of elements in a given array
#include<iostream>
using namespace std;
int main()
{
    int n,*arr,sum=0;
    cout<<"enter the number of elements you want to add"<<endl;
    cin>>n;
    arr=new int[n];//dynamic memory allocation
    cout<<"enter the numbers you want to add"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"the sum of the elements you entered is "<<sum<<endl;
    return 0;


}
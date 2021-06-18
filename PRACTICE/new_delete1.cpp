//to find sum and average
#include<iostream>
using namespace std;
int main()
{
    int n,i,*arr,tot=0;
    float avg;
    cout<<"how many numbers: "<<endl;
    cin>>n;
    //allocate memory for array;
    arr=new int[n];
    cout<<"enter elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        tot+=arr[i];
    }
    
}
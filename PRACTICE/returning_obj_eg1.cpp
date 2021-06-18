//create a class called time with datamember day,hr,m and s. Wap to
//add two time object and display the result in main()
#include<iostream>
using namespace std;
class time
{
    private:
    int day,hr,m,s;
    public:
    void input()
    {
        cout<<"enter the value of day , hr , minute and second"<<endl;
        cin>>day>>hr>>m>>s;

    }
    time addtime(time t1,time t2)
    {
        time temp;
        temp.s=t1.s+t2.s;

        temp.m=t1.m+t2.m+temp.s/60;

        temp.hr=t1.hr+t2.hr+temp.m/60;

        temp.day=t1.day+t2.day+temp.hr/24;
        temp.s=temp.s%60;
        temp.m=temp.m%60;
        temp.hr=temp.hr%24;
        return (temp);
    }
    void display()
    {
        cout<<"day="<<day<<endl<<"hour="<<hr<<endl<<"minutes="<<m<<endl<<"second="<<s<<endl;
    }
};
int main()
{
    time t1,t2,t3;
    t1.input();
    t2.input();
    t3=t3.addtime(t1,t2);
    t3.display();
    return 0;
}
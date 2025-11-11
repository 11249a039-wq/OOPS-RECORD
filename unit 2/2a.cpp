#include<iostream>
using namespace std;
class Demo {
    int x;
    public:
    Demo()
    {
        x=0;
        cout<<"default constructer called,x="<<x<<endl;
    }
    Demo(int a)
{
    x=a;
    cout<<"parameterized constructo5r called, x="<<endl;
}
Demo(Demo &d)
{
    x=d.x;
    cout<<"copy constructor called,x="<<x<<endl;
 }
};
int main()
{
Demo d1;
Demo d2(10);
Demo d3(d3);
return 0;
}

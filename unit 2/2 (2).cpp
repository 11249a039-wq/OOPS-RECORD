#include<iostream>
using namespace std;
class Math
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }

    double add (double a ,double b):
    int add(int a,int b, int c)
    {
        return a+b+c;
    }
    double add(double a, double b, double) 
    {

    }  
};

    int main()
    {
        Math m;
        cout<<"sum of two int:"<<m.add(5,10)<<endl;
        cout<<"sum of two double:"<<m.add(2.5,3.7)<<endl;
        cout<<"sum of three int:"<<m.add(1,2,3)<<endl;
        return 0;
    }

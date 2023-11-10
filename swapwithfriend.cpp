#include<iostream>
using namespace std;
class xyz;
class abc
{
int value1;
public:
void setdata(int v1)
{
    value1=v1;
}
int display()
{
    return value1;
}
friend void swap(abc &x,xyz &y);
};
class xyz
{
int value2;
public:
void setdata(int v2)
{
    value2=v2;
}
int display()
{
    return value2;
}
friend void swap(abc &x,xyz &y);
};
void swap(abc &x,xyz &y)      
{
    int temp;
    temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main()
{
    abc a;
    xyz b;
    a.setdata(9);
    b.setdata(20);
    cout<<"before swap"<<endl;
    cout<<a.display()<<"\t";
    cout<<b.display()<<endl;
    swap(a,b);
    cout<<"after swap"<<endl;
    cout<<a.display()<<"\t";
    cout<<b.display()<<endl;
    return 0;
}

#include<iostream>
using namespace std;

class B;
class A
{
    int n1;
    public:
    void get_a()
    {
        cout<<"Enter the value of n1"<<endl;
        cin>>n1;
    }
    void put_a()
    {
        cout<<"the value of n1 is "<<n1<<endl;
    }
    friend void display(A obj,B obj1);
};


class B
{
    int n2;
    public:
     void get_b()
    {
        cout<<"Enter the value of n2"<<endl;
        cin>>n2;
    }
    void put_b()
    {
        cout<<"the value of n1 is"<<n2<<endl;
    }
  
        friend void display(A obj,B obj1);
};

void display(A obj,B obj1)
{
    if(obj.n1>obj1.n2)
    cout<<"No. 1 is Greater"<<endl;
    else
    cout<<"No. 2 is Greater"<<endl;
}

int main()
{
    A a;
    B b ;
    a.get_a();
    a.put_a();
    b.get_b();
    b.put_b();
    display(a,b);
}

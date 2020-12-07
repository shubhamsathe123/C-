#include<iostream>
using namespace std;

class Inline_Demo
{
    int x,y=10;
    public:
    void getdata();
    inline void cube();
    inline void square();
    inline void area();
};

void Inline_Demo :: getdata()
{
    cout<<"Enter the value of x";
    cin>>x;
}

void Inline_Demo :: square()
{
    cout<<"Square of x is :"<<(x*x)<<endl;
}

void Inline_Demo :: cube()
{
    cout<<"Cube of x is :"<<(x*x*x)<<endl;
}

void Inline_Demo :: area()
{
    cout<<"area of x is :"<<(x*y)<<endl;
}

int main()
{
    Inline_Demo id;
    id.getdata();
    id.square();
    id.cube();
    id.area();
}


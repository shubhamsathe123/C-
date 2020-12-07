#include<iostream>
using namespace std;

class parent1
{
    int x=10;
    public:
        void show()
        {
            cout<<"\n x value"<<x;
        }
};

class parent2
{
int y=20;
    public:
        void display()
        {
           cout<<"\n y value"<<y;
        }
};

class child: public parent1, public parent2
{
    public:
    void show1()
    {
        show();
        display();
    }
};

int main()
{
    child c;
    c.show1();
    return 0;
}

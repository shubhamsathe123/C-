#include<iostream>
using namespace std;

class Static_demo
{
    public:
    static int x;
    static int cnt;
        
    void show()
    {
        cout<<"the value of x is:"<<x<<endl;
    }
   void change_value()
    {
        x=x+10;
    }
    static void cnt_no()
    {
        cnt++;
    }
};
int Static_demo::x=10;
int Static_demo::cnt=0;

int main()
{
    cout<<"value of x in main"<<Static_demo::x<<endl;
    Static_demo sd,sd1;
    sd.change_value();
    sd.show();
    sd.change_value();
    sd.show();
    sd.change_value();
    sd.show();
    Static_demo::cnt_no();
    Static_demo::cnt_no();
    Static_demo::cnt_no();

    cout<<"Total no. of times function called:"<<Static_demo::cnt;
}

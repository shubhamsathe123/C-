#include<iostream>
using namespace std;

class Time
{
    float hr,min,sec;//instance variables

    public:
    void gettime()
    {
        cout<<"Enter the Hours:min:sec\n";
        cin>>hr>>min>>sec;
    } 
    void displaytime()
    {
        cout<<"\n"<<hr<<":"<<min<<":"<<sec<<"\n";
    }
};

class Date{
    int dd,yyyy;
    char mm[20];

    public:
    void getdate()
    {
        cout<<"\n Enter the date and year";
        cin>>dd>>yyyy;
        cout<<"\n Enter the month ";
        cin>>mm;
    }
    void displaydate()
    {
        cout<<"\n"<<dd<<"/"<<mm<<"/"<<yyyy;
    }
};

class person
{
    char name[20],DOB[30];
    char addr[20];
    public:

    void getdata()
    {
        cout<<"\n Enter the Name , DOB and Address";
        cin>>name>>DOB>>addr;

    }
    void displaydata()
    {
        cout<<"\n"<<"Name :"<<name<<"\n"<<"Date of Birth :"<<DOB<<"\n Address :"<<addr;
    }
};

class student
{
    int rn;
    char name[20];
    public:
    void get()
    {
        cout<<"\n Enter the Name And Roll no";
        cin>>name>>rn;
    }
    void set()
    {
        cout<<"\n Name :"<<name<<"\n Roll No:"<<rn;
    }
};
class fan
{
    int price,war;
    char Cname[20];

    public:
    void getfan()
    {
        cout<<"\n Enter the Cname ,price and warrenty";
        cin>>Cname>>price>>war;
    }
    void displayfan()
    {
        cout<<"\n Company Name:"<<Cname<<"\n Price :"<<price<<"\n Warrenty :"<<war<<"\n";

    }

};
class point
{
    int x,y;
    public:
    void getpoint()
    {
        cout<<"\n Enter the x & y cordinates";
        cin>>x>>y;
    }
    void displaypoint()
    {
        cout<<"\n X co-ordinates:"<<x<<"\n Y co-ordinates"<<y;
    }
};

class box
{
    int l,w,h;
    public:
    void getbox()
    {
        cout<<"\n Enter length,width and height";
        cin>>l>>w>>h;

    }
    void displaybox()
    {
        cout<<"\n Lenth :"<<l<<"\n Width :"<<w<<"\n Height :"<<h;
    }

    
};

int main()
{
    Time t;
    Date d;
    person p[3];
    student s;
    fan f;
    point p1;
    box b;
   
    cout<<"\n Todays time ";
    t.gettime();
    t.displaytime();
    cout<<"\n Date--------";
    d.getdate();
    d.displaydate();
    cout<<"\n Person Detail";
    for(int i=0;i<3;i++)
    {
        p[i].getdata();
    }
    for(int i=0;i<3;i++)
    {
        p[i].displaydata();
    }
     s.get();
    s.set();
    f.getfan();
    f.displayfan();

    p1.getpoint();
    p1.displaypoint();

    b.getbox();
    b.displaybox();
}

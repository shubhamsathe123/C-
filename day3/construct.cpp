#include<iostream>
using namespace std;

class Time
{
public:
int hr,min,sec;
Time()
{
    cout<<"\nEnter time of admission in hh:min:sec format";
    cin>>hr>>min>>sec;
}
void showtime()
{
    cout<<"\nTime Entered: "<<hr<<":"<<min<<":"<<sec;
}
~Time();
}tim;

class Date
{
    public:
    int dd,mm,yy;
    Date()
    {
        cout<<"\nEnter date of admission in dd-mm-yyyy format";
        cin>>dd>>mm>>yy;
    }
    void showdate()
    {
        cout<<"\nDate of admission is: "<<dd<<"-"<<mm<<"-"<<yy;
    }
    ~Date();
}dat;

class Person
{
    public:
    char per[20];
    Person()
    {
        cout<<"\nEnter Name of Teacher";
        cin>>per;
    }
    void showPerson()
    {
        cout<<"\nTeacher Name: "<<per;
    }
    ~Person();
}pers;

class Student
{
   public:
    char s[20];
    Student()
    {
        cout<<"\nEnter Name of Student";
        cin>>s;
    }
    void showStudent()
    {
        cout<<"\nStudent Name: "<<s;
    }
    ~Student();

}stu;

class Fan
{
    public: 
    int id;
    char mfg[20];
    Fan()
    {
        cout<<"\nEnter the Mfg. ID and name of Company";
        cin>>id>>mfg;
    }
    void showFan()
    {
        cout<<"\nCompany Details:\n1.Manufacturing ID: "<<id<<"\nCompany: "<<mfg<<endl;
    }
    ~Fan();
}fa;

class Point
{
    public:
    int i,n;
    Point()
    {
    cout<<"\nEnter Number of points";
    cin>>n;
    }
    void showPoint()
    {
       cout<<"\nHere are your points";
        for(i=0;i<n;i++)
        {
            cout<<".";
        }
        
    }
    ~Point();
}poi;

class Box
{
    public:
    int j,m;
    Box()
    {
    cout<<"\nEnter Number of boxes";
    cin>>m;
    }
    void showBox()
    {
        cout<<"\nHere are your Boxes";
        for(j=0;j<m;j++)
        {
            cout<<"[_]\t";
        }
       cout<<endl;
    }
    ~Box();
}bo;

int main()
{

cout<<"\nYour Information: \n";

stu.showStudent();
dat.showdate();
tim.showtime();
pers.showPerson();
fa.showFan();
poi.showPoint();
bo.showBox();

return 0;
}



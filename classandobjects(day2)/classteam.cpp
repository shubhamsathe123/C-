#include<iostream>
using namespace std;

class Team
{
    char country[10],pname[30];
    int match,age;
    float bavg,ballavg;

    public:
    void getdata()
    {
        cout<<"\nEnter the Players deatails playername,country,match,age,batting average,balling average";
        cin>>pname>>country>>match>>age>>bavg>>ballavg;
    }
    void display()
    {
        cout<<"\n"<<country<<"\t\t"<<pname<<"\t\t"<<match<<"\t\t"<<age<<"\t\t"<<bavg<<"\t\t"<<ballavg<<"\n";
    }
};


int main()
{
    Team t[2];
    int i;
    for(i=0;i<2;i++)
    {
        t[i].getdata();
    }
     cout<<"\nCountry Name\t Player \t Matches\t Age \t BattingAverage \t  BallingAverage \n";
    for(i=0;i<2;i++)
    {
        t[i].display();
    }   
    
}

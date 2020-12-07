#include<iostream>
#include<string.h>
using namespace std;
class Telephonebill
{
	char name[100],add[100];
	int telno,callno,ans;
	public:
	void bill(char nm[100],char ad[100],int tno,int cno)
	{
		strcpy(name,nm);
		strcpy(add,ad);
		telno=tno;
		callno=cno;
		ans=2*cno;
	}
	void display()
	{
		cout<<"customer name:"<<name<<" address:"<<add<<"telephone no:"<<telno<<" no of calls:"<<callno<<" amount to be paid:"<<ans<<endl;
	}
	
};
int main()
{
	char name[100],add[100];
	int telno,callno;
	Telephonebill t;
	cout<<"Enter customer name:\n";
	cin>>name;
	cout<<"Enter address of customer:\n";
	cin>>add;
	cout<<"enter telephone no:\n";
	cin>>telno;
	cout<<"enter total no calls:\n";
	cin>>callno;
	t.bill(name,add,telno,callno);
	t.display();
}
	

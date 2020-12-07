#include<iostream>
using namespace std;
class EleBill
{
	char name[100];
	int units;
	float bill,amount;
	public:
		void getdata()
		{
			cout<<"\nEnter name:";
			cin>>name;
			cout<<"Units used:";
			cin>>units;
		}
		void bill_unit()
		{

			if(units<=30)
			{
				bill=units*1.50;
				cout<<"\nBill="<<bill;
			}
			else if(units>30 && units<=200)
			{
				bill=units*3;
				cout<<"\nBill="<<bill;
			}
			else if(units>=300)
			{
				bill=units*4.25;
				cout<<"\nBill="<<bill;
			}

		}
		void display()
		{
			cout<<"\n\nUser name:"<<name<<"\nBill:"<<bill;
			if(bill>500)
				cout<<"\nAmount you should pay::"<<(bill*500);
			else
				cout<<"\nAmount you should pay::"<<bill;
		}
};

int main()
{
	int i;
	EleBill e[3];
	for(i=0;i<2;i++)
	{
		cout<<"\n\nEnter details of "<<i+1<<" user::";
		e[i].getdata();
	}
	for(i=0;i<2;i++)
	{
		e[i].bill_unit();
	}
	cout<<"\nBill as per units:";
	for(i=0;i<2;i++)
	{
		e[i].display();
	}
	cout<<"\n";

}

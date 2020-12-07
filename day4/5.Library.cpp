#include<iostream>
using namespace std;

class Library
{
	char author[20],title[20],publisher[20];
	float price,fprice;
	int noc,d;
	public:
	void Accept_Book_info()
	{
		cout<<"Enter author,title,price,publisher & no. of copies to Print"<<endl;
		cin>>author>>title>>price>>publisher>>noc;
	}
	void Print_Book_info()
	{
		cout<<"Author: "<<author<<endl;
		cout<<"Title: "<<title<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Final Price after Discount: "<<fprice<<endl;
		cout<<"Publisher: "<<publisher<<endl;
		cout<<"NO. of copies: "<<noc<<endl;
	}
	void selling_price()
	{
		//cout<<"Price before discount is:"<<price<<endl;
		if(price>=2500)
		{
			d=(price*1)/100;
			fprice=price-d;
			//cout<<"Final Price after discount is:"<<fprice<<endl;
		}
		else
		{
			d=(price*0.5)/100;
			fprice=price-d;
			//cout<<"Final Price after discount is:"<<fprice<<endl;
		}
	}
};
int main()
{
	Library l;
	l.Accept_Book_info();
	l.selling_price();
	l.Print_Book_info();
	
}

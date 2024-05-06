/*Jay Phad 
AmrutVahini College of Engineering
Imagine a publishing company which does marketing for book and audio cassette versions. Create a class publication that stores the 
title (a string) and price (type float) of publications. From this class derive two classes: book which adds a page count (type int) and 
tape which adds a playing time in minutes (type float). the book and tape class, allows user to enter data and displays the 
data members. If an exception is caught, replace all the data member values with zero values. */
#include<iostream>
#include<string.h>
using namespace std;
class publication
{
	public:
	char title[50];
	float price;
	public:
		void getdata()
		{
			cout<<"enter the book name:";
			cin>>title;
			cout<<"enter the price:";
			cin>>price;
			
		}
		void putdata()
		{
			cout<<"book title:"<<title<<"\n";
			cout<<"price :"<<price<<"rs\n";	
		}
};
class book : public publication
{
	public:
	int pagecount;
	void getbook()
	{
		getdata();
		cout<<"enter the page count:";
		cin>>pagecount;
	}
	void showbook()
	{
	 putdata();
	 cout<<"number of pages="<<pagecount;
	 cout<<endl;
	}
		
};
class tape : public publication
{
	public:
	float  playtime;
	public:
		void gettape()
		{
			getdata();
			cout<<"enter the playtime:";
			cin>>playtime;
		}
		void showtape()
		{
			putdata();
			cout<<"playing time is :"<<playtime<<"minutes\n";
			
		}	
};
int main()
{
	//get details
	int n;
	int m;
	cout<<"enter the number of books :";
	cin>>n;
	book *arr1[n];
	for(int i=0;i<n;i++)
	{
		arr1[i]=new book;
		arr1[i]->getbook();
	}
	cout<<"enter the number of tapes:";
	cin>>m;
	tape *arr2[m];
	for(int i=0;i<m;i++)
	{
		arr2[i]=new tape;
		arr2[i]->gettape();
	}
	//show details
	cout<<"book details:\n";
	for(int i=0;i<n;i++)
	{
		arr1[i]->showbook();
		cout<<endl;
	}
	cout<<"tape details:\n";
	for(int i=0;i<m;i++)
	{
		arr2[i]->showtape();
		cout<<endl;
	}
	
	return 0;
}

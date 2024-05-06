/*Jay Phad 
AmrutVahini College of Engineering
Write C++ program using STL for sorting and searching user defined records such as personal records (Name, DOB, Telephone number 
etc) using vector container. */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class student
{
	public:
	int roll;
	char name[10];
	char dob[10];
	public:
	void getdata()
	{
		cout<<"\nenetr the roll num :";
		cin>>roll;
		cout<<"\nenter the  name :";
		cin>>name;
		cout<<"enter the dob :";
		cin>>dob;
	}	
	void showdata()
	{
		cout<<"roll is :"<<roll;
		cout<<endl;
		cout<<"name is:"<<name;
		cout<<endl;
		cout<<"dob is :"<<dob;
		cout<<endl;
	}
	bool operator==(const student&st)
	{
		return roll=st.roll;
	}
};
bool check(student &s1,student &s2)
{
	return(s1.roll<s2.roll);
}
void sorting(vector<student>&v)
{
	sort(v.begin(),v.end(),check);
}
int main()
{
	student s;
	vector<student>v;
	vector<student>::iterator itr;
	int ch;

		
	do{
			cout<<"enter the choice:\n 0.exit \n 1.insert the record \n 2.display the record\n 3.sort the vector:\n 4.search\n";
	cin>>ch;
		switch(ch)
	{
			
		case 1:
			int n;
			cout<<"enter the number of record you want to insert: ";
			cin>>n;
			//insert the record
			for(int i=0;i<n;i++)
			{
				s.getdata();
				v.push_back(s);
			}
			break;
		case 2:
			//display the record
			for(itr=v.begin();itr!=v.end();itr++)
			{
				itr->showdata();
			}
			break;	
		case 3:
			//sorting
			sorting(v);
			cout<<"sorting is applied";
			break;
		case 4: 
			cout<<"enter the roll number you want to search for :";
			cin>>s.roll;
			itr=find(v.begin(),v.end(),s);
			if(itr!=v.end())
			{
				cout<<"roll number is present/found:";
			}
	}
	}while(ch!=0);
	
			
	
	
	
	return(0);
}


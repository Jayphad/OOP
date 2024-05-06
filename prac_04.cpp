/*Jay Phad 
AmrutVahini College of Engineering
Write a C++ program that creates an output file, writes information to it, closes the file, open it again as an input file and read the information 
from the file. 
*/
#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
		int roll;
		char name[10];
	public:
		void getdata()
		{
			cout<<"enter roll:";
			cin>>roll;
			cout<<"enter name:";
			cin>>name;
		}
		void showdata()
		{
			cout<<"Roll no is:"<<roll<<endl;
			cout<<"Name is :"<<name<<endl;
		}
};
int main()
{
	student s1;
	ofstream fout("jay");
//	if(fout.is_open())
//	{
//		cout<<"file open and created succesfully:\n";
//	}
//	else
//	{
//		cout<<"file not created :\n";
//	}
	int n;
	cout<<"enter the number of student data you want to enter:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s1.getdata();
		fout.write((char*)&s1,sizeof(s1));
	}
	fout.close();
	
	ifstream fin("jay");
	for(int i=0;i<n;i++)
	{
		
		fin.read((char*)&s1,sizeof(s1));
		s1.showdata();
	}
	fin.close();
	return 0;
	
}









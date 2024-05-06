/*Jay Phad 
AmrutVahini College of Engineering
Write a program in C++ to use map associative container. The keys will be the names of states and the values will be the populations of the states. When 
the program runs, the user is prompted to type the name of a state. The program then looks in the map, using the state 
name as an index and returns the population of the state. */
#include<iostream>
#include<map>
#include<string.h>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	map<string,int>mymap;
	map<string,int>::iterator itr;
	string state;
	int population;
	int n; 
	cout <<"enter the number of record you want to take:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the state:";
		cin>>state;
		cout<<"enter the population:";
		cin>>population;
		mymap.insert(make_pair(state,population));		
	}
	cout<<"state  \t population\n";
	for(itr=mymap.begin();itr!=mymap.end();itr++)
	{
		cout<<itr->first<<"\t"<<itr->second<<"million";
		cout<<endl;
	}
	cout<<"enter the state you want to know population:";
	cin>>state;
	cout<<state<<" state population is  "<<mymap[state]<<" million";
	return 0;
}

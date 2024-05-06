/*Jay Phad 
AmrutVahini College of Engineering
Implement a class Complex 
which represents the Complex 
Number data type. Implement the 
following 
1. Constructor (including a default 
constructor which creates the 
complex number 0+0i). 
2. Overload operator+ to add two 
complex numbers. 
3. Overload operator* to multiply 
two complex numbers. 
4. Overload operators << and >> to 
print and read Complex Numbers. 
*/
#include<iostream>
using namespace std;

class complex
{
	public:
	int real;
	int imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
		friend istream& operator>>(istream&is,complex &b);
		friend ostream& operator<<(ostream&os,complex b);
		complex operator+(complex b2)
		{
			complex b3;
			b3.real=real+b2.real;
			b3.imag=imag+b2.imag;
			return b3;
		}
		complex operator-(complex b2)
		{
			complex b3;
			b3.real=real-b2.real;
			b3.imag=imag-b2.imag;
			return b3;
		}
		complex operator*(complex b2)
		{
			complex b3;
			b3.real=(real*b2.real)-(imag*b2.imag);
			b3.imag=(imag*b2.imag)-(imag*b2.real);
			return b3;
		}
		
};
istream& operator>>(istream &is,complex &b)
{
	return is>>b.real>>b.imag;
}
ostream& operator<<(ostream &os,complex b)
{
	return os<<b.real<<"+"<<b.imag<<"i\n";
}
int main()
{
	complex c1,c2,c3;
	int ch;
	do{
		
		cout<<"Enter the choice: \n";
		cout<<"1.read the complex number \n 2.addition of complex number \n 3.sub of complex number \n 4.multi of complex number .\n 5.exit\n";
     	cin>>ch;
		switch(ch)
		{
			case 1:	
				cout<<"enter the real and imag of complex number 1:\n";
				cin>>c1;
				cout<<c1;
				cout<<"enter the real and imag of complex number 2:\n";
				cin>>c2;
				cout<<c2;
				break;
			case 2:
				cout<<"adition of two complex number 1 & 2:  ";
				c3=c1+c2;
				cout<<c3;
				break;
			case 3:
				cout<<"substraction of two complex number 1 & 2: ";
				c3=c1-c2;
				cout<<c3;
				break;
			case 4:
				cout<<"multiplication of two complex number 1 & 2: ";
				c3=c1*c2;
				cout<<c3;
				break;
			
			default:
					cout<<"enter the valid choice:";
		}
	
	}while(ch!=6);

	return (0);
	
}

/*Jay Phad 
AmrutVahini College of Engineering
Write a function template for selection sort that inputs, sorts and outputs an integer array and a float 
array.*/
#include<iostream>
using namespace std;
template<class T1>
void display(T1 a[100], int s)
{
	cout<<"array elements are:\n";
	
	for(int i=0;i<s;i++)
	{
		cout<<a[i]<<"\t";
	}
}
template<class T2>
void selectionsort(T2 a[100],int s )
{
	int i ,j;
	T2 temp;
	for(i=0;i<s-1;i++)
	{
		int min=i;
		for(j=i+1;j<s;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			
		}
	}
	cout<<"\nafter selection sort sorted element:\n";
	for(i=0;i<s;i++)
	{
		cout<<a[i]<<"\t";
	}
		
}

int main()
{
			
	int ch;
	
	
	do{

	
	cout<<"enter choice: \n1.int array \n 2. float array:\n 3.Exit\n";
	
	cin>>ch;
	
		switch(ch)
		{
			case 1:
				//char arr
				int n;
				cout<<"enter the size of integer array:";
				cin>>n;
				int arr[100];
				for(int i=0;i<n;i++)
				{
					cin>>arr[i];
				}
				display(arr,n);
				selectionsort(arr,n);
				cout<<endl;
				break;
			case 2:	
				//float array
				int m;
				float brr[10];
				cout<<"enter the size of float array:";
				cin>>m;
				for(int i=0;i<m;i++)
				{
					cin>>brr[i];
				}
				display(brr,m);
				selectionsort(brr,m);
				break;
				case 3:
					exit(0);
		}
	}while(ch!=4);
	
	return 0;
}


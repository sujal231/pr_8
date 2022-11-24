#include<iostream>

using namespace std;

main()
{
	int age;
	char error[100]="No,He could not vote  ";
	
	cout<<"Enter Your age:- ";
	cin>>age;
	
	try
	{
		if(age < 18)
		{
			throw error;	
		}
		else
		{
			cout<<"yes,no,He could vote";
		}	
	}
	
	catch(char z[])
	{
		cout<<z;
	}
}

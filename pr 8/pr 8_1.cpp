#include<iostream>

using namespace std;

main()
{
	int a,b,sum;
	
	char error[100]="Cannot divide by 0";
	
	cout<<"Enter A:";
	cin>>a;
	
	cout<<"Enter B:";
	cin>>b;
	
	try{
		
		if(b == 0)
		{
			throw error;
		}
		else
		{
			sum=a/b;
			cout<<sum;
		}
	}
	
	catch(...)
	{
		cout<<"General Excaption ";
	}
	
}

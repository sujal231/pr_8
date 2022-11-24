#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char password[100];
	int i;
	char error;
	cout<<"Enter Password= ";
	cin>>password;
	int l = strlen(password);
	cout<<endl<<"length = "<<l<<endl<<endl;
	
	for(i=0 ; i<l ;i++)
	{
		try
		{
		
		if(password[i] >= 'A' && password[i] <='Z')
		{
			throw error;
			
		}
		else
		{
			cout<<password[i]<<"="<<"Available"<<endl;
		}
		}
		
//		catch(char z[])
//		{
//			cout<<password[i]<<"="<<"no"<<endl;
//		}
	
		catch(...)
		{
			cout<<password[i]<<"Not available "<<endl;
		}
	
	}
	

}

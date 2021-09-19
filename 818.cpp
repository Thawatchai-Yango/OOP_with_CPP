/*
 * OBJECT ORIENTED PROGRAMMING
 * thawatchai Yango
 * ASSIGNMENT 7
 * 203074
 */

#include<iostream>
#include<exception>	//Exception Class Header File
using namespace std;
 
class Exception
{
 		int eage,evehicle;
		float eincome;
 		string estr;
 		
 	public:
 			Exception(int a)
 		{
 			eage=a;
 		}
 		
 			Exception(float i)
 		{
 			eincome=i;
 		}
 		
			Exception(string s)
  		{
	 		estr=s;
 		}
 		
 		    Exception(int i)
 		{
 			evehicle=i;
		}
		
 	void err_age()
 		{
 			cout<<"Invalid age : "<<eage<<endl;
 		}	
 		
 	void err_income()
 		{
 			cout<<"Invalid income : "<<eincome<<endl;
 		}
 		
 	void err_str()
 		{
 			cout<<"Invalid city: "<<estr<<endl;
		}
		
	void err_vehicle()
		{
 			cout<<"Invalid Type: "<<evehicle<<endl;
		}
		
};

int main()
{
 		int age,vehicle;
 		float income;
 		string city;
 		char ans;
 		
 	do
 	{
 		
	 try
 	{
 		cout<<"\n:::Enter Age (between 18 to 55):::\n---->";
 		cin>>age;
 			if(age<18||age>55)
 	{
 			throw Error(age);
 	}
 			else
 	{
 		cout<<"Age is :: "<<age<<endl;
 	}
 	}
 			catch(Error e)
 	{
 		e.err_age();
 	}
 	
 	
 			try
 	{	
		cout<<"\n:::Enter monthly income in INR (between 50000 to 100000) :::\n---->";
 		cin>>income;
 			
			if(income<50000||income>100000)
 	{
 			throw Error(income);
	}
 			else
 	{
 		cout<<"Monthly income in INR is ::"<<income<<endl;
 	}
 	}
 			catch(Error e)
 	{	
 		e.err_income();
	}
	
	
 			try
 	{	
	 	cout<<"\n:::Enter City (pune or mumbai or bangalore or chennai):::\n---->";
 		cin>>city;
 
 			if((city != "pune") && (city != "mumbai") && (city != "bangalore") && (city != "chennai"))
 	{
 			throw Error(city);
 	}
 			else
 	{
 		cout<<"City is :"<<city<<endl;
 	}
 	}
 			catch(Error e)
 	{
 		cout<<"\nCity not allowed; ";
 		e.err_str();
 	}
 	
 	
 			try
 	{
		cout<<"\n:::Enter type of vehicle (2 or4 -wheeler):::\n---->";
 		cin>>vehicle;
 			if(vehicle!=4)
 	{
 			throw Error(vehicle);
 	}
 			else
 	{
 		cout<<"Vehicle is :: "<<vehicle<<"-wheeler"<<endl;
 	}
 	}
 			catch(Error e)
 	{
 		cout<<"\nInvalid Vehicle;";
 		e.err_vehicle();
 	}
 	
 	
	cout<<"\n*****CONTINUE FOR CHECKING (y/n):*****==";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
 	return 0;
 }

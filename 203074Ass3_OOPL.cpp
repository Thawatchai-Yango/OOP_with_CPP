/*
 * book.cpp
 *
 *  Created on: 18-Jul-2017
 *  Author: thawatchai yango SE COMP B
 *  Roll No:203074 BATCH E
 *  Assignment 2
 *  Problem Statement
 *  Book shop maintains inventory of books that are sold at the shop.The list
 *  includes details such as author, title, publisher, and stock position.
 *  Whenever a customer wants a book,the sales person inputs the titleand author
 *  and the system searches the list and displaying whether  it iavailable or not.
 *  If is it not, an appropriated is displayed. If is is, then the system shows
 *  book details and requests for required in stock. If the copies areavailable,
 *  the total cost of the requests otherwise the message is required copy is not
 *  in stock is displayed. Desire using class books() with suitablemember functions
 *  and constructors to all implement c++ program.
 */
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
class book  //Creating class name as books
{

 		char author[20]; //Creating pointer variables
 		char title[20];
 		char publisher[20];
 		double price;
		 int stock;
    public: //Declaring variables in public
      		book();    
    void insertdata();
    void display();
    int search(char[],char[]);
    void nocopies(int);     
};
  			book::book()//Creating parameterized constructor
  {
   		char *author=new char[50];//Allocating memory to 'title' during execution time
   		char *title=new char[50];//Allocating memory to 'author' during execution time
   		char *publisher=new char[50];//Allocating memory to 'publisher' during execution time
   		price=0;
   		stock=0;
   }
    void book::insertdata()
         {
  		cout<<"\n ENTER THE TITLE OF THE BOOK:"; //Prompting user to input values to variables
  			cin>>title;
  		cout<<"\n ENTER THE AUTHOR OF THE BOOK::";//Prompting user to input values to variables
  			cin>>author;
 		cout<<"\n ENTER THE PUBLISHER OF THE BOOK::";//Prompting user to input values to variables
 			cin>>publisher;
  		cout<<"\n ENTER THE PRICE OF THE BOOK::";//Prompting user to input values to variables
  			cin>>price;
 		cout<<"\n ENTER THE NUMBER OF STOCK::";//Prompting user to input values to variables
  			cin>>stock;
 }


  void book::display()
 {
 		cout<<"\n "<< title<<"\t "<<author<<"\t  "<<publisher<<" \t "<<price<<"\t "<<stock;//Output statement for the given variables
        }
  int book::search(char t[],char a[])
  {
       if(strcmp(title,t)&&(strcmp(author,a)))
 {
 return 0;
 }
 else
 {
 return 1;
 }
  }

 	void book::nocopies(int num)
{
if(stock>=num)
{
		cout<<"\n STOCK IS AVAILABLE";
		cout<<"\n\n THE PRICE OF THE BOOK IS Rs.   ::"<<(price*num)<<" RUPEES";//Output statement of price operation
		cout<<"\n THE REMAINING STOCK LEFT IS/ARE::"<<(stock-num)<<" BOOKS";//Output statement for remaining stock
		
}
else
{
		cout<<"\n REQUIED COPIES NOT IN STOCK!!";
}
}
int main()
{
 int ch,n,i,flag=0,copies,key=0;
        book b[100];
        char bname[50];
        char key_title[50],key_author[50];
        char opt;
        
   do
    {
 		cout<<"\n:::::::::::::WELCOME TO BOOK STORE::::::::::::::"; 
 		cout<<"::\n::\t\t\t\t\t\t::\n::\t\t\t\t\t\t::\n:: 1.INSERT DETAILS OF THE BOOK\t\t\t::\n::\t\t\t\t\t\t::\n::\t\t\t\t\t\t::\n:: 2.DISPLAY \t\t\t\t\t::\n::\t\t\t\t\t\t::\n::\t\t\t\t\t\t::\n:: 3.PURCHASE \t\t\t\t\t::\n::\t\t\t\t\t\t::\n::\t\t\t\t\t\t::\n:: 4.EXIT\t\t\t\t\t::\n::\t\t\t\t\t\t::\n::::::::::::::::::::::::::::::::::::::::::::::::::";
		cout<<"\n\n ENTER YOUR CHOICE:";
			 cin>>ch;
 switch(ch)
  {
        case 1:
                    cout<<"\n HOW MANY BOOKS DATA YOU WANT TO ENTER::";
                    	cin>>n;
                    for(i=0;i<n;i++)
                      {
                       b[i].insertdata();
   }
                     break;
        case 2:
                    cout<<"\n"<<"TITLE  "<<"\t"<<"AUTHOR   "<<"\t"<<"PUBLISHER"<<"\t"<<"PRICE  "<<"\t"<<"STOCK";
                    for(i=0;i<n;i++)
    {
                    cout<<"\n";
   
         b[i].display();   
     }
   
                        break;
                    
        case 3:
                    cout<<"\n ENTER THE TITLE OF BOOKS::";
                        cin>>key_title;
                    cout<<"\n ENTER THE AUTHOR OF THIS BOOK::";
                        cin>>key_author;
                             
                            for(i=0;i<n;i++)
                          {
                              if(b[i].search(key_title,key_author))
                               {
                                  flag=1;
					cout<<"\n"<<"TITLE  "<<"\t"<<"AUTHOR   "<<"\t"<<"PUBLISHER"<<"\t"<<"PRICE  "<<"\t"<<"STOCK";
                                  b[i].display();                        
    //break;
    key=i;
            }
    }
   if(flag==1)                          
    				cout<<"\n\n ****YOU ARE LUCKY!! YOUR BOOK IS IN STOCK NOW!****";
   else
 {
     				cout<<"\n\n ****WE ARE SORRY! THE BOOK YOU WISH IS OUT OF STOCK OR TITLE NOT FOUND!****";
        break;
 }        
              if(flag==1)
                      {
                    cout<<"\n\n PLEASE ENTER THE REQUIRED NUMBER OF COPIES OF THE BOOK::";
                    	cin>>copies;
                      b[key].nocopies(copies);
                     }
                   
                     break;
                     
        case 4: exit(EXIT_SUCCESS);
   
   break;
  default :
                    cout<<"\n WRONG CHOICE!!!";
                       break;
 }   
 					
 }while(ch!=5);
  
 return 0;
} 

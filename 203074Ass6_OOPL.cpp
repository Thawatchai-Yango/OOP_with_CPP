#include <iostream>
#include<string>
using namespace std;

class Marketing //base class of the program
 	 {
public:// publication
	 Marketing()
	 {
		 title="";
		 price=0.0;// can be in form of 0.00
	 }
	 Marketing(string title, float price)
	 {
		 this->title=title;
		 this->price=price;
	 }

 void getTitle_Price()// input the title and price for both products
 	 {
	 cout<<"\nEnter title of the product\n";
	 cin>>title;
	 cout<<"\nEnter price of the product\n";
	 cin>>price;
 	 }
 void getPage_Time()// input the page or time for the product
  	 {
 	 try
 	 {
 		 if(title.length()<3) // the length of title must have more 3 letters
 			throw title; // throw title to catch string
 		 if(price<=0.0)// the price can be 0 or 0.0
 			throw price;// throw price to catch float
 	 }
 	 catch(string)//catch the value (string) from throw title
 	 {
 		 cout<<"\nError: Title below 3 characters is not allowed";
 		 // if the letters less than 3 will shows error
 		 title="";
 	 }
 	 catch(float f)//catch the value (float0 from throw price
 	 {
 		 cout<<"\nError: Price not valid: \t"<<f;//if input is not number will shows error
 		 price=0.0;
 	 }
 	 cout<<"\nTitle is :"<<title;// output of title if no error
 	 cout<<"\nPrice is :"<<price;// output of price if no error
 	 }
private:
 	 string title;
 	 float price;
 	 };

class Book_page: public Marketing // derived class of the book page
 	 {
public:
 	 Book_page():Marketing()// derived class
 	 {
 	  pages=0;// page of the book can not exit of 0.00 form
 	 }
 	 Book_page(string title, float price, int pages):Marketing(title,price)
 	 {
 	 this->pages=pages;
 	 }
void getTitle_Price()//from the base class
 	 {
 	 Marketing::getTitle_Price();
 	 cout<<"\nEnter no. of pages in book\n";
 	 cin>>pages; // input the page no.
 	 }
void getPage_Time() //from the base class
 	 {
 	 Marketing::getPage_Time();
 	 try
 	 {
 	 if(pages<0)
 	 throw pages;// throw page
 	 }
 	 catch(int f)// catch only the number form
 	 {
 	 cout<<"\nError: Pages not valid: \t"<<f; //the input is not the number form
 	 pages=0;
 	 }
 	 cout<<"\nPages are :"<<pages;// output is no error
 	 }
private:
  	 int pages;
  	 };

class Cassette_time: public Marketing // derived class for audio play time
  	 {
public:
  	 Cassette_time():Marketing()
  	{
  	playtime=0.0;// plat time must exit of 0.00 form
  	}
  	Cassette_time(string title, float price, float playtime):Marketing(title,price)
  	{
  		this->playtime=playtime;
  	}
void getTitle_Price()//member function from base class
  	 {
 	 Marketing::getTitle_Price();
 	 cout<<"\nEnter play time of cassette\n";
 	 cin>>playtime;
  	 }
void getPage_Time()
  	 {
 	 Marketing::getPage_Time();
 	 try
 	 {
 		 if(playtime<0.0)// if play time not exit in from of 0.0 will throw to error
 			 throw playtime;
 	 }
 	 catch(float f)//catch the value of palt time
 	 {
 		 cout<<"\nError: Play time not valid: \t"<<f;
 	 playtime=0.0;
 	 }
 	 cout<<"\nPlaytime is :"<<playtime;// will show if not error
  	 }
  private:
  	 float playtime;
  	 };


 int main() // main function for program begins here
  	 {
  	 	Book_page book_info;
  		cout<<"\n******************BOOK******************\n";
  		book_info.getTitle_Price();//input title or price of the book

  		cout<<"\n*************AUDIO CASSETTE*************\n";
  	 	Cassette_time cassette_info;
  	 	cassette_info.getTitle_Price();// input title or price of the cassette

  	 	cout<<"\n******************BOOK******************\n";
  	 	book_info.getPage_Time();// input the page of the book

  	 	cout<<"\n*************AUDIO CASSETTE*************\n";
  	 	cassette_info.getPage_Time(); // input the time of the cassette
  	 return 0;
  	 }

/* ******************BOOK******************

Enter title of the product
oopl

Enter price of the product
999

Enter no. of pages in book
1004

*************AUDIO CASSETTE*************

Enter title of the product
song

Enter price of the product
599

Enter play time of cassette
36.59

******************BOOK******************

Title is :oopl
Price is :999
Pages are :1004
*************AUDIO CASSETTE*************

Title is :song
Price is :599
Playtime is :36.59
--------------------------------
Process exited after 39.57 seconds with return value 0
Press any key to continue . . .*/











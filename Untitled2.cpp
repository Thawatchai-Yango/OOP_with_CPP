/*
 * OBJECT ORIENTED PROGRAMMING
 * thawatchai Yango
 * ASSIGNMENT 7
 * 203074
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int rpt;
    fstream file; //object of fstream class
    char data[50];
    file.open("file.dat",ios::out);
    if(!file)
    {
        cout<<"Error in creating file!!!"<<endl;
        return 0;
    }
    cout<<"File created successfully."<<endl;
    cout<<"Do you Want To Add Data In File?(1-Yes/0-No):";
    cin>>rpt;
    while(rpt == 1)
    {
        cout<<"Enter Data"<<endl;
        cin.ignore();
        cin.getline(data,100);
        file<<data<<endl;
        cout<<"Do you Want To Add Again In File?(1-Yes/0-No):";
        cin>>rpt;
    }
    file.close();               //closing the file
    file.open("file.dat",ios::in);
    if(!file)
    {
        cout<<"Error in opening file!!!"<<endl;
        return 0;
    }
    char ch;
    cout<<"File content: ";
    while(!file.eof())  //read untill end of file is not found.
    {
        file>>ch;       //read single character from file
        cout<<ch;
    }
    file.close();       //closing the file
    return 0;
}

/*
 ****OUTPUT****
File created successfully.
Do you Want To Add Data In File?(1-Yes/0-No):1
Enter Data
my name is
Do you Want To Add Again In File?(1-Yes/0-No):1
Enter Data
Thawatchai yango
Do you Want To Add Again In File?(1-Yes/0-No):1
Enter Data
from Thailand
Do you Want To Add Again In File?(1-Yes/0-No):1
Enter Data
studying at MIT Pune
Do you Want To Add Again In File?(1-Yes/0-No):0
File content: 	mynameis
		Thawatchai yango
		fromThailand
		studying at MITPunee*/


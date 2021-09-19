/*

 * OBJECT ORIENTED PROGRAMMING
 * thawatchai Yango
 * ASSIGNMENT 8
 * 203074
 Write a C++ program that creates an output file,
 writes information to it, closes the file and open it again as an input file
 and read the information from the file.
 Enter name of file from user
 */
 
 #include <cstdlib>
 #include <fstream>
 #include <iostream>
using namespace std;
 		
		 
int main ()
 {
 		char name[80];
 			cout<<"\n\n-->Enter name of file to be created\n==::";
 			cin>>name;
 			// open a file in write mode.
 		ofstream fout;
 		fout.open(name);
 		if(!fout)
        {
 			cout<<"Error opening file\n";
 			exit(1);
 		}
 			cout << "\n-->Writing to the file which you have created" << endl;
 			cout << "   Enter contents for file end with (end*)\n==::";
 			string data;
 		while(getline(cin,data))
 		{
 		if(data == "end*")
 			break;
 		// write inputted data into the file.
 		fout << data << endl;
 		}
 		// close the opened file.
 		fout.close();
 		// open a file in read mode.
 		ifstream fin;
 		fin.open(name);
 		if(!fin)
		 {
 			cout<<"Error opening file\n";
 			exit(1);
 		}
 			cout << "\n-->Reading from the file\n==::";
 		while(fin)
 		{
 		getline(fin,data);
 		// write the data at the screen.
 		cout << data << endl;
		}
 		// close the opened file.
 		fin.close();
 		return 0;
};

/*
OUTPUT
-->Enter name of file to be created
==::MIT pune

-->Writing to the file which you have created
   Enter contents for file end with (end*)
==::MIT PUNE INDIA
rg rsg
g rg rg re
 gregg
 rgre
g erg
er gre
gre ger
g erg
 er
end*

-->Reading from the file
==:: pune
MIT PUNE INDIA
rg rsg
g rg rg re
 gregg
 rgre
g erg
er gre
gre ger
g erg
 er


--------------------------------
Process exited after 24.84 seconds with return value 0
Press any key to continue . . .*/

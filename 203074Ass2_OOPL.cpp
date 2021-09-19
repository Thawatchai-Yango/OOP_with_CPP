/*
 * Calculator.cpp
 *
 *  Created on: 18-Jul-2017
 *  Author: thawatchai yango SE COMP B
 *  Roll No:203074 BATCH E
 *  Assignment 1
 *  Problem Statement
 *  Write a C++ program create a calculator for a arithmetic operator (+,-,*,/0. The program
 *  sould take two operads from user and performs the operation on those two operands
 *  depending upon the operator entered by user. Use a swtch statement to select the operaton.
 *  Finally, displa the result. Some sample interacton with the program might look like this
 */



#include<iostream>
using namespace std;

class operate{
    
    long double a,b,result;
    
    char operand;
    public:
	void input(){
	cout<<"\n::::::::::::::::::::::::::WELCOME TO CALCULATOR:::::::::::::::::::::::::::::"; 
	cout<<"  \n\n ENTER THE FIRST NUMBER";
	cout<<", ENTER THE OPERATOR";
	cout<<" AND ENTER THE SECOND NUMBER\n";
	cout<<"\n EXAMPLE ( 2+2 , 2-2, 2*2, 2/2 etc.)\n";
	cout<<"\n ENTER HERE:::";
		cin>>a>>operand>>b;
		
	
	
	}
	void op(){
	switch(operand){
	     case('+'):
	     result = a+b;
	     cout<<"\n THE RESULT OF ADDITION IS::: " <<result <<"\n";
	     cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	break;
	case('-'):
	     result = a-b;
	     cout<<"\n THE RESULT OF SUBTRACTION IS::: " <<result <<"\n";
	     cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	break;
	case('*'):
	     result = a*b;
	     cout<<"\n THE RESULT OF MULTIPLICATON IS::: " <<result <<"\n";
	     cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	break;
	case('/'):
	     result = a/b;
	     cout<<"\n THE RESULT OF DIVITION IS::: " <<result <<"\n";
	     cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	break;
	default:
	    cout<<"\n ***THERE IS AN ERROR IN YOUR INPUTS!!!*** \n";
	     cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	break;
        }
	}
};
int main(){
    char cont;
    operate a;

   	 do {
		a.input();
		a.op();

		cout << "\n\n\n ***NEXT CALCULATON? y/n ***";
		cin >> cont;
	} while (cont == 'y');
	return 0;
}

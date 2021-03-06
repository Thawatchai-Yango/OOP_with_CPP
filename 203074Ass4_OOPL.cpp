
/*
 * complex number.cpp
 *
 *  Created on: 
 *  Author: thawatchai yango SE COMP B
 *  Roll No:203074 BATCH E
 *  Assignment 3
 *  Problem Statement
 *  Problem Statement: Implement a class Complex which represents the Complex Number data type. Implement the following operations:
 *  1. Constructor (including a default constructor which creates the complex number 0+0i).
 *  2. Overloaded operator+ to add two complex numbers.
 *  3. Overloaded operator* to multiply two complex numbers.
 *  4. Overloaded << and >> to print and read Complex Numbers.
 */
#include<iostream>
using namespace std;
class Complex
{
    float real,img;
public:
//Constructor
Complex()
{
    real=0;
    img=0;
}
Complex(float a,float b)
{
    real=a;
    img=b;
}
//Addition of two complex numbers
Complex operator+(Complex c1)
{
    Complex temp;
    temp.real=real+c1.real;
    temp.img=img+c1.img;
    return temp;
}
//Subtraction of two complex numbers
Complex operator-(Complex c1)
{
    Complex temp;
    temp.real=real-c1.real;
    temp.img=img-c1.img;
    return temp;
}
//Multiplication of two complex numbers
Complex operator*(Complex c1)
{
    Complex temp;
    temp.real=(real*c1.real)-(img*c1.img);
    temp.img=(img*c1.real)+(real*c1.img);
    return temp;
}

//overloaded insertion (<<) opertor for class Complex
    friend ostream &operator<<(ostream &out, Complex &c)
    {
        out << c.real<<" + "<< c.img<<" i";;
        return out;
    }

//overloaded extraction (>>) opertor for class Complex

    friend istream &operator>>(istream &in, Complex &c)
    {
        in>> c.real>>c.img;
        return in;
    }

};


int main()
{
Complex c1,c2,c3;
int choice;
char ans;
do
{
cout<<"\n  :::::::::WELCOME TO COMPLEX NUMBER CALCULATOR:::::::::::"; 
cout<<"\n  ::                              \t\t\t::";
cout<<"\n  ::      1.ADDITION              \t\t\t::";                                    
cout<<"\n  ::      2.SUBTRACTION           \t\t\t::";
cout<<"\n  ::      3.MULTIPLICATON         \t\t\t::";
cout<<"\n  ::                              \t\t\t::";
cout<<"\n  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

cout<<"\n\n      ENTER YOUR CHOICE:: ";
cin>>choice;
cout<< "\n      ENTER THE (REAL) AND (IMG) PART OF THE FIRST COMPLEX NUMBER\n";
                cin>>     c1;
cout<< "\n      ENTER THE (REAL) AND (IMG) PART OF THE SECOND COMPLEX NUMBER\n";
                cin>>     c2;
switch(choice)
{
case 1:
    c3=c1+c2;
    cout<<"\n\n      ADDITION OF COMPLEX NUMBER IS:: ";
    cout<<c3;
break;
case 2:
    c3=c1-c2;
    cout<<"\n\n      SUBTRACTION OF COMPLEX NUMBER IS: ";
    cout<<c3;
break;
case 3:
    c3=c1*c2;
    cout<<"\n\n      MULTIPLICATON OF COMPLEX NUMBER IS: ";
    cout<<c3;
break;
default:    
    cout<<"\n\n      ***WRONG CHOICE ";
}
    cout<<"\n\n      ***NEXT CALCULATION??(y/n): ";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
return 0;
}



/*
  :::::::::WELCOME TO COMPLEX NUMBER CALCULATOR:::::::::::
  ::                                                    ::
  ::      1.ADDITION                                    ::
  ::      2.SUBTRACTION                                 ::
  ::      3.MULTIPLICATON                               ::
  ::                                                    ::
  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::

      ENTER YOUR CHOICE:: 1

      ENTER THE (REAL) AND (IMG) PART OF THE FIRST COMPLEX NUMBER
6
9

      ENTER THE (REAL) AND (IMG) PART OF THE SECOND COMPLEX NUMBER
3
7


      ADDITION OF COMPLEX NUMBER IS:: 9 + 16 i

      ***NEXT CALCULATION??(y/n): y

  :::::::::WELCOME TO COMPLEX NUMBER CALCULATOR:::::::::::
  ::                                                    ::
  ::      1.ADDITION                                    ::
  ::      2.SUBTRACTION                                 ::
  ::      3.MULTIPLICATON                               ::
  ::                                                    ::
  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::

      ENTER YOUR CHOICE:: 2

      ENTER THE (REAL) AND (IMG) PART OF THE FIRST COMPLEX NUMBER
8
2

      ENTER THE (REAL) AND (IMG) PART OF THE SECOND COMPLEX NUMBER
9
3


      SUBTRACTION OF COMPLEX NUMBER IS: -1 + -1 i

      ***NEXT CALCULATION??(y/n): y

  :::::::::WELCOME TO COMPLEX NUMBER CALCULATOR:::::::::::
  ::                                                    ::
  ::      1.ADDITION                                    ::
  ::      2.SUBTRACTION                                 ::
  ::      3.MULTIPLICATON                               ::
  ::                                                    ::
  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::

      ENTER YOUR CHOICE:: 3

      ENTER THE (REAL) AND (IMG) PART OF THE FIRST COMPLEX NUMBER
3
5

      ENTER THE (REAL) AND (IMG) PART OF THE SECOND COMPLEX NUMBER
6
3


      MULTIPLICATON OF COMPLEX NUMBER IS: 3 + 39 i

      ***NEXT CALCULATION??(y/n): y

  :::::::::WELCOME TO COMPLEX NUMBER CALCULATOR:::::::::::
  ::                                                    ::
  ::      1.ADDITION                                    ::
  ::      2.SUBTRACTION                                 ::
  ::      3.MULTIPLICATON                               ::
  ::                                                    ::
  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::

      ENTER YOUR CHOICE:: */

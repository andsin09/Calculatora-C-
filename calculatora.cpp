/**
* Name: Andrew Sinha
* Program Name: Calculator Apper
* Date: 9.12.24
* Extra: If Else statement to do subtraction division and moddulusing stuff.
*/


#include <iostream>
using namespace std;

//variable declaration
float x, y;
float addd, subt, divi, mult, modd, incrx, incry;
int main()
{

//inputs
cout << "Type a number: "; 
cin >> x;
cout<< "Type another number:";
cin >> y;

//do the first
addd = x+y;

//for subtracting, dividing, and doing the modulus. 
//x by y

if(x>y){
    subt = x-y;
    divi = x/y;
    modd = (int)x%(int)y;
}

//y by x

else{
    subt = y-x;
    divi = y/x;
    modd = (int)y%(int)x;
}

//and do the rest
mult = x*y;
incrx = ++x;
incry = ++y;

//printer
cout << "Your numbers added together is " << addd << "\n";
cout << "Your numbers subtracted (smallest from largest) is " << subt << "\n";
cout << "Your numbers multiplied is " << mult << "\n";
cout << "Your numbers divided (largest by smallest) is " << divi << "\n";
cout << "Your numbers modulused (largest by smallest) is " << modd << "\n";
cout << "Your number 1 incremented is " << incrx << "\n";
cout << "Your number 2 incremented is " << incry << "\n";

}
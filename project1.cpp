// Author: Angel Ng
// Uniqname: angelng
// Date: 9/19/18
// Lab Section: 
// Project #: 1

// File: project1.cpp
// Compiler: g++

// Program Description:
// This program converts an 8-bit binary sequence into
// a signed integer using basic operations 

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
  string binary;
  int digit, unsignedNum = 0, signedNum = 0; 

  //open file 
  ifstream infile;
  infile.open("binary_number.txt");
  
  infile >> digit;
  
  unsignedNum += digit*pow(2,7);

  infile >> digit;
  unsignedNum += digit*pow(2,6);

  infile >> digit;
  unsignedNum += digit*pow(2,5);

  infile >> digit;
  unsignedNum += digit*pow(2,4);

  infile >> digit;
  unsignedNum += digit*pow(2,3);

  infile >> digit;
  unsignedNum += digit*pow(2,2);

  infile >> digit;
  unsignedNum += digit*pow(2,1);

  infile >> digit;
  unsignedNum += digit*pow(2,0);

  infile.close();
  
  cout << "Unsigned integer is: " << unsignedNum; 
}

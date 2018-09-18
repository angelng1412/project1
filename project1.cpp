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
  int d1, d2, d3, d4, d5, d6, d7, d8; //variables for each digit of binary number
  int unsignedNum, signedNum = 0; //variables for outputs 

  //open file for reading
  ifstream infile;
  infile.open("binary_number.txt");

  //insert each digit into its corresponding variable 
  infile >> d1;
  infile >> d2;
  infile >> d3;
  infile >> d4;
  infile >> d5;
  infile >> d6;
  infile >> d7;
  infile >> d8;

  infile.close();
  
  //convert to unsigned decimal number 
  unsignedNum = d1*128 + d2*64 + d3*32 + d4*16 + d5*8 + d6*4 + d7*2 + d8;

  //convert to signed decimal number
  signedNum = (d1*(-1) * (3%(d1+2)*128 + 3%(d2+2)*64 + 3%(d3+2)*32 + 3%(d4+2)*16 + 3%(d5+2)*8 + 3%(d6+2)*4 + 3%(d7+2)*2 + 3%(d8+2))) - 1;

  //outputs to screen
  cout << "Binary number is: " << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << "\n"; 
  cout << "Unsigned integer is: " << unsignedNum << "\n";
  cout << "Signed integer is: " << signedNum << "\n";

  //open file for writing
  ofstream outfile;
  outfile.open("decimal_number.txt");
  outfile << signedNum; //write signed number to file 
  outfile.close();

  return 0; 
}

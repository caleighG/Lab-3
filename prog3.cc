// This program is suppose to read in two integer
// numbers num1 and num2, and prints out the two
// numbers and the  product of  num1 and num2.
// There are two compilation errors.
// Find and fix them.

/**
 * File: prog3.cc
 * Name: Caleigh Gillespie
 * Email: cg083718@ohio.edu
 * Date: 2022-09-16
 * 
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int num1;
  int num2;  
  
  cout <<" Enter two integers   ";
  cin >> num1 >> num2;
  
  cout<<" The product of "<< num1 << " and " << num2 << " is ";
    cout<< num1 * num2 << endl;

  return (EXIT_SUCCESS);
}

/* Author: Timothy Lim
   Program last changed 3rd August 2015*/

/* This program raises a number x to a non-negative integer power n. */ 

#include<iostream>
using namespace std;

int main(){

  double number = 0, answer = 0; 
  int power = 0, count = 1;

  /* prompt the user */
  cout << "This program raises a number x to a non-negative integer power n.\n\n";
  cout << "Please enter a number: ";
  cin >> number;
  cout << "To what power would you like it raised? ";
  cin >> power;
  cout << "\n";
 
  /* echo the input */
  cout << number << " raised to the power " << power << " is ";
  
  /* raise number to power */
  answer = 1;
  for (count = 0 ; count < power ; count++)
    answer *= number;
  
  /* print answer */
  cout << answer << ".\n";
  
  return 0;

}

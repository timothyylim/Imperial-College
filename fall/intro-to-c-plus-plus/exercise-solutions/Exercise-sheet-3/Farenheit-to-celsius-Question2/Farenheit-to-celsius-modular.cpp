/* C++ Programming, Example answer, Exercise 2, Sheet 3  */

/* Author: Rob Miller and William Knottenbelt
   Program last changed: 30th September 2001   */

/* This program prints out a conversion table of temperatures, after
prompting the user for upper and lower bounds of the table in Fahrenheit, 
and the temperature difference between table entries. */ 

#include <iostream>
#include "conversions.h"

using namespace std;

void print_preliminary_message();
void input_table_specifications(int& lowest_entry, int& highest_entry, int& step_size);
void print_message_echoing_input(int lowest_entry, int highest_entry, int step_size); 
void print_table(int lowest_entry, int highest_entry, int step_size); 

/* START OF MAIN PROGRAM */
int main() 
{
  int lower = 0;  /* for the lowest Fahrenheit entry in the table */
  int upper = 0;  /* for the highest Fahrenheit entry in the table */
  int step = 1;   /* for the difference in Fahrenheit between entries */

  /* print a message explaining what the program does: */
  print_preliminary_message();

  /* prompt the user for table specifications in Fahrenheit: */
  input_table_specifications(lower, upper, step);
  
  /* print an appropriate message including an echo of the input: */
  print_message_echoing_input(lower, upper, step);
  
  /* Print the table (including the column headings): */
  print_table(lower, upper, step);
  
  return 0;
}
/* END OF MAIN PROGRAM */

/* START OF FUNCTION */
void print_preliminary_message()
{
  cout << "This program prints out a conversion table of temperatures.\n\n";
}
/* END OF FUNCTION */


/* START OF FUNCTION */
void input_table_specifications(int& lowest_entry, int& highest_entry, int& step_size)
{
  cout << "Enter the minimum (whole number) temperature\n";
  cout << "you want in the table, in Fahrenheit: ";
  cin >> lowest_entry;
  cout << "Enter the maximum temperature you want in the table: ";
  cin >> highest_entry;
  cout << "Enter the temperature difference you want between table entries: ";
  cin >> step_size;
  cout << "\n\n";
}
/* END OF FUNCTION */


/* START OF FUNCTION */
void print_message_echoing_input(int lowest_entry, int highest_entry, int step_size)
{
  cout << "Tempertature conversion table from " << lowest_entry << " Fahrenheit\n";
  cout << "to " << highest_entry << " Fahrenheit, in steps of ";
  cout << step_size << " Fahrenheit:\n\n";
}
/* END OF FUNCTION */


/* START OF FUNCTION */
void print_table(int lowest_entry, int highest_entry, int step_size)
{
  int fahr; 

  /* Print table heading */
  cout.width(17);
  cout << "Fahrenheit";
  cout.width(13);
  cout << "Celsius" << "Absolute Value\n\n";

  /* set format of individual values */
  cout.precision(2); 
  cout.setf(ios::fixed); 

  /* print table from lowest_entry to highest_entry */
  for (fahr = lowest_entry ; fahr <= highest_entry ; fahr += step_size) {
    cout << "   ";
    cout.width(15);
    cout << fahr;
    cout.width(15);
    cout << celsius_of(fahr) << absolute_value_of(fahr) << "\n";
  }
}
/* END OF FUNCTION*/

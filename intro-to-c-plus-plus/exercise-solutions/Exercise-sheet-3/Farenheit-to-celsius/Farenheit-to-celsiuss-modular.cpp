/* This program prints out a conversion table of temperatures, after
   prompting the user for upper and lower bounds of the table in
   Fahrenheit, and the temperature difference between table entries. */ 

#include <iostream>
using namespace std;

/* START OF MAIN PROGRAM */
void print_preliminary_message();

int main() 
{
  int lower = 0; /* the lowest Fahrenheit entry in the table */
  int upper = 0; /* the highest Fahrenheit entry in the table */
  int step = 1;  /* difference in Fahrenheit between entries */

  /* print a message explaining what the program does: */
  print_preliminary_message();
  
  /* prompt the user for table specifications in Fahrenheit: */
  input_table_specifications(lower, upper, step);
  
  /* print appropriate message including an echo of the input: */
  print_message_echoing_input(lower, upper, step);
  
  /* Print the table (including the column headings): */
  print_table(lower, upper, step);

  return 0;
}
/* END OF MAIN PROGRAM */

/* FUNCTION TO PRINT PRELIMINARY MESSAGE */
void print_preliminary_message(){
  cout << "This program prints out a conversion table of temperatures.\n"
}  
/* END OF FUNCTION */


/* FUNCTION TO CONVERT FAHRENHEIT TO CELSIUS */
double celsius_of(int fahr)
{
  return (static_cast<double>(5)/9) * (fahr - 32);
}
/* END OF FUNCTION */

/* FUNCTION TO CONVERT FAHRENHEIT TO ABSOLUTE VALUE */
double absolute_value_of(int fahr)
{
  return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
}
/* END OF FUNCTION */

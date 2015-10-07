// The C++ compiler ignores comments which start with 
// double slashes like this, up to the end of the line.  
 
/* Comments can also be written starting with a slash 
 followed by a star, and ending with a star followed by
 a slash. As you can see, comments written in this way 
 can span more than one line. */ 

/* Programs should ALWAYS include plenty of comments! */ 

/* Author: Rob Miller and William Knottenbelt 
 Program last changed: 30th September 2001 */ 
 
/* This program prompts the user for the current year, the user's 
current age, and another year. It then calculates the age 
that the user was or will be in the second year entered. */ 
 
#include <iostream> 

using namespace std; 

int main() 
{ 
	int year_now, age_now, another_year, another_age; 
 
	cout << "Enter the current year then press RETURN.\n"; 
	cin >> year_now; 
 
	cout << "Enter your current age in years.\n"; 
	cin >> age_now; 
 
	cout << "Enter the year for which you wish to know your age.\n";
	cin >> another_year; 
 
	another_age = another_year - (year_now - age_now); 
 
	if (another_age >= 0) {
		cout << "Your age in " << another_year << ": "; 
		cout << another_age << "\n";
	} else { 
		cout << "You weren't even born in ";
		cout << another_year << "!\n"; 
	}

	return 0; 
}
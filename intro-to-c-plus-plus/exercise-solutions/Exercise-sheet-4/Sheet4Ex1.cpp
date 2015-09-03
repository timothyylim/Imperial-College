/* C++ Programming, Example answer, Exercise 1, Sheet 4  */

/* Author: Rob Miller and William Knottenbelt
   Program last changed: 30th September 2001    */

/* This program outputs itself to the screen. */

/* IMPORTANT: TO GUARANTEE THAT THIS PROGRAM RUNS, PUT THE PROJECT 
   DOCUMENT (FILE) IN THE SAME FOLDER/DIRECTORY AS THIS FILE        */

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  char character;
  ifstream in_stream;
  
  in_stream.open("Sheet4Ex1.cpp");
  
  in_stream.get(character);
  
  for ( ; ! in_stream.fail() ; ) /* alternative: while (! in_stream.eof()) */
    {
      cout << character;
      in_stream.get(character);
    }
  
  in_stream.close();
  
  return 0;
}

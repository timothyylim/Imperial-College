#include <iostream>
#include <typeinfo>
#include<cstring>

using namespace std;

bool is_prefix(char* a, char* b);
bool is_prefix(char a[], char b[], int n);
bool subString(char a[], char b[], int n, int n2);
bool subString(char a[], char b[], int n, int n2);

int main() {

  char a[]="karlson";
  char b[]="jack";
  char c[]="karlso is karlson gay karlson ";

  cout << subString(a,c,7,30)<<endl;


  /*                                                                                                                                                                                                        
  cout << substring_position("this", "this is a simple exercise") << endl;                                                                                                                                  
  cout << substring_position("is", "this is a simple exercise") << endl;                                                                                                                                    
  cout << substring_position("is a", "this is a simple exercise") << endl;                                                                                                                                  
  cout << substring_position("is an", "this is a simple exercise") << endl;                                                                                                                                 
  cout << substring_position("exercise", "this is a simple exercise") << endl;                                                                                                                              
  cout << substring_position("simple exercise", "this is a simple") << endl;                                                                                                                                
  cout << substring_position("", "this is a simple exercise") << endl;                                                                                                                                      
  cout << substring_position("", "") << endl;                                                                                                                                                               
  */
  return 0;
}



bool is_prefix(char* a, char* b){
  return *a==*b? true : false;
}

bool is_prefix(char a[], char b[], int n){
  char* ptr = a;
  char* ptr2 = b;

  if(n==1){
    return is_prefix(a,b);
  }
  if(n>1){
    if(*(ptr)==*(ptr2)){
      ptr++;
      ptr2++;
      return is_prefix(ptr,ptr2,n-1);
    }else{
      return false;
    }
  }
  return false;
}

bool subString(char a[], char b[], int n, int n2){
  char* ptr = a;
  char* ptr2 = b;

  if(n2<n){
    return false;
  }

  if(is_prefix(ptr,ptr2,n)){
    return true;
  }else{
    return subString(ptr,++ptr2,n,--n2);
  }
  return false;
}
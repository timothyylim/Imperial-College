#include <iostream>
#include<cstring>
#include<cctype>
#include<fstream>

using namespace std;

int findFirstVowel(char a[]);
void translateWord(char a[],char b[]);
void copyWord(char a[], char b[]);
void addWord(char a[],char b[], int n);
bool translateStream(ifstream& inputStream, ofstream& outputStream);

int main()
{
  ifstream in_stream; 
	ofstream out_stream;
	in_stream.open("words");
	out_stream.open("pigLatin");
  char a[65];
  a[0]='y';
  a[1]='e';
  a[2]='t';
  a[3]='i';
  a[4]='\0';
  char b[50];
  // char d[]="hello";
  // int k=strlen(c);
  // copyWord(c,b);
  // cout<<b<<endl;
  // addWord(b,d,k);
  // cout<<b<<endl;
  translateWord(a,b);
  cout<<b<<endl;
  translateStream(in_stream,out_stream);
  return 0;
}

void translateWord(char a[],char b[]){
  int firstV=findFirstVowel(a);
  int size=strlen(a);
  char way[]="way";
  char ay[]="ay";
  cout<< firstV<<endl;
  if(a[0]>='0'&&a[0]<='9'){
    copyWord(a,b);}
  else if (firstV==0){
    copyWord(a,b);
    addWord(b,way,size);
  }else if(firstV==-1){
    copyWord(a,b);
    addWord(b,ay,size);
        
  }else{

    int k=0;
    for(int i=firstV;i<(size+firstV);i++){
      b[k]=a[i%size];
      k++;
      addWord(b,ay,size);
    }
  }
}

void copyWord(char a[], char b[]){
  int n=strlen(a);
  int i=0;
  for(i=0; i<n;i++){
    b[i]=a[i];
  }
}

void addWord(char a[],char b[], int n){
  int k=0;
  int i=0;
  for(i=n;i<(n+strlen(b));i++){
    a[i]=b[k];
    k++;
  }
  a[i]='\0';
}

int findFirstVowel(char a[]){
  char b[]="aeiouy";
  char c[]="aeiou";
  int length=strlen(a);
    
  for(int i=0;i<length;i++){
    if(i==0||i==(strlen(a)-1)){
      for(int j=0;j<strlen(c);j++){
	if(a[i]==c[j])
	  return i;
      }
    }
    else{
      for(int j=0;j<strlen(b);j++){
	cout<<"a"<<a[i]<<endl;
	cout<<"b"<<b[j]<<endl;

	if(a[i]==b[j])
	  return i;
      }
    }
  }
  return -1;
}

bool translateStream(ifstream& inputStream, ofstream& outputStream){
  char words[65];
  char temp[65];
  if(inputStream.eof()){
    return true;
  }else{
    inputStream>>words;
    translateWord(words,temp);
    outputStream<<temp<<endl;
    translateStream(inputStream,outputStream);
  }
  return false;
}

#include <iostream>
#include<cstring>

using namespace std;

char* clean(char a[]);
char* reverse(char a[]);
bool compare(char a[], char b[]);
bool compareRecursive(char a[], char b[]);
bool palindrome(char a[]);
void quick_sort(char list[], int left, int right);

int main()
{
    char c[]="Madam, I 'm Adam";
	return 0;
}

char* clean(char a[]){
    int length = strlen(a);
    int spaces=0;
    int punct=0;
    for(int i=0;i<length;i++){
        if(a[i]==' '){spaces++;}
        if(a[i]>='!'&&a[i]<='/'){punct++;}
        if(a[i]>='A'&&a[i]<='Z'){a[i]=a[i]+32;}
    }
    
    int length2=length-spaces;
    char* temp= new char[length2+1];
    int k=0;
    for(int i=0; i<length;i++){
        if(a[i]==' '){continue;}
        else if(a[i]>='!'&&a[i]<='/'){continue;}
        else{
            temp[k]=a[i];
            k++;
        }
    }
    temp[length2]='\0';
    return temp;
}

char* reverse(char a[]){
  int n=strlen(a);
  
  char* temp = new char[n+1]; 
  for(int i=0;i<n;i++){
    temp[i]=a[(n-1)-i];
    cout<<temp[i]<<endl;
  }
 
  temp[n]='\0';

  return temp;
}

bool compare(char a[], char b[]){
    char* x= clean(a);
    char* y= clean(b);
    
    if(strlen(x)!=strlen(y)){return false;}
    
    return  compareRecursive(x,y);
}

bool compareRecursive(char a[], char b[]){
    if(strlen(a)==1)
        {return a[0]==b[0] ? true : false;}
    if(strlen(a)>1){
        if(a[0]==b[0]){return compareRecursive(++a,++b);}
        else{return false;}
    }
}

bool palindrome(char a[]){
    char* x=a;
    char* y=reverse(a);
    return compare(x,y);
}

void quick_sort(char list[], int left, int right)
{
	char pivot;
	int left_arrow, right_arrow;

	left_arrow = left;
	right_arrow = right;
	pivot = list[(left + right)/2];

	do
	{
		while (list[right_arrow] > pivot)
			right_arrow--;
		while (list[left_arrow] < pivot)
			left_arrow++;
		if (left_arrow <= right_arrow)
		{
			swap(list[left_arrow], list[right_arrow]);
			left_arrow++;
			right_arrow--;
		}
	}
	while (right_arrow >= left_arrow);

	if (left < right_arrow)
		quick_sort(list, left, right_arrow);
	if (left_arrow < right)
		quick_sort(list, left_arrow, right);
}
	
void swap(char& first, char& second)
{
	char temp = first;
	first = second;
	second = temp;
}


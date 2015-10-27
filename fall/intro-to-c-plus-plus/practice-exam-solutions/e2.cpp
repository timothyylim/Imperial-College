#include <iostream>
#include<cstring>

using namespace std;

char* clean(char a[]);
bool compare(char a[], char b[]);
bool compareRecursive(char a[], char b[]);
char* encode(char a[]);
bool ignored(char a);
bool code1(char a);
bool code2(char a);
bool code3(char a);
bool code4(char a);
bool code5(char a);
bool code6(char a);

int main()
{
    char c[]="washington";
    char i[]="jackson";
    char n[]="lee";
    
    char* a=encode(c);
    char* b=encode(i);
    
    std::cout << compare(a,b) << std::endl;
    
	return 0;
}

char* encode(char a[]){
    int length = strlen(a);
    int spaces=0;
    int ignoreLetters=0;
    char* soundex=new char[5];
    soundex[0]=a[0];
    soundex[1]='0';
    soundex[2]='0';
    soundex[3]='0';
    soundex[4]='\0';
    int i=1;
    int k=1;
    int flag=0;
    while (i<4 && k<length){
        if(code1(a[k])&&flag!=1){
            // std::cout << "1" << std::endl;
            soundex[i]='1';
            flag=1;
            i++;
        }
        else if(code2(a[k])&&flag!=2){
            // std::cout << "2" << std::endl;
            soundex[i]='2';
            flag=2;
            i++;
            
        }
        else if(code3(a[k])&&flag!=3){
            // std::cout << "3" << std::endl;
            soundex[i]='3';
            flag=3;
            i++;
            
        }
        else if(code4(a[k])&&flag!=4){
            // std::cout << "4" << std::endl;
            soundex[i]='4';
            flag=4;
            i++;
            
        }
        else if(code5(a[k])&&flag!=5){
            // std::cout << "5" << std::endl;
            soundex[i]='5';
            flag=5;
            i++;
            
        }
        else if(code6(a[k])&&flag!=6){
            // std::cout << "6" << std::endl;
            soundex[i]='6';
            flag=6;
            i++;
        }
        else if(ignored(a[k])){
            // std::cout << "0" << std::endl;
            flag=0;
            k++;
            continue;
        }
        k++;
    }
    return soundex;
}

bool ignored(char a){
    if(a=='a'||a=='e'||a=='h'||a=='i'||a=='o'||a=='u' || a=='w'||a=='y'){return true;}
    return false;
}

bool code2(char a){
    if(a=='c'||a=='g'||a=='j'||a=='k'||a=='q'||a=='s' || a=='x'||a=='z'){return true;}
    return false;
}

bool code1(char a){
    if(a=='b'||a=='f'||a=='p'||a=='v'){return true;}
    return false;
}

bool code3(char a){
    if(a=='d'||a=='t'){return true;}
    return false;
}

bool code4(char a){
    if(a=='l'){return true;}
    return false;
}

bool code5(char a){
    if(a=='m'||a=='n'){return true;}
    return false;
}

bool code6(char a){
    if(a=='r'){return true;}
    return false;
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

//q3 looks quite look dull, just have to seperate all the words with that starts with L and use compare
/* Problem Statement 2:
The Secret Code In the kingdom of Numeria, every royal message is protected by a secret code. A valid code is a string containing
only letters and digits. The royal guards have discovered that a code is considered Strong if:  It contains at least 8 characters. 
It contains at least one uppercase letter.  It contains at least one lowercase letter.  It contains at least one digit. 
Your task is to write a C++ program to determine whether a given secret code is strong enough. Input  A single line containing 
the secret code.  The code may contain uppercase letters, lowercase letters, and digits. 
In output print:  "Strong Code" if the code satisfies all four conditions.  "Weak Code" otherwise. 
Example 1 Input: Dragon2026 
Output: Strong Code 
Example 2 Input: dragon123 
Output: Weak Code 
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int i,uc=0,lc=0,d=0;
    cout<<"ENTER CODE"<<endl;
    getline(cin,str);
    if(str.length()<8){
        cout<<"INVALID"<<endl;
    }
    for(i=0;str[i]!='\0';i++){
           if(str[i]>='A' && str[i]<='Z'){
            uc++;
           }
           if(str[i]>='a' && str[i]<='z'){
            lc++;
           }
           if(str[i]>='0' && str[i]<='9'){
            d++;
           }
           
           
    }
    if(uc && lc && d){
        cout<<"STRONG CODE"<<endl;
    }
    else{
        cout<<"WEAK CODE"<<endl;
    }
    return 0;
}
Implement a C++ program to find the non-repeating characters in string.



#include <iostream>
 using namespace std;
 int main()
 {
     char str[100];
     char ch;
     int i, j, count;
     cout<<"Enter the string: ";
     cin.getline(str, 100);
     cout << "Non-repeating characters are: ";
     for( ch = 'a'; ch <= 'z'; ch++)
     {
         count = 0;
         for(i = 0; str[i] != '\0'; i++)
         {
             if(str[i] == ch)
                 count++;
         }
         if(count == 1)
             cout << ch << " ";
     }
 return 0;
 }

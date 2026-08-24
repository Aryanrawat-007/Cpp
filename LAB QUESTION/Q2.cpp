 Construct a C++ program that removes a specific character from a given string and return the updated string. 

 
 #include <iostream>
 using namespace std;
  
 int main()
 {
     char str[100], ch;
     int i, j;
  
     cout << "Enter a string: ";
     cin.getline(str, 100);
  
     cout << "Enter the character to remove: ";
     cin >> ch;
  
     for(i = 0, j = 0; str[i] != '\0'; i++)
     {
         if(str[i] != ch)
         {
             str[j] = str[i];
             j++;
         }
     }
  
     str[j] = '\0';
  
     cout << "String after removing character: " << str << endl;
  
     return 0;
 }

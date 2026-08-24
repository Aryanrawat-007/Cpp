
Implement a C++ program to demonstrate the concept of data abstraction using the concept of Class and Objects.


#include<iostream>
 using namespace std;
  
 class student
 {
     int id;
     string name;
  
 public:
     void show()
     {
         cout << id << "\t" << name << endl;
     }
 
     void setDetails(int id, string name)
     {
         this->id = id;
         this->name = name;
     }
 };
  
 int main()
 {
     int NOS, i;
     int id;
     string name;
  
     cout << "Enter the number of students: ";
     cin >> NOS;
  
     student s[NOS];
  
     for(i = 0; i < NOS; i++)
     {
         cout << "Enter details for student " << i + 1 << endl;
  
         cout << "Enter id: ";
         cin >> id;
  
         cout << "Enter name: ";
         cin >> name;
  
         s[i].setDetails(id, name);
     }
  
     cout << "\nID\tNAME" << endl;
  
     for(i = 0; i < NOS; i++)
     {
         s[i].show();
     }
  
     return 0;
 }

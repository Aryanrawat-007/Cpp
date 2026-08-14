/*In the kingdom of Draconia, a powerful dragon protects a collection of magical energy crystals. Each crystal contains a certain 
amount of energy represented by a positive integer. The dragon needs to inspect the crystals and determine whether their combined 
energy is sufficient to activate an ancient protective shield. The shield can be activated only if the following three conditions
are satisfied: 1. The total energy of all crystals is at least 100. 2. The number of crystals containing more than 20 units of
energy is at least two. 3. No crystal can contain 0 or negative energy. Assume each crystal contains between 1 and 100 units of
energy while giving input. Write a C++ program to determine whether the dragon can activate the protective shield. 
Input  The first line contains an integer N, representing the number of energy crystals. 1 2   The second line contains N 
positive integers representing the energy stored in each crystal. 
Output  "Shield Activated" if all the conditions are satisfied.  "Shield Not Activated" otherwise. 
Example 1 Input: 5 25 30 15 20 25 
Output: Shield Activated Explanation:  Total energy = 25 + 30 + 15 + 20 + 25 = 115  At least two crystals contain more than 20 
energy.  All crystal values are positive. Therefore, the shield is activated.  
Example 2 Input: 4 10 15 20 25 Output: Shield Not Activated Explanation:  Total energy = 70, which is less than 100.  Only one
crystal contains more than 20 energy. Therefore, the shield cannot be activated. */
#include<iostream>
using namespace std;
int main(){
    int str[100],i,n,energy=0,count=0;
    cout<<"ENTER NUMBER "<<endl;
    cin>>n;

    cout<<"ENTER INPUT "<<endl;
    for(i=0;i<n;i++){
        cin>>str[i];
    }
    for(i=0;i<n;i++){
        
        energy+=str[i];
        
        if(str[i]>20){
            count++;
        }
    }
        if(energy<0){
            cout<<"INVAILD"<<endl;
        }
        else if(energy>100 && count>2){
            cout<<"SHIELD ACTIVATED "<<endl;
        }
        else{
            cout<<"SHIELD NOT ACTIVATED "<<endl;
        }
    
    return 0;
}

Define a class Hotel in C++ with the following specifications-
Private members:
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the value of days* Tariff >10000, then total amount is 1.05* days*Tariff.
Public members:
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff, NOD and Amount (amount to be displayed by calling function) CALC()



#include<iostream>
#include<string>
using namespace std;
class Hotel
{
    int RNo;
    string name;
    int tariff;
    int NOD;
    int CALC()
    {
        return NOD*tariff;
    }
public:
    void checkIn(int RNo, string name , int tariff, int NOD)
    {
        this->RNo=RNo;
        this->name=name;
        this->tariff=tariff;
        this->NOD=NOD;
    }
    void checkOut()
    {
        int amount;
        amount=CALC();
        if (amount>10000)
        {
            amount*=1.05;
        }
        cout<<RNo<<"\t "<<name<<"\t "<<tariff<<"\t "<<NOD<<"\t"<<amount<<endl;
    }
};
int main()
{
int i,NOC;
    int RNo,tariff,NOD;
    string name;
    cout<<"Enter the number of customers: ";
    cin>>NOC;
    Hotel H[NOC];
    for(i=0;i<NOC;i++)
    {
        cout<<"Enter customer "<<i+1<<endl;
        cout<<"Enter the room number: ";
        cin>>RNo;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter tariff:";
        cin>>tariff;
        cout<<"Enter Number of Days: ";
        cin>>NOD;
        H[i].checkIn(RNo,name,tariff,NOD);
    }
    cout<<"Room No."<<"\t"<<"Name"<<"\t"<<"Tariff"<<"\t"<<"No. of days"<<"\t"<<"Amount"<<endl;
    for(i=0;i<NOC;i++)
    {
  H[i].checkOut();
    }
return 0;
}

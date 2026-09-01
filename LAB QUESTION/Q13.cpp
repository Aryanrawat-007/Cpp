13.Create class SavingsAccount. Use a static variable annualInterestRate to store the annual interest rate for all account holders. Each object of 
the class contains a private instance variable savingsBalance indicating the amount the saver currently has on deposit. Provide method 
calculateMonthlyInterest() to calculate the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12 This interest 
should be added to savingsBalance. 
Provide a static method modifyInterestRate() that sets the annualInterestRate to a new value. 
Write a program to test class SavingsAccount. Instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, 
respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances for both savers. Then set the 
annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers.

#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount {
private:
    double savingsBalance;              
    static double annualInterestRate;    

public:
    SavingsAccount(double balance) {
        savingsBalance = balance;
    }

    void calculateMonthlyInterest() {
        double monthlyInterest = (savingsBalance * annualInterestRate) / 12.0;
        savingsBalance += monthlyInterest;
    }

    void displayBalance() const {
        cout << fixed << setprecision(2);
        cout << "Balance: Rs. " << savingsBalance << endl;
    }

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main() {
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    cout << "After applying 4% annual interest rate:\n";
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver1 "; saver1.displayBalance();
    cout << "Saver2 "; saver2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05);

    cout << "\nAfter applying 5% annual interest rate:\n";
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver1 "; saver1.displayBalance();
    cout << "Saver2 "; saver2.displayBalance();

    return 0;
}

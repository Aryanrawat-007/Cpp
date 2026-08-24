
Implement a Program in C++ by defining a class to represent a bank account. Include the following: 
Data Members ● Name of the depositor ● Account number ● Type of account (Saving, Current etc.) ● Balance amount in the account 
Member Functions ● To assign initial values ● To deposit an amount ● To withdraw an amount after checking the balance ● To display name and balance


#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    int accNo;
    string accType;
    float balance;

public:
    void assignValues(string name, int accNo, string accType, float balance)
    {
        this->name = name;
        this->accNo = accNo;
        this->accType = accType;
        this->balance = balance;
    }

    float deposit(float amount)
    {
        balance += amount;
        return balance;
    }

float withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            return balance;
        }
        return -1;
    }

    void display()
    {
        cout << "\nName : " << name;
        cout << "\nAccount Number : " << accNo;
        cout << "\nAccount Type : " << accType;
        cout << "\nBalance : Rs. " << balance << endl;
    }
};

int main()
{
    int n, i, choice, index;
    string name, accType;
    int accNo;
    float balance, amount, result;

    cout << "Enter number of accounts: ";
    cin >> n;

    BankAccount acc[n];

    for (i = 0; i < n; i++)
    {
        cin.ignore();

        cout << "\nEnter details of Account " << i + 1 << endl;

        cout << "Enter Name: ";
    
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Account Type: ";
        cin >> accType;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        acc[i].assignValues(name, accNo, accType, balance);
    }

    do
    {
        cout << "\n\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display All Accounts";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Account Index (0 to " << n - 1 << "): ";
            cin >> index;

            cout << "Enter Amount to Deposit: ";
            cin >> amount;

            result = acc[index].deposit(amount);

            cout << "Updated Balance = Rs. " << result << endl;
            break;

     case 2:
            cout << "Enter Account Index (0 to " << n - 1 << "): ";
            cin >> index;

            cout << "Enter Amount to Withdraw: ";
            cin >> amount;

            result = acc[index].withdraw(amount);

            if (result == -1)
                cout << "Insufficient Balance" << endl;
            else
                cout << "Updated Balance = Rs. " << result << endl;

            break;

        case 3:
            for (i = 0; i < n; i++)
            {
                cout << "\n\nAccount " << i + 1;
                acc[i].display();
            }
            break;

        case 4:
            cout << "Program Ended" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
        }

    } while (choice != 4);

    return 0;
}


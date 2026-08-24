An electricity board charges the following rates to domestic users to discourage large consumption of energy. For the first 100 units: - 60 P per 
unit For the next 200 units: -80 P per unit Beyond 300 units: -90 P per unit All users are charged a minimum of Rs 50. If the total amount is more 
than Rs 300 then an additional surcharge of 15% is added. Implement a C++ program to read the names of users and number of units consumed and display
 the charges with names.


 
#include <iostream>
#include <string>
using namespace std;
const int MAX_USERS = 100;
class Users {
    string name;
    int units;
    float bill;

public:
    void setDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter units consumed: ";
        cin >> units;
    }

    void calculateBill() {
        if (units <= 100) {
            bill = units * 0.60;
        } 
        else if (units <= 300) {
            bill = (100 * 0.60) + ((units - 100) * 0.80);
        } 
        else {
            bill = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
        }
        bill += 50; // Minimum charge
        if (bill > 300) {
            bill += bill * 0.15; // Surcharge
        }
    }

    void display() const {
        cout << "\nName : " << name;
        cout << "\nUnits: " << units;
        cout << "\nBill : Rs. " << bill << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of users: ";
    cin >> n;
    if (n > MAX_USERS) {
        cout << "Error: Maximum allowed users is " << MAX_USERS << endl;
        return 1;
    }
    Users arr[MAX_USERS];
    for (int i = 0; i < n; i++) {
        cout << "\nUser " << i + 1 << endl;
        arr[i].setDetails();
        arr[i].calculateBill();
    }
    cout << "\n--- User Bill Summaries ---" << endl;
    for (int i = 0; i < n; i++) {
        arr[i].display();
    }
    return 0;
}


12.Create a class called Time that has separate int member data for hours,minutes and seconds. One constructor should initialize this data to 0, 
andanother should initialize it to fixed values. A member function should displayit in 11:59:59 format. A member function named add() should add 
two objects of type Time passed as arguments. A main() program should createtwo initialized values together, leaving the result in the third time 
variable.Finally it should display the value of this third variable.

#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor to initialize 0
    Time() {
        hours = minutes = seconds = 0;
    }

    // Constructor to initialize fixed values
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Display time in hh:mm:ss format
    void display() const {
        // Print hours
        if (hours < 10) cout << "0";
        cout << hours << ":";
        // Print minutes
        if (minutes < 10) cout << "0";
        cout << minutes << ":";
        // Print seconds
        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }

    void add(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        hours   = t1.hours   + t2.hours   + (minutes / 60);

        seconds %= 60;
        minutes %= 60;
        hours   %= 24; // keep within 24-hour format
    }
};

int main() {
    // Two initialized times
    Time t1(5, 45, 50);
    Time t2(6, 30, 20);

    // Third object to store result
    Time t3;

    // Add two times
    t3.add(t1, t2);

    // Display result
    cout << "Time 1: "; t1.display();
    cout << "Time 2: "; t2.display();
    cout << "Sum   : "; t3.display();

    return 0;
}

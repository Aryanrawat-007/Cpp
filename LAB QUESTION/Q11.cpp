
11. Imagine a tollbooth with a class called TollBooth.The two data items are of type unsigned int and double to hold the total number of cars and 
total amount of money collected.A constructor initializes both of these data members to 0. A member function called payingCar()increments the car 
total and adds 0.5 to the cash total.Another function called nonPayCar() increments the car total but adds nothing to the cash total. Finally a 
member function called display()shows the two totals. Include a program to test this class.This program should allow the user to push one key to 
count a paying car and another to count a non paying car. Pushing the ESC key should cause the program 
to print out the total number of cars and total cash and then exit.
#include<iostream>
using namespace std;
class Toll{
    public:
    unsigned int cars;
    double cash;
    Toll(){
        cars = 0;
        cash = 0.0;
    }
    void payingCar(){
        cars++;
        cash = cash + 0.5;
    }
    void nonPayCar(){
        cars++;
    }
    void display(){
        cout<<"Total Cars: "<<cars<<endl;
        cout<<"Total Cash: "<<cash<<endl;
    }
};

int main() {
    Toll toll;
    char choice;
    do {
        cout << "Press 1 for paying car 0 for non-paying car ANYTHING to exit: ";
        cin >> choice;
        switch (choice) {
            case '1':
                toll.payingCar();
                break;
            case '0':
                toll.nonPayCar();
                break;
            default:
                toll.display();
                break;
        }
    } while (1);
    return 0;
}

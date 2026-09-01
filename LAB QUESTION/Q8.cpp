
Anna is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the exams 
given during this semester. Create a class named Student with the following specifications: 
- An instance variable named scores holds a student's 5 exam scores. 
- A void input() function reads 5 integers and saves them to scores. 
- An int calculateTotalScore() function that returns the sum of the student's scores

#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];  

public:

    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

 
    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n;  

    Student students[100];  

    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    int annaScore = students[0].calculateTotalScore();

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].calculateTotalScore() > annaScore) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

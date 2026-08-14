/*Problem Statement 3: 
Write a C++ program to simulate the result of a noconfidence motion in the Lok Sabha. For this problem, just assume that:  
The user enters the number of votes in favour of the motion.  The user enters the number of votes against the motion.  
The user enters valid integer values.  The side with more votes determines the result.  If both sides receive the same number 
of votes, the result is a Tie. Create a class NoConfidenceMotion with:   votesFor  votesAgainst Implement: 1. A default 
constructor to initialize the vote counts to 0. 2. A function setVotes() to accept the number of votes for and against the 
motion from the user. 3. A function displayVotes() to display the number of votes for and against the motion. 4. A function 
result() to determine and display the result:  Government won  Opposition won  Tie 5. Overloaded functions result() to:  
Determine the winner using the votes for and against the motion.  Accept the total number of members and display the percentage
 of votes for and against the motion. Create an object of the NoConfidenceMotion class and implement a menudriven program that 
 allows the user to: 1. Enter votes 2. Display votes 4 3. Display result 4. Display result with percentage 5. Exit The program 
 should handle the case where the number of votes for and against the motion are equal.  Hint: Overload the function result() 
 as follows: result() result(int totalMembers) The first version should determine the result based only on the votes entered. 
 The second version should additionally display the percentage of members who voted for and against the motion, based on the 
 total number of members. Example output for result(int totalMembers) function:  Enter votes against the motion: 325 Enter votes
  for the motion: 199 Enter total number of members: 543 Government won! Votes against: 325 (59.85%)  Votes for: 199 (36.65%) 
  */
 #include<iostream>
 using namespace std;
 class NoConfidenceMotion{
    float votefor=0;
    float voteagainst=0;
    public:
     void setvotes(){
      cout<<"VOTE FOR "<<endl;
        cin>>votefor;
        cout<<"VOTE AGAINST "<<endl;
        cin>>voteagainst;
        
     }
     void displayVotes(int n=0){
        cout<<"VOTE FOR = "<<votefor<<endl;
        cout<<"VOTE AGAINST = "<<voteagainst<<endl;
        n=votefor+voteagainst;
        cout<<"TOTAL MEMBER "<<endl;
        cin>>n;
     }
     void result(){
        if(votefor>voteagainst){
            cout<<"GOVERNENT WON"<<endl;
        }
        else if(votefor<voteagainst){
            cout<<"OPPOSTION WON"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
     }
      // Display result with percentage
    void result(int totalMembers) {
        float percentFor = (votefor * 100.0) / totalMembers;
        float percentAgainst = (voteagainst * 100.0) / totalMembers;

        result();

        cout << "Votes for = " << votefor
             << " (" << percentFor << "%)" << endl;

        cout << "Votes against = " << voteagainst
             << " (" << percentAgainst << "%)" << endl;
    }
 };

 int main() {
    NoConfidenceMotion n;
    int choice;
    int totalMembers;

    do {
        cout << "\n----- MENU -----" << endl;
        cout << "1. Enter votes" << endl;
        cout << "2. Display votes" << endl;
        cout << "3. Display result" << endl;
        cout << "4. Display result with percentage" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            n.setvotes();
            break;

        case 2:
            n.displayVotes();
            break;

        case 3:
            n.result();
            break;

        case 4:
            cout << "Enter total number of members: ";
            cin >> totalMembers;
            n.result(totalMembers);
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
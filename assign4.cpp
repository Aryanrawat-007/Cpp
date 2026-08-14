#include <iostream>
using namespace std;

class book {
    int bookid, avai;
    string title, author;
    float price;

public:

    // Default constructor
    book() {
        bookid = 0;
        title = "";
        author = "";
        price = 0;
        avai = 1;
    }

    // Accept details of one book
    void setdetail() {
        cout << "ENTER BOOK ID: ";
        cin >> bookid;

        cin.ignore();

        cout << "ENTER BOOK TITLE: ";
        getline(cin, title);

        cout << "ENTER BOOK AUTHOR: ";
        getline(cin, author);

        cout << "ENTER BOOK PRICE: ";
        cin >> price;

        avai = 1;
    }

    // Display one book
    void show() {
        cout << "\nBOOK ID: " << bookid << endl;
        cout << "TITLE: " << title << endl;
        cout << "AUTHOR: " << author << endl;
        cout << "PRICE: " << price << endl;

        if (avai == 1)
            cout << "STATUS: AVAILABLE" << endl;
        else
            cout << "STATUS: ISSUED" << endl;
    }

    // Issue book
    void issueBook() {
        if (avai == 1) {
            avai = 0;
            cout << "BOOK ISSUED SUCCESSFULLY" << endl;
        }
        else {
            cout << "BOOK ALREADY ISSUED" << endl;
        }
    }

    // Return book
    void returnBook() {
        if (avai == 0) {
            avai = 1;
            cout << "BOOK RETURNED" << endl;
        }
        else {
            cout << "BOOK IS ALREADY AVAILABLE" << endl;
        }
    }

    // Search by ID
    void search(int id) {
        if (bookid == id) {
            show();
        }
    }

    // Search by title
    void search(string bookTitle) {
        if (title == bookTitle) {
            show();
        }
    }

    // Get book ID
    int getBookID() {
        return bookid;
    }
};


int main() {

    // Array of 5 Book objects
    book b[5];

    int choice;
    int count = 0;
    int id;
    string title;

    do {
        cout << "\n===== BOOK MENU =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display all books" << endl;
        cout << "3. Search by ID" << endl;
        cout << "4. Search by title" << endl;
        cout << "5. Issue a book" << endl;
        cout << "6. Return a book" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 5) {
                b[count].setdetail();
                count++;
            }
            else {
                cout << "Maximum 5 books can be added." << endl;
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No books added." << endl;
            }
            else {
                for (int i = 0; i < count; i++) {
                    b[i].show();
                }
            }
            break;

        case 3:
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                b[i].search(id);
            }
            break;

        case 4:
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, title);

            for (int i = 0; i < count; i++) {
                b[i].search(title);
            }
            break;

        case 5:
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (b[i].getBookID() == id) {
                    b[i].issueBook();
                }
            }
            break;

        case 6:
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (b[i].getBookID() == id) {
                    b[i].returnBook();
                }
            }
            break;

        case 7:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}
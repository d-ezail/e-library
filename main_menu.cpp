#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n==============================" << endl;
        cout << "        E-Library System      " << endl;
        cout << "==============================" << endl;
        cout << "1. User Login / Register User" << endl;
        cout << "2. Admin Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYou selected User Login / Register User." << endl;
                // ADD USER INTERFACE/ OR CODE HERE
                break;
            case 2:
                cout << "\nYou selected Admin Login." << endl;
                // ADD ADMIN INTERFACE OR CODE HERE
                break;
            case 3:
                cout << "\nExiting the system. Paalam!" << endl;
                break;
            default:
                cout << "\nInvalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}

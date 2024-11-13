using namespace std;
#include <iostream>
#include <string>

// Function to simulate user login
bool login(const string& username, const string& password) {
    
    const string storedUsername = "user123";
    const string storedPassword = "password123";

    // Check if input matches stored credentials
    if (username == storedUsername && password == storedPassword) {
        return true;
    }
    return false;
}

int main() {
    string username;
    string password;

    cout << "\n\t\tWelcome to the Login Page\n";
    cout << "\t--------------------------------\n";

    // Get user input for username and password
    cout << "Enter username: ";
    getline(cin, username);

    cout << "Enter password: ";
    getline(cin, password);

    // Check if login is successful
    if (login(username, password)) {
        cout << "\nLogin successful! Welcome, " << username << "!\n";
    } else {
        cout << "\nLogin failed. Please check your username and password and try again.\n";
    }

    return 0;
}

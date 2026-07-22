//C++ Program for Input and Output:
//==============================

#include <iostream>
#include <string>
using namespace std;

int main() {
    // ---------- Variable Declarations (variety of types) ----------
    int age;
    long phoneNumber;
    float height;       // in feet
    double weight;      // in kg
    char gender;        // 'M' / 'F' / 'O'
    string name;
    string address;
    bool isMarried;
    string hobbies[3];  // array of strings

    // ---------- DUMMY DATA (pre-filled, simulating user input) ----------
    cout << "----- Loading Dummy Personal Data -----\n";
    name = "Rohan Bastola";
    age = 24;
    phoneNumber = 9810000123;
    height = 5.8f;
    weight = 68.5;
    gender = 'M';
    address = "Kathmandu, Nepal";
    isMarried = false;
    hobbies[0] = "Reading";
    hobbies[1] = "Football";
    hobbies[2] = "Coding";

    // ---------- OUTPUT (Display captured dummy data) ----------
    cout << "\n----- Personal Information (Dummy) -----\n";
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "Phone       : " << phoneNumber << endl;
    cout << "Height      : " << height << " ft" << endl;
    cout << "Weight      : " << weight << " kg" << endl;
    cout << "Gender      : " << gender << endl;
    cout << "Address     : " << address << endl;
    cout << "Married     : " << (isMarried ? "Yes" : "No") << endl;
    cout << "Hobbies     : ";
    for (int i = 0; i < 3; i++) {
        cout << hobbies[i];
        if (i < 2) cout << ", ";
    }
    cout << "\n";

//   return 0 ;

    // ---------- REAL USER INPUT SECTION ----------
    cout << "\n----- Now Enter Your Own Information -----\n";

    cout << "Enter Name: ";
    cin.ignore(); // clears leftover newline from buffer
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Phone Number: ";
    cin >> phoneNumber;

    cout << "Enter Height (ft): ";
    cin >> height;

    cout << "Enter Weight (kg): ";
    cin >> weight;

    cout << "Enter Gender (M/F/O): ";
    cin >> gender;

    cin.ignore(); // clear buffer before getline
    cout << "Enter Address: ";
    getline(cin, address);

    cout << "Are you married? (1 = Yes, 0 = No): ";
    cin >> isMarried;

    cout << "Enter 3 Hobbies:\n";
    cin.ignore();
    for (int i = 0; i < 3; i++) {
        cout << "Hobby " << (i + 1) << ": ";
        getline(cin, hobbies[i]);
    }

    // ---------- OUTPUT (Display real user data) ----------
    cout << "\n----- Your Submitted Information -----\n";
    cout << "Name        : " << name << endl;
    cout << "Age         : " << age << endl;
    cout << "Phone       : " << phoneNumber << endl;
    cout << "Height      : " << height << " ft" << endl;
    cout << "Weight      : " << weight << " kg" << endl;
    cout << "Gender      : " << gender << endl;
    cout << "Address     : " << address << endl;
    cout << "Married     : " << (isMarried ? "Yes" : "No") << endl;
    cout << "Hobbies     : ";
    for (int i = 0; i < 3; i++) {
        cout << hobbies[i];
        if (i < 2) cout << ", ";
    }
    cout << endl;

    return 0;
}
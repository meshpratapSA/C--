#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
protected:
    int empID;
    string empName;
    string address;
    string phone;
    string mobile;
    double salary;

public:
    void getBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // Clear the newline character from the input buffer

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Mobile Number: ";
        getline(cin, mobile);

        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore(); // Clear the newline character from the input buffer
    }

    void displayBasicInfo() {
        cout << "\n ==========Basic Employee Information==========\n";

        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phone << endl;
        cout << "Mobile Number: " << mobile << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Derived Class
class EmployeeDetails : public Employee {
    private:
        string department;
        double commission;
        string email;
        string nidNumber;

    public:
        void getAdditionalInfo() {
            cout << "Enter Department: ";
            getline(cin, department);

            cout << "Enter Commission: ";
            cin >> commission;
            cin.ignore(); // Clear the newline character from the input buffer

            cout << "Enter Email: ";
            getline(cin, email);

            cout << "Enter NID Number: ";
            getline(cin, nidNumber);
        }

        double totalSalary() {
            return salary + commission;
        }

        void displayCompleteInfo() {
            displayBasicInfo();

            cout << "\n ==========Additional Employee Information==========\n";

            cout << "Department: " << department << endl;
            cout << "Commission: $" << commission << endl;
            cout << "Email: " << email << endl;
            cout << "NID Number: " << nidNumber << endl;

            cout << "\n ==========Salary Summary==========\n";
            cout << "Base Salary: $" << salary << endl;
            cout << "Commission: $" << commission << endl;
            cout << "Total Salary (Salary + Commission): $" << totalSalary() << endl;
        }
};

// Main function
int main() {
    EmployeeDetails emp;

    cout << "-- Employee Information --\n\n";

    emp.getBasicInfo(); //inherited method
    cout << endl;
    emp.getAdditionalInfo(); //derived class method

    cout << "\n\n";
    emp.displayCompleteInfo(); //Calls inherited method internally

    return 0;
}

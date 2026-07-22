#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int EmpID;
    string Name;
    string Address;
    string Phone;
    string Department;
    double salary;
    string Remarks;
};

// Function to display any employee
void DisplayEmployee(Employee emp)
{
    cout << "\n---------------------------------\n";
    cout << "Employee ID : " << emp.EmpID << endl;
    cout << "Name        : " << emp.Name << endl;
    cout << "Address     : " << emp.Address << endl;
    cout << "Phone       : " << emp.Phone << endl;
    cout << "Department  : " << emp.Department << endl;
    cout << "Salary      : " << emp.salary << endl;
    cout << "Remarks     : " << emp.Remarks << endl;
    cout << "---------------------------------\n";
}

// Function to create Employee 1
void display()
{
    Employee emp1;

    emp1.EmpID = 1001;
    emp1.Name = "Jay Neupane";
    emp1.Address = "Naxal, Kathmandu";
    emp1.Phone = "98510194343";
    emp1.Department = "Head Office";
    emp1.salary = 50000;
    emp1.Remarks = "Structure Implementation";

    cout << "\n===== Employee 1 =====";
    DisplayEmployee(emp1);
}

// Function to add Employee 2
void AddNewEmployee(Employee &emp2)
{
    cout << "\nEnter Employee ID: ";
    cin >> emp2.EmpID;
    cin.ignore();

    cout << "Enter Employee Full Name: ";
    getline(cin, emp2.Name);

    cout << "Enter Employee Address: ";
    getline(cin, emp2.Address);

    cout << "Enter Employee Phone Number: ";
    getline(cin, emp2.Phone);

    cout << "Enter Department Name: ";
    getline(cin, emp2.Department);

    cout << "Enter Employee Salary: ";
    cin >> emp2.salary;
    cin.ignore();

    cout << "Enter Remarks: ";
    getline(cin, emp2.Remarks);
}

int main()
{
    Employee emp2;

    AddNewEmployee(emp2);

    display();

    cout << "\n===== Employee 2 =====";
    DisplayEmployee(emp2);

    return 0;
}
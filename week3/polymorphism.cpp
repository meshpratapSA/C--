#include <iostream>
using namespace std;

// Base Class
class Employee {
public:
    virtual void calculateSalary() {
        cout << "Employee Salary" << endl;
    }

    virtual~Employee() {}
};

// Permanent Employee
class PermanentEmployee : public Employee {
    double basic = 50000;
    double allowance = 12000;

public:
    void calculateSalary() override {
        cout << "Permanent Employee Salary: " << (basic + allowance) << endl;
    }
};

// Contract Employee
class ContractEmployee : public Employee {
    double hourlyRate = 50;
    int hours = 160;

    public:
    void calculateSalary() override {
        cout << "Contract Employee Salary: " << (hourlyRate * hours) << endl;
    }
};  

// Sales Employee
class SalesEmployee : public Employee {
    double basic = 30000;
    double commission = 15000;

    public:

    void calculateSalary() override {
        cout << "Sales Employee Salary: " << (basic + commission) << endl;
    }
};  

// Main
int main() {
    Employee *emp;

    PermanentEmployee p;
    ContractEmployee c;
    SalesEmployee s;

    emp = &p;
    cout << emp;
    emp->calculateSalary();

    emp = &c;
    emp->calculateSalary();

    emp = &s;
    emp->calculateSalary();

    return 0;
}  


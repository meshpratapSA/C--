#include <iostream>
using namespace std;

// Function using if-else if ladder
void gradeUsingIfElse(int marks) {
    cout << "\n--- Using if-else if ---\n";
    cout << "Marks: " << marks << " => Grade: ";

    if (marks >= 90 && marks <= 100) {
        cout << "A+ (Outstanding)";
    }
    else if (marks >= 80 && marks < 90) {
        cout << "A (Excellent)";
    }
    else if (marks >= 70 && marks < 80) {
        cout << "B+ (Very Good)";
    }
    else if (marks >= 60 && marks < 70) {
        cout << "B (Good)";
    }
    else if (marks >= 50 && marks < 60) {
        cout << "C+ (Above Average)";
    }
    else if (marks >= 40 && marks < 50) {
        cout << "C (Average)";
    }
    else if (marks >= 33 && marks < 40) {
        cout << "D (Pass)";
    }
    else if (marks >= 0 && marks < 33) {
        cout << "F (Fail)";
    }
    else {
        cout << "Invalid marks entered!";
    }
    cout << endl;
}

int main() {
    int marksList[] = {95, 85, 75, 65, 55, 45, 35, 25, -5, 105};
    int n = sizeof(marksList)/ sizeof(marksList[0]);
    cout<<"====Demonstrating All Grades with Dummy Marks ====\n'";
    for(int i=0;i<n;i++){
        gradeUsingIfElse(marksList[i]);
    }

    return 0;
}


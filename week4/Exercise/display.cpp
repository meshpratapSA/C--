#include <iostream>
using namespace std;

void displayStudents(string names[], string grades[], int size, int index)
{
    if (index == size)
        return;

    cout << names[index] << " - " << grades[index] << endl;
    displayStudents(names, grades, size, index + 1);
}

int main()
{
    string names[] = {"Ram", "Shyam", "Hari", "Sita", "Gita", "Rita"};
    string grades[] = {"A", "B", "A", "A", "B", "B"};
    int size = 6;
    displayStudents(names, grades, size, 0);
    return 0;
}
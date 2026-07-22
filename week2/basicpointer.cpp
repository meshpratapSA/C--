#include <iostream>
#include <string>
using namespace std;

int main() {
    //basic pointer

    int num = 100;
    int* ptr = &num; // pointer variable that stores the address of num

    cout << "\n Value of Num: " << num;
    cout << "\n Value of Num: " << ptr;
    cout << "\n Value of Num: " << *ptr; // dereferencing the pointer to get the value of num

    return 0;
}
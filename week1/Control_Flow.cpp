#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;

    a = 40;
    b = 50;
    c = 30;

    if (a > b && a > c) {
        cout << "a is greatest nunmber" << endl;
    } else if (b > a && b > c) {
        cout << "b is greatest number" << endl;
    } else {
        cout << "c is the greatest" << endl;
    }


    cout << "========Control Flow========\n";
    return 0;
}
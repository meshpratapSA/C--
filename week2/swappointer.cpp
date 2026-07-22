#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int x = 10, y = 20;

    cout << "Before swapping: x = \t" << x << endl;
    cout << "Before swapping: y = \t" << y << endl;


    swap(&x, &y);

    cout << "After swapping: x = \t" << x << endl;
    cout << "After swapping: y = \t" << y << endl;


    return 0;
}

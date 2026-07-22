// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10,20,30,40,50,60,70};
//     int size = 7;

//     int small = arr[0];
//     int big = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < small) {
//             small = arr[i];
//         }
//         if (arr[i] > big) {
//             big = arr[i];
//         }
//     }

//     int mid = arr[size / 2];

//     cout << "Smallest Value: " << small << endl;
//     cout << "Middle Value: " << mid << endl;
//     cout << "Biggest Value: " << big << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[] = {50,10,70,30,40,20,60};
    int size = 7;

    cout << "Middle Element: " << arr[size / 2];

    return 0;
}
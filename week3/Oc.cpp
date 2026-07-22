#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        if (key < arr[mid])
            right = mid - 1;

        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, n, 70);

    if (index != -1)
        cout << "Element found at index: " << index;

    else
        cout << "Element not found";

    return 0;
}
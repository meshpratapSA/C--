#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int x : numbers)
        cout << x << " ";

    return 0;
}
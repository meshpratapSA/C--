#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numlist = {1, 2, 3, 4, 5};
    for (auto it = numlist.begin(); it != numlist.end(); ++it)
    {
        cout << +it << " ";
    }

    return 0;
}
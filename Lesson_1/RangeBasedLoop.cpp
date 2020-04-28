#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    // Add your code here.
    vector<int> a{1, 2, 3, 4, 5};
    for (int i : a)
    {
        cout << i << "\n";
    }

    vector<vector<int>> b{{1, 2},
                          {3, 4},
                          {5, 6}};

    for (auto i : b)
        for (auto c : i)
            cout << c << " ";
}
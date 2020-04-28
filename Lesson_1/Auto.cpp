#include <iostream>
#include <vector>
using std::cout;
using std::vector;
//It is possible for C++ to do automatic type inference, using the auto keyword.
int main()
{
  //  Declare and initialize v using auto here.
    auto v = {7, 8, 9, 10};

    for (auto i : v)
        cout << i << " ";
    cout << "\n";


}

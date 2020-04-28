#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main()
{
    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    cout << a[10] << "\n";
    cout << a.size() << "\n";
    /****
         If you tried to access the elements of a using an out-of-bound index, you might have noticed that there is no error or exception thrown.
         If you haven't seen this already, try the following code in the cell above to see what happens:
         cout << a[10];
         In this case, the behavior is undefined, so you can not depend on a certain value to be returned. Be careful about this! 
         In a later lesson where you will learn about exceptions,
         we will discuss other ways to access vector elements that don't fail silently with out-of-range indices.
    ****/

  vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    cout<<b[2][3]<<"\n";
    cout << b[0].size();
    cout << "\n";

}

/* return_type FunctionName(parameter_list) {
  // Body of function here.
} */

#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::vector;
using std::string;
// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(vector < int > b )
{
    int sum = 0; 
    for (auto i : b )
        sum = sum + i ;
    return sum;
}

// Write the PrintStrings function here.
void PrintStrings(string s1,string s2 )
{
    string final = s1+s2;
   cout<<final;
    // return final;
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
     string s1 = "C++ is ";
    string s2 = "super awesome.";
    
    // Uncomment the following line to call your function:
    PrintStrings(s1, s2);
}
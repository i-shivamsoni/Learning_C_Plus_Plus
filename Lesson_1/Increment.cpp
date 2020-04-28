#include <iostream>
using std::cout;

/****
The Increment Operator
If you haven't seen the ++ operator before, this is the post-increment operator, and it is where the ++ in the name "C++" comes from. 
The operator increments the value of i.
There is also a pre-increment operator which is used before a variable, as well as pre and post decrement operators: --. 
The difference between pre and post lies in what value is returned by the operator when it is used.
You will only use the post-increment operator i++ for now, but if you are curious, click below for an explanation of the code:
****/
int main()
{
    auto i = 1;

    // Post-increment assigns i to c and then increments i.
    auto c = i++;

    cout << "Post-increment example:"
         << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Reset i to 1.
    i = 1;

    // Pre-increment increments i, then assigns to c.
    c = ++i;

    cout << "Pre-increment example:"
         << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Decrement i;
    i--;
    cout << "Decrement example:"
         << "\n";
    cout << "The value of i is: " << i << "\n";
}
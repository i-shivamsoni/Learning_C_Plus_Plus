/****
int i is passed to the function MultiplyByTwo.Look carefully at the code and
try to guess what the output will be before you execute it.
 When you are finished executing, click the button for an explanation.
 In the code above, a is passed by value to the function, so the variable a is not affected by what happens inside the function.
****/

#include <iostream>
using std::cout;

int MultiplyByTwo(int i)
{
    i = 2 * i;
    return i;
}

int main()
{
    int a = 5;
    cout << "The int a equals: " << a << "\n";
    int b = MultiplyByTwo(a);
    cout << "The int b equals: " << b << "\n";
    cout << "The int a still equals: " << a << "\n";
}

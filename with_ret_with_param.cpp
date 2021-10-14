// with return with parameter

#include <iostream>

using namespace std;

int add(int a, int b) // defining the function
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x;
    x = add(10, 20); // calling the function
    cout << x;
}
#include <iostream>
using namespace std;
int main()
{
    using salary = double;
    salary paul = 100.12;
    salary &jaehoon = paul;
    cout << "peter's memory access = " << &paul << endl;
    cout << "sangwon's memory access = " << &jaehoon << endl;
}
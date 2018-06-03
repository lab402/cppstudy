#include <iostream>
using namespace std;

int main()
{
    int val0 = 200;
    int val1=100;
    int &val2=val1;
    cout << val1 << endl;
    cout << val2 << endl;
    val2 = val0;
    cout << val2 << endl;
}
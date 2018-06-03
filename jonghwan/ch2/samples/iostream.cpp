#include <stdio.h>
int main()
{
    int number = 0;
    scanf("%d", &number);
    printf("모니터 출력: %d \n", number);
}

#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cin >> number;
    cout << "모니터 출력: " << number << endl; //endl은 '\n'과 같다.
}
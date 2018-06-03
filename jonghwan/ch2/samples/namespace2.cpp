#include <iostream>
using std::cout; // cout으로 범위를 좁혀 네임스페이스 지정
int main()
{
    int i = 0;
    cin >> i; // identifier undefined 에러가 발생한다.
    cout << i;
}
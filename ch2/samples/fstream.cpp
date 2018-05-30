#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "파일에 씁시다.";
    ofstream ofs("filename.txt"); //file.txt 파일을 연다.
    ofs << str; //file.txt 파일에 str 문자열을 쓴다.
    ofs.close(); //파일을 닫는다.
    ifstream ifs("file.txt"); // 파일을 다시 열고,
    ifs >> str; //파일의 내용을 str에 저장한다.
    cout << str << endl;
    ifs.close();
}
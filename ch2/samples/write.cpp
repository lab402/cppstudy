#include <fstream>
using namespace std;
int main(){
    ofstream ofs;
    ofs.open("file.txt"); //file.txt 파일을 연다. 없으면 생성
    ofs.write("This is an apple",16); //"This is an apple" 문자열을 파일에 쓴다.
    long pos = ofs.tellp(); //파일의 현재 위치를 얻는다.
    ofs.seekp(pos-7); // 현재 위치에서 7만큼 뒤로 이동
    ofs.write(" sam",4); //여기서 sam을 쓴다.
    ofs.close(); //파일을 닫는다.
    return 0;
}
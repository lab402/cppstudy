#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// class chapter2
// {
//     public:
//     void templete(void);
//     void auto_value(void);
//     int test_decltype(void);
// };

// void chapter2::templete(void)
// {
//     string str = "file에씁시다";
//     // ofstream ofs("file.txt");
//     ofstream ofs;

//     ofs.open("file.txt",ios::trunc);
//     ofs.write("this_is_apple",16);
//     long pos = ofs.tellp();
//     ofs.seekp(pos-7);
//     ofs.write("_sam",4);
    
//     ofs.close();
    
//     ifstream ifs("file.txt");
//     ifs >> str;
//     cout << str << endl;
//     if(ifs.eof())
//     {
//         cout << true << endl;
//     }
//     ifs.close();
// }

// int chapter2::test_decltype(void)
// {
//     return 20 + 30;
// }

// void chapter2::auto_value(void)
// {
//     int n = 2;
//     float f = 2.3;
//     auto answer1 = n;
//     auto answer2 = f;
//     auto answer3 = n + f;
//     cout << n << endl;
//     cout << f << endl;
//     cout << answer1 << endl;
//     cout << answer2 << endl;
//     cout << answer3 << endl;
// }

// class chapter3
// {
//     public:
//     int peter(void);
// };
// int chapter3::peter(void)
// {
//     using minsu = double;
//     const minsu peter = 100.12;
//     minsu miler = peter;
//     minsu *sell = &miler;
//     minsu jun = 232.1;
//     cout << peter << endl;
//     cout << "peter's address" << &peter << endl;
//     cout << miler << endl;
//     cout << "'miler's address" << &miler << endl;
//     cout << sell << endl;
//     cout << "sell's address" << &sell << endl;
//     sell = &jun;
//     cout << jun << endl;
//     cout << "jun's address" << &jun << endl;
//     cout << sell << endl;
//     cout << "sell's address" << &sell << endl;
//     return 0;
// }

// class Chulsoo
// {
// private:
// 	int age;
// public:
// 	Chulsoo(int age)
// 	{
// 		this->age = age;
// 		cout << "Chulsoo::Chulsoo(age) 생성자 완료" << endl;
// 	}
// 	void setAge(int age)
// 	{
// 		this->age = age;
// 	}
// 	void introduce()
// 	{
// 		cout << "철수의 나이는 " << age << "세 입니다." << endl;
// 	}
// 	Chulsoo * returnThisPointer()
// 	{
// 		return this;
// 	}
// 	Chulsoo returnThis()
// 	{
// 		return *this;
// 	}
// 	Chulsoo& returnThisRef()
// 	{
// 		return *this;
// 	}
// };

// int main(void)
// {
// 	Chulsoo chulsoo1(32);
// 	cout << "chulsoo1 객체 introduce" << endl;
// 	chulsoo1.introduce();
// 	chulsoo1.setAge(50);
// 	chulsoo1.introduce();

// 	Chulsoo chulsoo2(20);
// 	cout << "chulsooPointer introduce" << endl;
// 	chulsoo2.returnThisPointer()->introduce();
// 	chulsoo2.returnThisPointer()->setAge(40);
// 	chulsoo2.returnThisPointer()->introduce();

// 	Chulsoo chulsoo3(32);
// 	cout << "chulsoo introduce" << endl;
// 	chulsoo3.returnThis().introduce();
// 	chulsoo3.returnThis().setAge(50);
// 	chulsoo3.returnThis().introduce();

// 	Chulsoo chulsoo4(32);
// 	cout << "chulsooRef introduce" << endl;
// 	chulsoo4.returnThisRef().introduce();
// 	chulsoo4.returnThisRef().setAge(50);
// 	chulsoo4.returnThisRef().introduce();

// 	return 0;
// }


//file in out test
// int main()
// {
//     string str = "file에씁시다";
//     // ofstream ofs("file.txt");
//     ofstream ofs;

//     ofs.open("file.txt",ios::trunc);
//     ofs.write("this_is_apple",16);
//     long pos = ofs.tellp();
//     ofs.seekp(pos-7);
//     ofs.write("_sam",4);
    
//     ofs.close();
    
//     ifstream ifs("file.txt");
//     ifs >> str;
//     cout << str << endl;
//     if(ifs.eof())
//     {
//         cout << true << endl;
//     }
//     ifs.close();
// }
// #include <iostream>
// using namespace std;

// struct OwnerInfo {
// 	char name[20];           // 이름
// 	char phoneNumber[13];    // 전화번호
// 	char email[30];          // 이메일
// 	char address[50];        // 주소
// 	char twitterAccount[20]; // 트위터 계정
// };

// struct ContactInfo {
// 	char name[20];           // 이름
// 	char phoneNumber[13];    // 전화번호
// 	char email[30];          // 이메일
// 	char address[50];        // 주소
// };

// OwnerInfo owner;
// ContactInfo contacts[100];
// int contactNumber = 0;

// void inputOwnerInfo();		// 소유자 정보 입력
// void ouputOwnerInfo();		// 소유자 정보 조회

// void addContact();             // 연락처 추가 입력
// void ouputContactList();       // 연락처 목록 조회

// void runMainMenu();            // 메인메뉴 실행
// void runOwnerMenu();           // 소유자 관리 메뉴실행
// void runContactMenu();         // 연락처 관리 메뉴실행

// 							   // 소유자 정보 입력
// void inputOwnerInfo()
// {
// 	cout << "소유자 이름: ";
// 	cin >> owner.name;

// 	cout << "소유자 전화번호: ";
// 	cin >> owner.phoneNumber;

// 	cout << "소유자 이메일: ";
// 	cin >> owner.email;

// 	cout << "소유자 주소: ";
// 	cin >> owner.address;

// 	cout << "소유자 트위터 계정: ";
// 	cin >> owner.twitterAccount;

// 	cout << "입력이 완료 되었습니다." << endl;
// }

// // 소유자 정보 조회
// void ouputOwnerInfo()
// {
// 	cout << "소유자 이름: " << owner.name << endl;
// 	cout << "소유자 전화번호: " << owner.phoneNumber << endl;
// 	cout << "소유자 이메일: " << owner.email << endl;
// 	cout << "소유자 주소: " << owner.address << endl;
// 	cout << "소유자 트위터 계정: " << owner.twitterAccount << endl;
// }

// // 연락처 추가 입력
// void addContact()
// {
// 	cout << "연락처 이름: ";
// 	cin >> contacts[contactNumber].name;

// 	cout << "연락처 전화번호: ";
// 	cin >> contacts[contactNumber].phoneNumber;

// 	cout << "연락처 이메일: ";
// 	cin >> contacts[contactNumber].email;

// 	cout << "연락처 주소: ";
// 	cin >> contacts[contactNumber].address;

// 	contactNumber++;
// 	cout << "입력이 완료 되었습니다." << endl;
// }

// // 연락처 목록 조회
// void ouputContactList()
// {
// 	int i;

// 	for (i = 0; i < contactNumber; i++)
// 	{
// 		cout << i << " : " << contacts[i].name << endl;
// 	}
// }

// // 메인메뉴 실행
// void runMainMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. 소유자 관리 기능" << endl;
// 		cout << "2. 연락처 관리 기능" << endl;
// 		cout << "3. 프로그램 종료" << endl;
// 		cin >> menuNum;

// 		switch (menuNum)
// 		{
// 		case 1:
// 			runOwnerMenu();
// 			break;
// 		case 2:
// 			runContactMenu();
// 			break;
// 		case 3:
// 			cout << "프로그램을 종료 합니다." << endl;
// 			break;
// 		default:
// 			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;

// 		}

// 	} while (menuNum != 3);

// }

// // 소유자 관리 메뉴실행
// void runOwnerMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. 소유자 정보 입력" << endl;
// 		cout << "2. 소유자 정보 조회" << endl;
// 		cout << "3. 이전 화면" << endl;
// 		cin >> menuNum;

// 		switch (menuNum)
// 		{
// 		case 1:
// 			inputOwnerInfo();
// 			break;
// 		case 2:
// 			ouputOwnerInfo();
// 			break;
// 		case 3:
// 			cout << "이전 화면으로 돌아 갑니다." << endl;
// 			break;
// 		default:
// 			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
// 		}

// 	} while (menuNum != 3);
// }

// // 연락처 관리 메뉴실행
// void runContactMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. 연락처 추가 입력" << endl;
// 		cout << "2. 연락처 목록 조회" << endl;
// 		cout << "3. 이전 화면" << endl;
// 		cin >> menuNum;

// 		switch (menuNum)
// 		{
// 		case 1:
// 			addContact();
// 			break;
// 		case 2:
// 			ouputContactList();
// 			break;
// 		case 3:
// 			cout << "이전 화면으로 돌아 갑니다." << endl;
// 			break;
// 		default:
// 			cout << "잘못 입력 했습니다. 다시 해주세요" << endl;
// 		}

// 	} while (menuNum != 3);

// }

// int main()
// {
// 	runMainMenu();
// 	return 0;
// }

#include <iostream>
using namespace std;

// class SignUp
// {
// public:
// 	struct OwnerInfo {
// 		char name[20];           // �̸�
// 		char phoneNumber[13];    // ��ȭ��ȣ
// 		char email[30];          // �̸���
// 		char address[50];        // �ּ�
// 		char twitterAccount[20]; // Ʈ���� ����
// 	};

// 	struct ContactInfo {
// 			char name[20];           // �̸�
// 			char phoneNumber[13];    // ��ȭ��ȣ
// 			char email[30];          // �̸���
// 			char address[50];        // �ּ�
// 	};

// 	OwnerInfo owner;
// 	ContactInfo contacts[100];
// 	int contactNumber = 0;

// 	void inputOwnerInfo();		// ������ ���� �Է�
// 	void ouputOwnerInfo();		// ������ ���� ��ȸ

// 	void addContact();             // ����ó �߰� �Է�
// 	void ouputContactList();       // ����ó ��� ��ȸ

// 	void runMainMenu();            // ���θ޴� ����
// 	void runOwnerMenu();           // ������ ���� �޴�����
// 	void runContactMenu();         // ����ó ���� �޴�����
// };
// // ������ ���� �Է�
// void SignUp::inputOwnerInfo()
// {
// 	cout << "������ �̸�: ";
// 	cin >> owner.name;

// 	cout << "������ ��ȭ��ȣ: ";
// 	cin >> owner.phoneNumber;

// 	cout << "������ �̸���: ";
// 	cin >> owner.email;

// 	cout << "������ �ּ�: ";
// 	cin >> owner.address;

// 	cout << "������ Ʈ���� ����: ";
// 	cin >> owner.twitterAccount;

// 	cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
// }

// // ������ ���� ��ȸ
// void SignUp::ouputOwnerInfo()
// {
// 	cout << "������ �̸�: " << owner.name << endl;
// 	cout << "������ ��ȭ��ȣ: " << owner.phoneNumber << endl;
// 	cout << "������ �̸���: " << owner.email << endl;
// 	cout << "������ �ּ�: " << owner.address << endl;
// 	cout << "������ Ʈ���� ����: " << owner.twitterAccount << endl;
// }

// // ����ó �߰� �Է�
// void SignUp::addContact()
// {
// 	cout << "����ó �̸�: ";
// 	cin >> contacts[contactNumber].name;

// 	cout << "����ó ��ȭ��ȣ: ";
// 	cin >> contacts[contactNumber].phoneNumber;

// 	cout << "����ó �̸���: ";
// 	cin >> contacts[contactNumber].email;

// 	cout << "����ó �ּ�: ";
// 	cin >> contacts[contactNumber].address;

// 	contactNumber++;
// 	cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
// }

// // ����ó ��� ��ȸ
// void SignUp::ouputContactList()
// {
// 	int i;

// 	for (i = 0; i < contactNumber; i++)
// 	{
// 		cout << i << " : " << contacts[i].name << endl;
// 	}
// }

// // ���θ޴� ����
// void SignUp::runMainMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ������ ���� ���" << endl;
// 		cout << "2. ����ó ���� ���" << endl;
// 		cout << "3. ���α׷� ����" << endl;
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
// 			cout << "���α׷��� ���� �մϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;

// 		}

// 	} while (menuNum != 3);

// }

// // ������ ���� �޴�����
// void SignUp::runOwnerMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ������ ���� �Է�" << endl;
// 		cout << "2. ������ ���� ��ȸ" << endl;
// 		cout << "3. ���� ȭ��" << endl;
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
// 			cout << "���� ȭ������ ���� ���ϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
// 		}

// 	} while (menuNum != 3);
// }

// // ����ó ���� �޴�����
// void SignUp::runContactMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ����ó �߰� �Է�" << endl;
// 		cout << "2. ����ó ��� ��ȸ" << endl;
// 		cout << "3. ���� ȭ��" << endl;
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
// 			cout << "���� ȭ������ ���� ���ϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
// 		}

// 	} while (menuNum != 3);

// }

// int main()
// {
// 	SignUp test;
// 	test.runMainMenu();
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// class Signup
// {
// private:
//     struct OwnerInfo {
// 		char name[20];           // �̸�
// 		char phoneNumber[13];    // ��ȭ��ȣ
// 		char email[30];          // �̸���
// 		char address[50];        // �ּ�
// 		char twitterAccount[20]; // Ʈ���� ����
// 	};
// 	struct ContactInfo {
// 			char name[20];           // �̸�
// 			char phoneNumber[13];    // ��ȭ��ȣ
// 			char email[30];          // �̸���
// 			char address[50];        // �ּ�
// 	};
//     OwnerInfo owner;
// 	ContactInfo contacts[100];
// 	int contactNumber;
// public:
// 	Signup()
// 	{
// 		contactNumber = 0;
// 		cout << "Signup::Signup() ������ �Ϸ�" << endl;
// 	}
//     void runContactMenu();
//     void runMainMenu();
//     void runOwnerMenu();
// 	void inputOwnerInfo();
// 	void outputOwnerInfo();
// 	void addContact();
// 	void outputContactList();
// };
// // ������ ���� �Է�
// void Signup::inputOwnerInfo()
// {
//     cout << "������ �̸�: ";
//     cin >> owner.name;

//     cout << "������ ��ȭ��ȣ: ";
//     cin >> owner.phoneNumber;

//     cout << "������ �̸���: ";
//     cin >> owner.email;

//     cout << "������ �ּ�: ";
//     cin >> owner.address;

//     cout << "������ Ʈ���� ����: ";
//     cin >> owner.twitterAccount;

//     cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
// }

// // ������ ���� ��ȸ
// void Signup::outputOwnerInfo()
// {
//     cout << "������ �̸�: " << owner.name << endl;
//     cout << "������ ��ȭ��ȣ: " << owner.phoneNumber << endl;
//     cout << "������ �̸���: " << owner.email << endl;
//     cout << "������ �ּ�: " << owner.address << endl;
//     cout << "������ Ʈ���� ����: " << owner.twitterAccount << endl;
// }


// // ����ó �߰� �Է�
// void Signup::addContact()
// {
//     cout << "����ó �̸�: ";
//     cin >> contacts[contactNumber].name;

//     cout << "����ó ��ȭ��ȣ: ";
//     cin >> contacts[contactNumber].phoneNumber;

//     cout << "����ó �̸���: ";
//     cin >> contacts[contactNumber].email;

//     cout << "����ó �ּ�: ";
//     cin >> contacts[contactNumber].address;

//     contactNumber++;
//     cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
// }

// // ����ó ��� ��ȸ
// void Signup::outputContactList()
// {
//     int i;

//     for (i = 0; i < contactNumber; i++)
//     {
//         cout << i << " : " << contacts[i].name << endl;
//     }
// }

// // ���θ޴� ����
// void Signup::runMainMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ������ ���� ���" << endl;
// 		cout << "2. ����ó ���� ���" << endl;
// 		cout << "3. ���α׷� ����" << endl;
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
// 			cout << "���α׷��� ���� �մϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
// 		}
// 	} while (menuNum != 3);
// }
// // ������ ���� �޴�����
// void Signup::runOwnerMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ������ ���� �Է�" << endl;
// 		cout << "2. ������ ���� ��ȸ" << endl;
// 		cout << "3. ���� ȭ��" << endl;
// 		cin >> menuNum;

// 		switch (menuNum)
// 		{
// 		case 1:
// 			inputOwnerInfo();
// 			break;
// 		case 2:
// 			outputOwnerInfo();
// 			break;
// 		case 3:
// 			cout << "���� ȭ������ ���� ���ϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
// 		}

// 	} while (menuNum != 3);
// }

// // ����ó ���� �޴�����
// void Signup::runContactMenu()
// {
// 	int menuNum;

// 	do {
// 		cout << "1. ����ó �߰� �Է�" << endl;
// 		cout << "2. ����ó ��� ��ȸ" << endl;
// 		cout << "3. ���� ȭ��" << endl;
// 		cin >> menuNum;

// 		switch (menuNum)
// 		{
// 		case 1:
// 			addContact();
// 			break;
// 		case 2:
// 			outputContactList();
// 			break;
// 		case 3:
// 			cout << "���� ȭ������ ���� ���ϴ�." << endl;
// 			break;
// 		default:
// 			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
// 		}

// 	} while (menuNum != 3);
// }

// int main(void)
// {
//     Signup signup;
//     signup.runMainMenu();
//     return 0;
// }
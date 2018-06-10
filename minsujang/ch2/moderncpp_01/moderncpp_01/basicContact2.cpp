#include <iostream>
using namespace std;
class Signup
{
private:
	struct OwnerInfo {
		char name[20];           // �̸�
		char phoneNumber[13];    // ��ȭ��ȣ
		char email[30];          // �̸���
		char address[50];        // �ּ�
		char twitterAccount[20]; // Ʈ���� ����
	};
	struct ContactInfo {
		char name[20];           // �̸�
		char phoneNumber[13];    // ��ȭ��ȣ
		char email[30];          // �̸���
		char address[50];        // �ּ�
	};
	OwnerInfo owner;
	ContactInfo contacts[100];
	int contactNumber;
public:
	Signup()
	{
		contactNumber = 0;
		cout << "Signup::Signup() ������ �Ϸ�" << endl;
	}
    ~Signup()
    {
        cout << "Signup::Signup() �Ҹ��� Ȯ��" << endl;
    }
	void runContactMenu();
	void runMainMenu();
	void runOwnerMenu();
    
	void inputOwnerInfo();
	void outputOwnerInfo();
    void editOwnerInfo();

	void addContact();
	void outputContactList();
    int removeContactByIndex(int index);    // ����ó ����
    void printContactInfoByIndex(int index);// ����ó �� ��ȸ
};
// ������ ���� �Է�
void Signup::inputOwnerInfo()
{
	cout << "������ �̸�: ";
	cin >> owner.name;

	cout << "������ ��ȭ��ȣ: ";
	cin >> owner.phoneNumber;

	cout << "������ �̸���: ";
	cin >> owner.email;

	cout << "������ �ּ�: ";
	cin >> owner.address;

	cout << "������ Ʈ���� ����: ";
	cin >> owner.twitterAccount;

	cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
}

// ������ ���� ��ȸ
void Signup::outputOwnerInfo()
{
	cout << "������ �̸�: " << owner.name << endl;
	cout << "������ ��ȭ��ȣ: " << owner.phoneNumber << endl;
	cout << "������ �̸���: " << owner.email << endl;
	cout << "������ �ּ�: " << owner.address << endl;
	cout << "������ Ʈ���� ����: " << owner.twitterAccount << endl;
}
// ������ ���� ����
void Signup::editOwnerInfo()
{
    int inputNum;
    cout << "1. ������ �̸� ����" << endl;
    cout << "2. ������ ��ȭ��ȣ ����" << endl;
    cout << "3. ������ �̸��� ����" << endl;
    cout << "4. ������ �ּ� ����" << endl;
    cout << "5. ������ Ʈ���� ���� ����" << endl;
    cout << "6. ���� ���� ���� �޴���" << endl;
    cin >> inputNum;
    switch (inputNum)
    {
    case 1:
        cin >> owner.name;
        cout << "�������� �̸��� �����Ǿ����ϴ�. " << endl;
        break;
    case 2:
        cin >> owner.phoneNumber;
        cout << "�������� ��ȭ��ȣ�� �����Ǿ����ϴ�. " << endl;
        break;
    case 3:
        cin >> owner.email;
        cout << "�������� �̸����� �����Ǿ����ϴ�. " << endl;
        break;
    case 4:
        cin >> owner.address;
        cout << "�������� �ּҰ� �����Ǿ����ϴ�. " << endl;
        break;
    case 5:
        cin >> owner.twitterAccount;
        cout << "�������� Ʈ���� ������ �����Ǿ����ϴ�. " << endl;
        break;
    default:
        cout << "�ƹ��͵� �������� �ʾҽ��ϴ�." << endl;
    }
}

// ����ó �߰� �Է�
void Signup::addContact()
{
	cout << "����ó �̸�: ";
	cin >> contacts[contactNumber].name;

	cout << "����ó ��ȭ��ȣ: ";
	cin >> contacts[contactNumber].phoneNumber;

	cout << "����ó �̸���: ";
	cin >> contacts[contactNumber].email;

	cout << "����ó �ּ�: ";
	cin >> contacts[contactNumber].address;

	contactNumber++;
	cout << "�Է��� �Ϸ� �Ǿ����ϴ�." << endl;
}

// ����ó ��� ��ȸ
void Signup::outputContactList()
{
	int i;

	for (i = 0; i < contactNumber; i++)
	{
		cout << i << " : " << contacts[i].name << endl;
	}
}
// ����ó ����
int Signup::removeContactByIndex(int index)
{
    // index�� 0���� �۰ų� contactNumber���� ũ�� ���� �Ұ�
    cout << "contactNumber: " << contactNumber << endl;
    if ((index >= contactNumber) || (index < 0))
        return 0;
    int i;
    for (i = index + 1; i < contactNumber; i++)
    {
        *(contacts + i - 1) = *(contacts + i);
    }
    contactNumber--;
 
    return 1;
}

// ����ó �� ��ȸ
void Signup::printContactInfoByIndex(int index)
{
    if(index < contactNumber)
    {
        cout << index << "�� index�� ���� ����ó ��ȸ" << endl;
        cout << "����ó �̸�: " << contacts[index].name << endl;
        cout << "����ó ��ȭ��ȣ: " << contacts[index].phoneNumber << endl;
        cout << "����ó �̸���: " << contacts[index].email << endl;
        cout << "����ó �ּ�: " << contacts[index].address << endl;
    }
    else{
        cout << "�߸��� index �Է���" << endl;
    }
}

// ���θ޴� ����
void Signup::runMainMenu()
{
	int menuNum;

	do {
		cout << "1. ������ ���� ���" << endl;
		cout << "2. ����ó ���� ���" << endl;
		cout << "3. ���α׷� ����" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			runOwnerMenu();
			break;
		case 2:
			runContactMenu();
			break;
		case 3:
			cout << "���α׷��� ���� �մϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}
	} while (menuNum != 3);
}
// ������ ���� �޴�����
void Signup::runOwnerMenu()
{
	int menuNum;

	do {
		cout << "1. ������ ���� �Է�" << endl;
		cout << "2. ������ ���� ��ȸ" << endl;
        cout << "3. ������ ���� ����" << endl;
		cout << "4. ���� ȭ��" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			outputOwnerInfo();
			break;
        case 3:
            editOwnerInfo();
            break;
		case 4:
			cout << "���� ȭ������ ���� ���ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}

	} while (menuNum != 4);
}

// ����ó ���� �޴�����
void Signup::runContactMenu()
{
	int menuNum;
    int result;
    int index;

	do {
		cout << "1. ����ó �߰� �Է�" << endl;
		cout << "2. ����ó ��� ��ȸ" << endl;
        cout << "3. ����ó ����" << endl;
        cout << "4. ����ó �� ��ȸ" << endl;
		cout << "5. ���� ȭ��" << endl;
		cin >> menuNum;

		switch (menuNum)
		{
		case 1:
			addContact();
			break;
		case 2:
			outputContactList();
			break;
        case 3:
            cout << "������ ����ó index : ";
            cin >> index;
            result = removeContactByIndex(index);
            if (result == 1)
                cout << "���������� �����Ǿ����ϴ�." << endl;
            else
                cout << "���������� �������� �ʾҽ��ϴ�." << endl;
            break;
        case 4:
            cout << "��ȸ�� ����ó index : ";
            cin >> index;
            printContactInfoByIndex(index);
            break;
		case 5:
			cout << "���� ȭ������ ���� ���ϴ�." << endl;
			break;
		default:
			cout << "�߸� �Է� �߽��ϴ�. �ٽ� ���ּ���" << endl;
		}

	} while (menuNum != 5);
}

int main(void)
{
	Signup signup;
	signup.runMainMenu();
	return 0;
}
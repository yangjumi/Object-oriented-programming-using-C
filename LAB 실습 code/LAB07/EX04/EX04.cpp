#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	string id;
	int balance;
public:
	static int totalBalance;
	Account() : name(""), id(""), balance(0){}
	~Account() { totalBalance += balance; }
	string getId() const { return id; }
	string getName() const { return name; }
	int getBalance() const { return balance; }
	void setId(string _id) { id = _id; };
	void setName(string _name) { name = _name; }
	void setBalance(int _bal) { balance = _bal; }
};

int Account::totalBalance = 0;

int main() {
	int n;
	cout << "�� �л� �� �Է�: ";
	cin >> n;

	Account* acnt = new Account[n];
	string inputId;
	string inputName;
	int inputBalance;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : ";
		cout << "�й� : ";
		cin >> inputId;
		cout << endl;
		cout << "�̸� : ";
		cin >> inputName;
		cout << endl;
		cout << "�ܾ� : ";
		cin >> inputBalance;

		for(int j=0; j<i;j++)
			if (acnt[i].getId() == inputId) {
				cout << "�̹� �����ϴ� ID�Դϴ�. \n �����մϴ�. \n";
				break;
			}

		acnt[i].setId(inputId);
		acnt[i].setName(inputName);
		acnt[i].setBalance(inputBalance);
		cout << "==========================\n" << endl;
	}
	delete[] acnt;

	cout << "ȸ���� �ݾ� : " << Account::totalBalance << endl;
	return 0;
}
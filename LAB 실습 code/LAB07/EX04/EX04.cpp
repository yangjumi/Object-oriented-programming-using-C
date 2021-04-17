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
	cout << "총 학생 수 입력: ";
	cin >> n;

	Account* acnt = new Account[n];
	string inputId;
	string inputName;
	int inputBalance;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 학생 계좌 입력 : ";
		cout << "학번 : ";
		cin >> inputId;
		cout << endl;
		cout << "이름 : ";
		cin >> inputName;
		cout << endl;
		cout << "잔액 : ";
		cin >> inputBalance;

		for(int j=0; j<i;j++)
			if (acnt[i].getId() == inputId) {
				cout << "이미 존재하는 ID입니다. \n 종료합니다. \n";
				break;
			}

		acnt[i].setId(inputId);
		acnt[i].setName(inputName);
		acnt[i].setBalance(inputBalance);
		cout << "==========================\n" << endl;
	}
	delete[] acnt;

	cout << "회수된 금액 : " << Account::totalBalance << endl;
	return 0;
}
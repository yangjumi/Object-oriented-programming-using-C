#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name;
	string id;
	int balance;
public:
	Account(string, string, int);
	Account operator+(const Account&);
	Account operator-(const Account&);
	friend ostream& operator<<(ostream& cout, const Account& _acnt);
	string getID();
	int getBal();
};

Account::Account(string _name, string _id, int _bal):name(_name), id(_id), balance(_bal){}

Account Account::operator+(const Account& _acnt) {
	Account result(this->name, this->id, this->balance + _acnt.balance);
	return result;
}

Account Account::operator-(const Account& _acnt) {
	Account result(this->name, this->id, this->balance - _acnt.balance);
	return result;
}

ostream& operator<<(ostream& cout, const Account& _acnt) {
	cout << "�й� : " << _acnt.id << "   �̸� : " << _acnt.name << "   �ܾ� : " << _acnt.balance << endl;
	return cout;
}

string Account::getID() {
	return this->id;
}

int Account::getBal() {
	return this->balance;
}

int main() {
	Account acnt[3] = {
	Account("������", "2019204212", 10000),
	Account("������", "2012311060", 0),
	Account("�̰�ȣ", "2011102214", 5000),
	};
	
	bool isSenderIdFound, isReceiverIdFound;
	int senderIdx, receiverIdx;
	string senderId, receiverId;

	while (true) {
		isSenderIdFound = false;
		isReceiverIdFound = false;

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> senderId;
		if (senderId == "����") {
			cout << "�����մϴ�." << endl;
			for (int i = 0; i < 3; i++) 
				cout << acnt[i];
			break;
		}

		cout << "���� ���� �л��� �й��� �Է��ϼ���: ";
		cin >> receiverId;

		if (senderId == receiverId) {
			cout << "���� ���� �л��� ���� ���� �л��� �����մϴ�. �ٽ� �Է����ּ���." << endl;
			continue;
		}

		/*�Է¹��� senderId�� ������ Sender�� ã��*/
		for(int i = 0; i<3; i++)
			if (senderId == acnt[i].getID()) {
				isSenderIdFound = true;
				senderIdx = i;
				break;
			}
		for(int i = 0; i<3; i++)
			if (receiverId == acnt[i].getID()) {
				isReceiverIdFound = true;
				receiverIdx = i;
				break; 
			}

		if (isSenderIdFound == false || isReceiverIdFound == false) {
			cout << "������ �л� Ȥ�� ���� �л��� �й��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���." << endl;
			continue;
		}
		if (acnt[senderIdx].getBal() == 0) {
			cout << "������ �л��� �ܾ��� �����մϴ�." << endl;
			continue;
		}

		acnt[receiverIdx] = acnt[receiverIdx] + acnt[senderIdx];
		acnt[senderIdx] = acnt[senderIdx] - acnt[senderIdx];
		cout << "���� �л��� �ܾ� : " << acnt[senderIdx];
		cout << "���� �л��� �ܾ� : " << acnt[receiverIdx];
	}
	
	return 0;
}
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
	cout << "학번 : " << _acnt.id << "   이름 : " << _acnt.name << "   잔액 : " << _acnt.balance << endl;
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
	Account("신은섭", "2019204212", 10000),
	Account("김유민", "2012311060", 0),
	Account("이강호", "2011102214", 5000),
	};
	
	bool isSenderIdFound, isReceiverIdFound;
	int senderIdx, receiverIdx;
	string senderId, receiverId;

	while (true) {
		isSenderIdFound = false;
		isReceiverIdFound = false;

		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> senderId;
		if (senderId == "종료") {
			cout << "종료합니다." << endl;
			for (int i = 0; i < 3; i++) 
				cout << acnt[i];
			break;
		}

		cout << "돈을 받을 학생의 학번을 입력하세요: ";
		cin >> receiverId;

		if (senderId == receiverId) {
			cout << "돈을 보낼 학생과 돈을 받을 학생이 동일합니다. 다시 입력해주세요." << endl;
			continue;
		}

		/*입력받은 senderId를 가지고 Sender를 찾음*/
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
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}
		if (acnt[senderIdx].getBal() == 0) {
			cout << "보내는 학생의 잔액이 부족합니다." << endl;
			continue;
		}

		acnt[receiverIdx] = acnt[receiverIdx] + acnt[senderIdx];
		acnt[senderIdx] = acnt[senderIdx] - acnt[senderIdx];
		cout << "보낸 학생의 잔액 : " << acnt[senderIdx];
		cout << "받은 학생의 잔액 : " << acnt[receiverIdx];
	}
	
	return 0;
}
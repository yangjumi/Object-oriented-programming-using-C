#include<iostream>
#include<string>
using namespace std;

class User {
private:
	int num;
	string* list;
	string id;
	string password;
public:
	User(int);
	void setId(string);
	void setPW(string);
	string getId();
	bool LogIn(string, string);
};

User::User(int _num = 3) : num(_num) {
	list = new string[num];
	id = "0000";
	password = "0000";
}

void User::setId(string _id) {
	id = _id;
}

void User::setPW(string _pw) {
	password = _pw;
}

string User::getId() {
	return id;
}

bool User::LogIn(string _id, string _pw) {
	if (id == _id && password == _pw)
		return true;
	else
		return false;
}

int main() {
	User user[3];
	string id, password, searchId, searchPassword;

	for (int i = 0; i < 3; i++) {
		/* User ������ �Է¹��� */
		cout << "============  " << i+1 << "  ============" << endl;
		cout << "id : ";
		cin >> id;
		user[i].setId(id);
		if (i == 1)
			if (user[0].getId() == id) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << endl << "�����մϴ�." << endl;
				exit(10);
			}
		if (i == 2)
			if (user[0].getId() == id || user[1].getId() == id) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << endl << "�����մϴ�." << endl;
				exit(10);
			}
		cout << "password : ";
		cin >> password;
		user[i].setPW(password);
		cout << "==============================" << endl << endl;
	}

	while (1) {
		/* LogIn ����� ����, ID�� �����ᡱ �Է½� ���α׷� ���� */
		cout << "============ LogIn ============" << endl << endl;
		cout << "Id : ";
		cin >> searchId;
		if (searchId == "����") {
			cout << "�����ϰڽ��ϴ�." << endl;
			break;
		}

		cout << "Password : ";
		cin >> searchPassword;
		bool flag = 0;
		for (int i = 0; i < 3; i++) {
			if (user[i].LogIn(searchId, searchPassword))
				flag = 1;
		}
		if (!flag)
			cout << "�߸��� ID�ų� PASSWORD �Դϴ�." << endl;
		else
			cout << "�α��� �Ǽ̽��ϴ�." << endl;
		cout << "===============================" << endl << endl;
	}
}
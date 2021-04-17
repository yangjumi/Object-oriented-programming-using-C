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
		/* User 정보를 입력받음 */
		cout << "============  " << i+1 << "  ============" << endl;
		cout << "id : ";
		cin >> id;
		user[i].setId(id);
		if (i == 1)
			if (user[0].getId() == id) {
				cout << "이미 존재하는 ID입니다." << endl << "종료합니다." << endl;
				exit(10);
			}
		if (i == 2)
			if (user[0].getId() == id || user[1].getId() == id) {
				cout << "이미 존재하는 ID입니다." << endl << "종료합니다." << endl;
				exit(10);
			}
		cout << "password : ";
		cin >> password;
		user[i].setPW(password);
		cout << "==============================" << endl << endl;
	}

	while (1) {
		/* LogIn 기능을 구현, ID에 “종료” 입력시 프로그램 종료 */
		cout << "============ LogIn ============" << endl << endl;
		cout << "Id : ";
		cin >> searchId;
		if (searchId == "종료") {
			cout << "종료하겠습니다." << endl;
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
			cout << "잘못된 ID거나 PASSWORD 입니다." << endl;
		else
			cout << "로그인 되셨습니다." << endl;
		cout << "===============================" << endl << endl;
	}
}
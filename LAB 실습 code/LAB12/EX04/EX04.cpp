#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class FileNotFoundException : public exception {
	string message; // Identifies the exception and filename
public:
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}

	virtual const char* what() const throw () {
		return message.c_str();
	}
};

void print(vector<vector<int>> v) {
	int row, col;
	try {
		cout << "출력할 행 크기 : ";
		cin >> row;
		cout << "출력할 열 크기 : ";
		cin >> col;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << v.at(i).at(j) << " ";
			}
			cout << endl;
		}
	}
	catch (exception& e) {
		cout << endl << e.what() << endl;
	}
}

vector<vector<int>> genevector(fstream& fin) {
	try {
		string name;
		cout << "파일 이름 : ";
		cin >> name;
		fin.open(name);
		if (!fin) {
			throw FileNotFoundException(name);
		}
		else {
			vector<vector<int>> v(10);
			int value;
			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++) {
					fin >> value;
					v[i].push_back(value);
				}
			return v;
		}
	}
	catch (exception& e) {
		cout << endl << e.what() << endl;
		exit(10);
	}
}

int main() {
	// 10*10 행렬 저장 구현
	ofstream fout;
	fout.open("temp.txt");
	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 101;
		fout << num << " ";
		if (i % 10 == 9)
			fout << endl;
	}
	fout.close();

	// 파일이름 입력
	fstream fin;
	// 입력받은 파일이름에 맞는 파일을 읽어와 vector로 입력 후, 출력 구현
	vector<vector<int>> v = genevector(fin);
	print(v);

	return 0;
}


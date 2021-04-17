#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void get_data(int& a, int& b, int& c, int& d) {
	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� :";
	cin >> a >> b;

	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� :";
	cin >> c >> d;

	cout << endl;
}

void initmatrix(vector<vector<int>>& matrix, int row, int col) {
	for (int i = 0; i < row; i++) {//unsigend 0���� �����ϴ� ����
		for (int r = 0; r < col; r++) { // �� ���� ���� ������ �ٸ��� �� �� �ִ� ���ɼ� ����
			matrix[i][r] = rand() % 19 - 9;
		}
	}
}

void printmatrix(vector<vector<int>>& matrix) {
	for (unsigned i = 0; i < matrix.size(); i++) {
		for (unsigned j = 0; j < matrix[i].size(); j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void multimatrix(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2, vector<vector<int>>& matrix3) {
	int sum;
	if (matrix1[0].size() != matrix2.size()) {
		cout << "�� ����� ���� �� �����ϴ�. ";
		exit(100);
	}

	for (int i = 0; i < matrix1.size(); i++) {
		for (int j = 0; j < matrix2[0].size(); j++) {
			sum = 0;
			for (int k = 0; k < matrix2.size(); k++) {
				sum += matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = sum;
		}
	}
}

int main() {
	int Arow, Acol, Brow, Bcol;
	get_data(Arow, Acol, Brow, Bcol);

	if (Arow <= 0 || Acol <= 0 || Brow <= 0 || Bcol <= 0) {
		cout << "����� ������ �� �����ϴ�.";
		return 0;
	}

	vector<vector<int>> Amatrix(Arow, vector <int>(Acol));
	vector<vector<int>> Bmatrix(Brow, vector <int>(Bcol));
	initmatrix(Amatrix, Arow, Acol);
	initmatrix(Bmatrix, Brow, Bcol);
	cout << "A��� : " << endl;
	printmatrix(Amatrix);
	cout << "B��� : " << endl;
	printmatrix(Bmatrix);
	vector<vector<int>> Cmatrix(Arow, vector <int>(Bcol));
	multimatrix(Amatrix, Bmatrix, Cmatrix);

	cout << "AB ����� : " << endl;
	printmatrix(Cmatrix);

	return 0;
}
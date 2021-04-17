#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void startGame(int input[3], int answer[3]) {
	int trial = 1;
	while (trial <= 9) {
		int strike = 0, ball = 0;
		cout << "===================" << trial << "===================" << endl;
		while (1) {
			cout << "1~9 범위의 숫자 세개를 입력해주세요 : ";
			for (int i = 0; i < 3; i++) {
				int num;
				cin >> num;
				input[i] = num;
			}
			if (input[0] > 9 || input[0] <= 0 || input[1] > 9 || input[1] <= 0 || input[2] > 9 || input[2] <= 0)
				cout << "1~9 범위 내의 숫자를 입력하여 주세요." << endl;
			else if (input[0] == input[1] || input[1] == input[2] || input[0] == input[2])
				cout << "중복된 숫자를 입력하셨습니다." << endl;
			else
				break;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (input[i] == answer[j]) {
					if (i == j)
						strike++;
					else
						ball++;
					break;
				}
			}
		}
		if (strike == 0 && ball == 0)
			cout << "Out!!" << endl << endl;
		else
			cout << strike << " Strike, " << ball << " Ball" << endl << endl;

		trial++;

		if (strike == 3) {
			cout << "정답입니다!" << endl;
			break;
		}
	}
	if (trial == 10) {
		cout << "패배했습니다." << endl << "정답은 ";
		for (int i = 0; i < 3; i++) {
			cout << answer[i] << ' ';
		}
		cout << "입니다." << endl;
	}
}

int main() {
	int input[3];
	int answer[3];

	/* 1 ~ 9 범위 내 임의의 숫자 세개를 선정*/
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		while (1) {
			int obj = rand() % 9 + 1;
			int sw = 1;
			for (int j = 0; j < i; j++) {
				if (obj == answer[j])
					sw = 0;
			}
			if (sw) {
				answer[i] = obj;
				break;
			}
		}
	}

	startGame(input, answer);

	return 0;
}
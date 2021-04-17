#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream sfout("text.txt");
	sfout << "In this paper, we explore the feasibility of a " << endl;
	sfout << "medical training system for breast tumor palpation based on haptic " << endl;
	sfout << "augmented reality (AR) technology. Haptic AR is an emerging " << endl;
	sfout << "research area in haptics and virtual reality " << endl;
	sfout << "(VR), which is concerned " << endl;
	sfout << "with augmenting the haptic " << endl;
	sfout << "properties of a real object by means of virtual haptic " << endl;
	sfout << "feedback. The AR-based tumor palpation system " << endl;
	sfout << "consists of a real breast sample." << endl;
	sfout.close();

	int lineNum;
	string s, x;
	cout << "length = ";
	cin >> lineNum;

	ifstream fin("text.txt");
	ofstream fout("output.txt");
	fout.setf(ios::left);
	while (getline(fin, s)) {
		x += s;
	}
	while (x.size() > lineNum) {
		fout << x.substr(0, lineNum) << endl;
		x = x.substr(lineNum, x.size() - lineNum);
	}
	fout << x;

	fout.close();
	fin.close();
	return 0;
}
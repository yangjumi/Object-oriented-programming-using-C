#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream fouts("text1.txt");
	fouts << "On its 60th anniversary in 2009, Kyung" << endl;
	fouts << "Hee University prepared for a second leap" << endl;
	fouts << "forward while seeking a new paradigm of future" << endl;
	fouts << "university development.";
	fouts.close();

	ofstream fout1("text2.txt");
	fout1 << "In this paper, we explore the feasibility of a" << endl;
	fout1 << "medical training system for breast tumor palpation" << endl;
	fout1 << "based on haptic augmented reality (AR) technology.";

	fout1.close();


	ifstream fin("text1.txt"), fin2("text2.txt");
	ofstream fout("output.txt");
	string s;
	while (getline(fin, s)) {
		fout << s << endl;
	}

	fout << endl;

	while (getline(fin2, s)) {
		fout << s << endl;
	}

	fin.close();
	fin2.close();
	fout.close();
	return 0;
}
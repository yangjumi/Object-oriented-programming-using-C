#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream ofs;
	ofs.open("temp.txt");

	int num;

	for (int i = 0; i < 100; i++)
	{
		num = rand() % 101;
		ofs << num << " ";
		if (i % 10 == 9)
			ofs << endl;
	}

	ofs.close();

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	int length;

	while (true) {
		cout << "Please enter number of values to process : ";
		cin >> length;
		if (length < 1)
			break;
		int* list = new int[length];

		cout << "Please enter numbers : ";
		for (int i = 0; i < length; i++)
			cin >> list[i];

		int sw = 1;
		for (int i = 1; i <= length; i++) {
			for (int j = 0; j < length; j++) {
				if (list[j] == i)
					break;
				if (j == length - 1)
					sw = 0;
			}
			if (sw == 0)
				break;
		}

		delete[] list;

		if (!sw)
			cout << "False";
		else
			cout << "True";
		cout << endl << endl;
	}
	
	return 0;
}
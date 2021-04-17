#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vec1(10);
	vector<int> vec2(10);

	int max = 0;
	int min = 100;

	for (int i = 0; i < 10; i++) {
		vec1[i] = rand() % 11;
		vec2[i] = rand() % 21;
	}

	for (auto iter1 = begin(vec1); iter1 != end(vec1); iter1++) {
		for (auto iter2 = begin(vec2); iter2 != end(vec2); iter2++) {
			if (max < (*iter1) * (*iter2))
				max = (*iter1) * (*iter2);
			if (min > (*iter1) * (*iter2))
				min = (*iter1) * (*iter2);
		}
	}

	cout << "<vector 1>" << endl;
	for (auto iter1 = begin(vec1); iter1 != end(vec1); iter1++) {
		cout << *iter1 << " ";
	}

	cout << endl << "<vector 2>" << endl;
	for (auto iter2 = begin(vec2); iter2 != end(vec2); iter2++) {
		cout << *iter2 << " ";
	}

	cout << endl << endl << "ÃÖ´ñ°ª = " << max << endl;
	cout << "ÃÖ¼Ú°ª = " << min;

	return 0;
}
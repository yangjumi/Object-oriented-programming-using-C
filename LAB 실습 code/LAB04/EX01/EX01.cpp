#include <iostream>
#include <string>
using namespace std;

int main() {
	string city, area, street, building;
	string address;

	cout << "�� : ";
	cin >> city;
	cout << "�� : ";
	cin >> area;
	cout << "�� : ";
	cin >> street;
	cout << "�ǹ��� : ";
	cin >> building;

	address = city + area + street + building;

	cout << endl << "�� �ּ� : " << address;

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
	int* p_list;
	int size = 0;
	int MAX_SIZE;
public:
	Stack(int _MAX_SIZE = 1000) : MAX_SIZE(_MAX_SIZE) {
		p_list = new int[MAX_SIZE];
	}

	~Stack() { delete[] p_list; }

	int find_index(int _item) {
		for (int i = 0; i < size; i++) {
			if (p_list[i] == _item)
				return i;
		}
		return -1;
	}

	void push(int _item) {
		if (size > MAX_SIZE)
			cout << "Error: out of memory" << endl;
		else if (find_index(_item) == -1) {
			p_list[size] = _item;
			size++;
		}
	}

	int pop() {
		if (size == 0)
			cout << "Error: No item exists in the list" << endl;
		else {
			size--;
			return p_list[size];
		}
	}

	void print() const {
		cout << "Items in the list : ";
		for (int i = 0; i < size; i++)
			cout << p_list[i] << ", ";
		cout << endl;
	}

	int get_size() {
		return size;
	}

	int get_item(int _index) {
		return p_list[_index];
	}

	bool operator==(Stack& s2) {
		if (size != s2.get_size())
			return false;
		else {
			for (int i = 0; i < size; i++) {
				if (p_list[i] != s2.get_item(i))
					return false;
			}
		}
		return true;
	}

	void operator+=(Stack& s2) {
		int size_2 = s2.get_size();
		for (int i = 0; i < size_2; i++) {
			int value = s2.get_item(i);
			this->push(value);
		}
	}
};


int main() {
	Stack s1, s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s2.push(1);
	s2.push(2);
	s2.push(5);

	s1.print();
	s2.print();

	s1 += s2;
	s1.print();
	s2.print();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;


	s1.pop();
	s1.pop();
	s2.pop();
	cout << "s1 == s2 ? " << (s1 == s2) << endl;
	s2.pop();
	s2.pop();
	s2.pop();

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Avengers
{
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}
	//ĳ���� ���� �Լ�
	virtual void set(string _name, int _attack, int _defense, int _health){}
	//���� �Լ�
	virtual	int attack(){ return 0; }
	//��� �Լ�
	virtual	void defense(int _attack_point){}
	//ĳ���� ���� ��� �Լ�
	virtual void print_info(){}
protected:
	string name;//ĳ���� �̸�
	int attack_point;//���ݷ�
	int defense_point;//����
	int health;//ü��
};

class Character : public Avengers
{
public:
	Character() : Avengers(){}
	//ĳ���� ���� �Լ�
	void set (string _name, int _attack, int _defense, int _health) override {
		if (_name == "IronMan") {
			name = "IronMan";
			attack_point = 70;
			defense_point = 40;
			health = 100;
		}
		else if (_name == "CaptainAmerica") {
			name = "CaptainAmerica";
			attack_point = 60;
			defense_point = 50;
			health = 100;
		}
		else if (_name == "Thor") {
			name = "Thor";
			attack_point = 80;
			defense_point = 30;
			health = 100;
		}
	}
	//���� �Լ�
	virtual	int attack() override { 
		return attack_point;
	}
	//��� �Լ�
	virtual	void defense(int _attack_point) {
		health = health - (_attack_point - defense_point);
	}
	//ĳ���� ���� ��� �Լ�
	virtual void print_info() {
		cout << "Name : " << name << endl;
		cout << "Attack_Point : " << attack_point << endl;
		cout << "Defense_Point : " << defense_point << endl;
		cout << "Health : " << health << endl;
	}
	int get_health() { return health; }
};

int main()
{
	Character my_char;
	Character enemy_char;
	string my;
	
	cout << "Choose your character(IronMan, CaptainAmerica, Thor) : ";
	cin >> my;
	if (my == "IronMan")
		my_char.set(my, 70, 40, 100);
	else if (my == "CaptainAmerica")
		my_char.set(my, 60, 50, 100);
	else
		my_char.set(my, 80, 30, 100);

	int other = rand() % 3;
	if (other == 0) {
		enemy_char.set("IronMan", 70, 40, 100);
	}
	else if (other == 1) {
		enemy_char.set("CaptainAmerica", 60, 50, 100);
	}
	else
		enemy_char.set("Thor", 80, 30, 100);

	cout << "--My Character--" << endl;
	my_char.print_info();
	cout << "--Enemy Character--" << endl;
	enemy_char.print_info();

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;

	while (1)
	{
		enemy_char.defense(my_char.attack());
		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life:" << enemy_char.get_health() << endl;
		if (enemy_char.get_health() <= 0) {
			cout << "You Win!" << endl;
			break;
		}

		my_char.defense(enemy_char.attack());
		cout << "My Life: " << my_char.get_health() << "\t"
			<< "Enemy Life:" << enemy_char.get_health() << endl;
		if (my_char.get_health() <= 0) {
			cout << "You Lose!" << endl;
			break;
		}
	}
	return 0;
}

#include"class Engineer.h"
Engineer::Engineer() : Admin() {}

Engineer::Engineer(char* name, int work_experience, int salary) : Admin() {
	this->name = name;
	this->work_experience = work_experience;
	this->salary = salary;
}

void Engineer::set(char* name, int work_experience, int salary) {
	this->name = name;
	this->work_experience = work_experience;
	this->salary = salary;
}

void Engineer::show() {
	cout << "���: " << name << endl;
	cout << "���� ������(� �����): " << work_experience << endl;
	cout << "�������� � $: " << salary << endl;
}

Engineer::~Engineer() {}

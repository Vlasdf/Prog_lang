#pragma once
#include <iostream>
using namespace std;

class Admin {
protected:
	char* name;
	int work_experience;
public:
	Admin();
	static Admin* head; //��������� �� ������ ���������� ������ ��������
	Admin* next;
	void add();
	virtual void show();
	static void look_up_list(); //����������� ������� ��� ��������� ������
	virtual~Admin();
};
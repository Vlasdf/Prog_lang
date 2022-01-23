#include "class Admin.h"

Admin* Admin::head = NULL;
Admin::Admin() {
	add();
}

void Admin::show() {
	cout << "����� ����������� �������" << endl;
}

void Admin::add() {
	Admin* p = this;
	p->next = head;
	head = p;
}

void Admin::look_up_list() {
	Admin* p = head;
	cout << "�������� ������" << endl;
	while (p) {
		cout << "==============================================================" << endl;
		p->show();
		p = p->next;
	}
}

Admin::~Admin() {}
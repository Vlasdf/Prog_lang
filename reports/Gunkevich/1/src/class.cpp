#include "class.h"
#include <iostream>
resorces::resorces() :name(0), age(0), rank(0) { std::cout << "����������� ��� ���������� ������" << std::endl; }
resorces::resorces(const char* n, int a, int g)
{
    std::cout << "����������� � ����������� ������" << std::endl;
    name = n;
    age = a;
    rank = g;
}

resorces::resorces(const resorces& s)//���������� �����������
{
    std::cout << "���������� ����������� ������" << std::endl;
    this->name = s.name;
    this->age = s.age;
    this->rank = s.rank;
}
resorces::~resorces()
{
    std::cout << "Deleting data" << std::endl;
}
void resorces::set(const char* n, int a, int g)//��������� ����� ������
{
    name = n;
    age = a;
    rank = g;
}
void  resorces::print()//�������� ����� ������
{
    std::cout << name << " " << age << " " << rank << std::endl;
}
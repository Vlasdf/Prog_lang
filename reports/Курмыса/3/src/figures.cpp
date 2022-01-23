#include <iostream>
#include <cmath>
#include "figures.h"

using namespace std;

Figure::Figure() {
  a = 0;
  r = 0;
  name = "������";
  cout << "������ ������ ������ Figure ����� " << ++figures << " ����� ����������� �� ���������.\n";
}

Figure::Figure(float a, float r, string name): a(a), r(r), name(name) {
  cout << "������ ������ ������ Figure ����� " << ++figures << " ����� ����������� � �����������.\n";
}

Figure::~Figure() {
  cout << "������ ������ Figure ����� " << figures-- << " ������� ���������.\n";
}

bool
Figure::operator ==(const Figure& right) {
  return (this->name == right.name) && (this->a == right.a) && (this->r == right.r);
}

bool
Figure::operator !=(const Figure& right) {
  return !(*this == right);
}

const Figure&
Figure::operator =(const Figure& right) {
  a = right.a;
  r = right.a;
  name = right.name;
  return *this;
}

Cube::Cube(): Figure(0, 0, "���") {
  cout << "������ ������ ������ Cube ����� " << ++cubes << " ����� ����������� �� ���������.\n";
}

Cube::Cube(float a): Figure(a, 0, "���") {
  cout << "������ ������ ������ Cube ����� " << ++cubes << " ����� ����������� � �����������.\n";
}

Cube::~Cube() {
  cout << "������ ������ Cube ����� " << cubes-- << " ������� ���������.\n";
}

const float
Cube::V() const {
  return a * a * a;
}

const float
Cube::S() const {
  return 6 * a * a;
}

const void
Cube::info() const {
  cout << "��������: " << this->name << endl;
  cout << "����� ����� a: " << this->a << endl;
  cout << "����� V: " << this->V() << endl;
  cout << "������� ����������� S: " << this->S() << endl << endl;
}

Cylinder::Cylinder(): Figure(0, 0, "�������") {
  cout << "������ ������ ������ Cylinder ����� " << ++cylinders << " ����� ����������� �� ���������.\n";
}

Cylinder::Cylinder(float a, float r): Figure(a, r, "�������") {
  cout << "������ ������ ������ Cylinder ����� " << ++cylinders << " ����� ����������� � �����������.\n";
}

Cylinder::~Cylinder() {
  cout << "������ ������ Cylinder ����� " << cylinders-- << " ������� ���������.\n";
}

const float
Cylinder::V() const {
  return a * r * r * (atan(1) * 4); // ��������� � ������� = Pi :)
}

const float
Cylinder::S() const {
  return 2 * a * (atan(1) * 4) * r;
}

const void
Cylinder::info() const {
  cout << "��������: " << this->name << endl;
  cout << "������ a: " << this->a << endl;
  cout << "������ ��������� r: " << this->r << endl;
  cout << "����� V: " << this->V() << endl;
  cout << "������� ����������� S: " << this->S() << endl << endl;
}

Tetrahedron::Tetrahedron(): Figure(0, 0, "��������") {
  cout << "������ ������ ������ Tetrahedron ����� " << ++tetrahedrons << " ����� ����������� �� ���������.\n";
}

Tetrahedron::Tetrahedron(float a): Figure(a, 0, "��������") {
  cout << "������ ������ ������ Tetrahedron ����� " << ++tetrahedrons << " ����� ����������� � �����������.\n";
}

Tetrahedron::~Tetrahedron() {
  cout << "������ ������ Tetrahedron ����� " << tetrahedrons-- << " ������� ���������.\n";
}

const float
Tetrahedron::V() const {
  return a * a * a / (sqrt(2) * 6);
}

const float
Tetrahedron::S() const {
  return a * a * sqrt(3);
}

const void
Tetrahedron::info() const {
  cout << "��������: " << this->name << endl;
  cout << "����� ����� a: " << this->a << endl;
  cout << "����� V: " << this->V() << endl;
  cout << "������� ����������� S: " << this->S() << endl << endl;
}
#include <iostream>
#include <vector>
#include "figures.h"
#include "array.h"

using namespace std;

int Figure::figures = 0;
int Cube::cubes = 0;
int Cylinder::cylinders = 0;
int Tetrahedron::tetrahedrons = 0;

int main() {
  cout << "�������� ���������, � ������� ������� �������� �������: �������������� ������ (���, �������, ��������). ������� ����� ��� �������� ��������� ����� (������� ���������� �� ������� �����), � ������� ����������� �������� �[ ]�, � ����� ����������� ������� �������� ������ ������ � ������� �����������. ��� �������� ������ � ��� �������� ����������� �������� �==�, �!=�, �=�. ������������������ ������ ����������.\n\n";

  Cube f1;
  Cube f2(10);
  Cylinder f3;
  Cylinder f4(20, 1.5);
  Tetrahedron f5;
  Tetrahedron f6(10);

  cout << "�������� ==\n";
  cout << "������ f1 � f1" << (f1 == f1 ? " " : " �� ") << "�����\n";
  cout << "������ f1 � f6" << (f1 == f6 ? " " : " �� ") << "�����\n";

  cout << "\n�������� !=\n";
  cout << "������ f5 � f2" << (f5 != f2 ? " �� " : " ") << "�����\n";
  cout << "������ f6 � f6" << (f6 != f6 ? " �� " : " ") << "�����\n";

  Array figures;
  figures.push_back(&f1);
  figures.push_back(&f2);
  figures.push_back(&f3);
  figures.push_back(&f4);
  figures.push_back(&f5);
  figures.push_back(&f6);

  Array arr;
  
  while (true) {
    cout << "0 - ����� �� ���������\n1 - �������� ������ � ���������� � � ������\n2 - ���������� ������������ ������ � ����� �������\n3 - ������� ������������ ������ ������ �������\n4 - �������� ������� �� ���������� ���������\n5 - �������� �������� �������� �������\n6 - ������� �������� ���� ���������\n";
    int choice;
    cin >> choice;
    if (choice == 0) {
      cout << "������������ ����� �� ���������...\n";
      break;
    } else if (choice == 1) {
      cout << "0 - ����� �� �������\n1 - ������� ���\n2 - ������� �������\n3 - ������� ��������\n";
      int choice_2;
      cin >> choice_2;
      if (choice_2 == 0) {
        cout << "������������ ����� �� �������...\n";
        continue;
      } else if (choice_2 == 1) {
        cout << "������� ����� ����� ����: ";
        int a;
        cin >> a;
        arr.push_back(new Cube(a));
      } else if (choice_2 == 2) {
        cout << "������� ����� ������ ��������: ";
        int a;
        cin >> a;
        cout << "������� ����� ������� ��������� ��������: ";
        int r;
        cin >> r;
        arr.push_back(new Cylinder(a, r));
      } else if (choice_2 == 3) {
        cout << "������� ����� ����� ���������: ";
        int a;
        cin >> a;
        arr.push_back(new Tetrahedron(a));
      } else {
        cout << "������������ ��������!\n";
      }
    } else if (choice == 2) {
      cout << "������� ������ ������ (�� 0 �� 5), ������� �� ������ ��������� � ������ �����: ";
      int index;
      cin >> index;
      arr.push_back(figures[index]);
    } else if (choice == 3) {
      if (arr.len() == 0) {
        cout << "������ ����!\n";
      }
      else {
        cout << "������� ������ ������ (�� 0 �� 5), ������� �� ������ ��������� � ������ �����: ";
        int index;
        cin >> index;
        cout << "������� �������, ����� ������� ������ ���� ��������� ������ ������ (�� 0 �� " << arr.len() - 1 << "): ";
        int index_after;
        cin >> index_after;
        arr.insert(figures[index], index_after);
      }
    } else if (choice == 4) {
      if (arr.len() == 0) {
        cout << "������ ����!\n";
      }
      else {
        cout << "������� ����� ������ ��������� � �������� ����� ��������� �� 0 �� " << arr.len() - 1 << ": ";
        int begin, end;
        cin >> begin >> end;
        arr.trunc(begin, end);
      }
    } else if (choice == 5) {
      arr.mid_del();
    } else if (choice == 6) {
      cout << "������ ��������� �������:\n";
      arr.show_arr();
    }
  }
} 
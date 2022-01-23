#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <Windows.h>

using namespace std;

class Product {
private:
    char *name;
    int number;
    float price;

public:
    Product(); //����������� ��� ����������
    Product(char *, const int, const float); //����������� � �����������
    Product(const Product &); //����������� �����
    ~Product(); //���������� ������

    char *GatName(); //������� ��������� ����� ������
    int GetNumber(); //������� ��������� ���������� ������
    float GetPrice(); //������� ��������� ���� ������
    void Show(); //������� ��� ��������� ����� ����������
    void SetName(char *); //������� ��� ��������� �������� ����� ������
    void SetNumber(int); //������� ��� ��������� �������� ���������� �������
    void SetPrice(float); //������� ��� ��������� �������� ���� �������
    void Set(char *, int, float); //������� ��� ��������� �������� ����� ����������
};
#endif
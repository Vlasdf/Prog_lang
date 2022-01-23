#include "class.h"

Product::Product() {
    name = "-";
    number = 0;
    price = 0;
    cout << "����������� ��� ���������� ������ ��� ������ " << this << endl;
}

Product::Product(char *NAME, const int NUMBER, const float PRICE) {
    name = NAME;
    number = NUMBER;
    price = PRICE;
    cout << "����������� � ����������� ������ ��� ������ " << this << endl;
}

Product::Product(const Product &Copy) {
    name = Copy.name;
    number = Copy.number;
    price = Copy.price;
    cout << "����������� ������������ ������ ��� ������ " << this << endl;
}

Product::~Product() {
    delete name;
    delete &number;
    delete &price;
    cout << "���������� ��� ������ ��� ������� " << this << endl;
}

char *Product::GatName() {
    return name;
}

int Product::GetNumber() {
    return number;
}

float Product::GetPrice() {
    return price;
}

void Product::Show() {
    cout << "��������: " << name << endl
         << "����������: " << number << endl
         << "����: " << price << " ���." << endl << endl;
}

void Product::SetName(char *new_name) {
    name = new_name;
}

void Product::SetNumber(int new_number) {
    number = new_number;
}

void Product::SetPrice(float new_price) {
    price = new_price;
}

void Product::Set(char *new_name, int new_number, float new_price) {
    name = new_name;
    number = new_number;
    price = new_price;
}
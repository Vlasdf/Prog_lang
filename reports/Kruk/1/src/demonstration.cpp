 #include "class.h"

Product Example(Product &a) {
    Product temp(a);
    temp.SetName("׸���� ����");
    return temp;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Product List1[] = {Product("����", 10, 0.79), //��������� �������
                       Product("�����", 5, 0.89)}; //� ����������� ������
    Product *p = &List1[0]; //���������� ��������� �� ��������� ������
    p->Show(); //������������� ��������� �� ��������� ������
    List1[1].Show();

    Product *List2 = new Product[2]; //��������� ������� � ������������ ������
    void (Product::*f)(char *, int, float) = &Product::Set; //���������� ��������� �� �������
    (List2[0].*f)("�������", 100, 0.20); //������������� ��������� �� �������
    (List2[1].*f)("�������", 124, 1.34); //������������� ��������� �� �������
    List2[0].Show();
    List2[1].Show();

    Product Copy = Example(List1[0]);
    Copy.Show();

    delete[] List2;
}
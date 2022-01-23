#ifndef ARRAY_H
#define ARRAY_H

class Array {
  protected:
    const Figure **arr; // ������ ���������� �� ������
    int count; // ���������� ���������
  public:
    Array(); // ����������� ������� �������
    ~Array(); // ����������
    int len() const; // ������� �������� ����� �������
    void show_arr(); // ����� ���������� �� ���������
    void push_back(const Figure*); // ������� � �����
    void insert(const Figure*, int); // �������
    void trunc(int, int); // �������� �� ��������� [begin, end]
    void mid_del(); // �������� �� ��������
    const Figure* operator [](int); // �������� "[]"
};

#endif
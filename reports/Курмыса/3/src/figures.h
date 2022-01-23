#ifndef FIGURES_H
#define FIGURES_H

using namespace std;

class Figure { // ����������� ����� �����
  protected:
    float a; // ����� ����� ������ (���� ������ ��������, 
             // ������ ��� ������ �� � ��� =/)
    float r; // ����� ������� ���������� ��������� (������ ��� ��������)
    string name; // �������� ������
    static int figures; // ���������� �����
  public:
    Figure();
    Figure(float, float, string);
    virtual ~Figure();
    virtual const float V() const = 0; // ������ ����������� ������� ������ ������ 
    virtual const float S() const = 0; // ������ ����������� ������� �������
                                // ����������� ������
    virtual const void info() const = 0; // ������ ����������� ������� ������
                             // ���������� � ������
    bool operator ==(const Figure&); // ���������� ���������
                                     // ���������
    bool operator !=(const Figure&); // ���������� ���������
                                     // ������������� =P
    const Figure& operator =(const Figure&); // ���������� ���������
                                             // ������������
};

class Cube: public Figure { // ����� ���
  protected:
    static int cubes; // ���������� �����
  public:
    Cube();
    Cube(float);
    ~Cube();
    const float V() const override;
    const float S() const override;
    const void info() const override;
};

class Cylinder: public Figure { // ����� �������
  protected:
    static int cylinders; // ���������� ���������
  public:
    Cylinder();
    Cylinder(float, float);
    ~Cylinder();
    const float V() const override;
    const float S() const override;
    const void info() const override;
};

class Tetrahedron: public Figure { // ����� �������� (����������)
  protected:
    static int tetrahedrons; // ���������� ����������
  public:
    Tetrahedron();
    Tetrahedron(float);
    ~Tetrahedron();
    const float V() const override;
    const float S() const override;
    const void info() const override;
};

#endif
//
// Created by DualistOFFsetWOT on 26.12.2021.
//



#include "iostream"
#include "string"
#include "list"
using namespace std;


class Engine {//���������
    static list<Engine*>objects;
protected:
    int power_r;//vjoyjcnm
    float cost_t;//���������
public:
    Engine(int power, float cost);
    virtual ~Engine();
    static void print();
    virtual void show() = 0;
    void add();
};


class Combustion_engine : public Engine {//��������� ����������� ��������
protected:
    int fuel_l;//������ �������
public:
    Combustion_engine(int power, float cost, int fuelL);
    void show() override;
    virtual ~Combustion_engine();
};


class Diesel : public Combustion_engine {//������
protected:
    string transport_t;//��� ����������
public:
    Diesel(int power, float cost, int fuel, string transport_t);
    virtual ~Diesel();
    void show() override;
};


class Turbojet_engine : public Engine {//��������������� ���������
protected:
    string vendor_r; //���������
public:
    Turbojet_engine(int power, float cost, string vendor);
    virtual ~Turbojet_engine();
    void show() override;
};


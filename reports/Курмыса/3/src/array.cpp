#include <iostream>
#include <cmath>
#include "figures.h"
#include "array.h"

using namespace std;

Array::Array(): arr(nullptr), count(0) {
  cout << "������ ������ ����� ����� �����������.\n";
}

Array::~Array() {
  delete[] arr;
  cout << "��������� ������ ����� ����� ����������.\n";
}

int
Array::len() const {
  return count;
}

void
Array::show_arr() {
  if (count == 0) {
    cout << "������ ����!\n";
  } else {
    for (int i = 0; i < count; i++) {
      arr[i]->info();
    }
  }
}

void
Array::push_back(const Figure* figure) {
  if (figure != NULL) {
    if (count == 0) {
      count = 1;
      arr = new const Figure* [count];
      arr[0] = figure;
      cout << "������ ������� �������� ������!\n";
    } else {
      count++;
      auto new_arr = new const Figure* [count];
      for (int i = 0; i < count - 1; i++) {
        new_arr[i] = arr[i];
      }
      new_arr[count - 1] = figure;
      arr = new_arr;
      cout << "������ ������� �������� ������!\n";
    }
  }
}

void
Array::insert(const Figure* figure, int index) {
  if (figure != NULL) {
    try {
      if (index >= count || index < 0) {
        throw "����� �� ������� �������!\n";
      }
      count++;
      auto new_arr = new const Figure* [count];
      for (int i = 0; i < index + 1; i++) {
        new_arr[i] = arr[i];
      }
      new_arr[index + 1] = figure;
      for (int i = index + 1; i < count; i++) {
        new_arr[i + 1] = arr[i];
      }
      arr = new_arr;
      cout << "������ ������� �������� ������!\n";
      }
    catch (char const* s) {
      cout << s << endl;
    }
  }
}

void
Array::trunc(int begin, int end) {
  try {
    if (begin > end) {
      throw "������ ��������� ������ ���� �� ������ ����� ���������!\n";
    }
    if (begin < 0 || end >= count) {
      throw "����� �� ������� �������!\n";
    }
    count = end - begin + 1;
    auto new_arr = new const Figure* [count];
    for (int i = begin; i < end + 1; i++) {
      new_arr[i - begin] = arr[i];
    }
    arr = new_arr;
    cout << "������ ������� ������!\n";
  }
  catch (char const* s) {
    cout << s << endl;
  }
}

void
Array::mid_del() {
  try {
    if (count == 0) {
      throw "������ ����!\n";
    }
      int del_index = count / 2;
    count--;
    auto new_arr = new const Figure* [count];
    for (int i = 0; i < del_index; i++) new_arr[i] = arr[i];
    for (int i = del_index + 1; i < count + 1; i++) new_arr[i - 1] = arr[i];
    arr = new_arr;
    cout << "������� ������� ������� ������� �������!\n";
  }
  catch (char const* s) {
    cout << s << endl;
  }
}

const Figure*
Array::operator [](int index) {
  try {
    if (index >= count || index < -count) {
      throw "����� �� ������� �������!\n";
    }
    return (index >= 0) ? arr[index] : arr[count + index];
  }
  catch (char const* s) {
    cout << s << endl;
  }
}
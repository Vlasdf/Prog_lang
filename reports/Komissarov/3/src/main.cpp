#include <iostream>
#include <iomanip>
#include <string.h>
#include "errors.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "6. H������� ���������, � ������� ������� �������� �������: ������ � ��������� (������������� ����������, ������� ���������������, ����������� ������������� ��������, ����������� �������� � ����������). ������� ����� ��� �������� ��������� ������ (������� ���������� �� ������� �����), � ������� ����������� �������� �[ ]�. ��� �������� ������ � ��� �������� ����������� �������� �==�, �!=�, �=�. ������������������ ������ ����������.\n" << std::endl;

	AccessError AError("������������ ����������");
	TranslateError TError1("������ �������������� 1");
	TranslateError TError2("������ �������������� 2");
	ValueTranslateError VTError("���������� ������������� ��������");
	InterfaceTranslateError ITError("���������� �������� � ����������");
	ErrorArray EA;

	EA.AddToList(&AError);
	EA.AddToList(&TError1);
	EA.AddToList(&TError2);
	EA.AddToList(&VTError);
	EA.AddToList(&ITError);
	EA.PrintArray();

	EA[2];
	EA[1];
	std::cout << (TError1 == TError2) << std::endl;
	TError1 = TError2;
	std::cout << (TError1 == TError2) << std::endl;
	return 0;
}

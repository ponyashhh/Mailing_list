#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

int main() {
    AddressBook addressBook;

    // �������� �����
    addressBook.inputAddresses();

    // ���� ����� ��� ��������
    vector<Address> selectedAddresses = addressBook.selectAddresses();

    // ϳ�������� ������ � �������� ������
    addressBook.countEvenOdd(selectedAddresses);

    return 0;
}

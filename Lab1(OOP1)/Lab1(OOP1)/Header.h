#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

class Address {
public:
    // �����������
    Address(const string& streetName, int houseNum);

    // ������ ��� ������ �������
    int getHouseNumber() const;

    // ��������� ���������� ��� ������
    void print() const;

private:
    string street;
    int houseNumber;
};

class AddressBook {
public:
    // ����� ��� ��������� ������
    void addAddress(const string& streetName, int houseNum);

    // ����� ��� ������ ����� ��� ��������
    vector<Address> selectAddresses() const;

    // ����� ��� ��������� ������ �� �������� ������ �������
    void countEvenOdd(const vector<Address>& selectedAddresses) const;

    // ����� ��� �������� �����
    void inputAddresses();

private:
    vector<Address> addresses;
};


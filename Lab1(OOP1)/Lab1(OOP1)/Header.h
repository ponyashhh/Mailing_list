#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

class Address {
public:
    // Конструктор
    Address(const string& streetName, int houseNum);

    // Геттер для номера будинку
    int getHouseNumber() const;

    // Виведення інформації про адресу
    void print() const;

private:
    string street;
    int houseNumber;
};

class AddressBook {
public:
    // Метод для додавання адреси
    void addAddress(const string& streetName, int houseNum);

    // Метод для вибору адрес для розсилки
    vector<Address> selectAddresses() const;

    // Метод для підрахунку парних та непарних номерів будинків
    void countEvenOdd(const vector<Address>& selectedAddresses) const;

    // Метод для введення адрес
    void inputAddresses();

private:
    vector<Address> addresses;
};


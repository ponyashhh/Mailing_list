#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

// �����������
Address::Address(const string& streetName, int houseNum) : street(streetName), houseNumber(houseNum) {}
// ������ ��� ������ �������
int Address::getHouseNumber() const {
    return houseNumber;
}
// ��������� ���������� ��� ������
void Address::print() const {
    cout << street << " " << houseNumber;
}


// ����� ��� ��������� ������
void AddressBook::addAddress(const string& streetName, int houseNum) {
    Address newAddress(streetName, houseNum);
    addresses.push_back(newAddress);
}
// ����� ��� ������ ����� ��� ��������
vector<Address> AddressBook::selectAddresses() const {
    vector<Address> selectedAddresses;
    char choice;
    for (const auto& addr : addresses) {
        addr.print();
        cout << " - Add to the mailing list? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            selectedAddresses.push_back(addr);
        }
    }
    return selectedAddresses;
}
// ����� ��� ��������� ������ �� �������� ������ �������
void AddressBook::countEvenOdd(const vector<Address>& selectedAddresses) const {
    int evenCount = 0, oddCount = 0;
    for (const auto& addr : selectedAddresses) {
        if (addr.getHouseNumber() % 2 == 0) {
            ++evenCount;
        }
        else {
            ++oddCount;
        }
    }
    cout << "Number of addresses with paired house numbers: " << evenCount << endl;
    cout << "Number of addresses with unpaired house numbers: " << oddCount << endl;
}
// ����� ��� �������� �����
void AddressBook::inputAddresses() {
    int n;
    cout << "Enter the number of addresses: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string street;
        int houseNumber;
        cout << "Enter the street: ";
        cin.ignore();  // ������� ������
        getline(cin, street);
        cout << "Enter the house number: ";
        cin >> houseNumber;
        addAddress(street, houseNumber);
    }
}

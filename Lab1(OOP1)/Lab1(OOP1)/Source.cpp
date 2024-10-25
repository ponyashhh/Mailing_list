#include <iostream>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;

int main() {
    AddressBook addressBook;

    // Введення адрес
    addressBook.inputAddresses();

    // Вибір адрес для розсилки
    vector<Address> selectedAddresses = addressBook.selectAddresses();

    // Підрахунок парних і непарних номерів
    addressBook.countEvenOdd(selectedAddresses);

    return 0;
}

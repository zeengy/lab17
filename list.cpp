#include "list.h"
#include <iostream>
#include <limits>

void List::addPhone(const Phone &phone) {
    phones.push_back(phone);
}

void List::removePhone(size_t index) {
    if (index < phones.size()) {
        phones.erase(phones.begin() + index);
    } else {
        std::cout << "Індекс за межами діапазону\n";
    }
}

Phone& List::getPhone(size_t index) {
    if (index < phones.size()) {
        return phones[index];
    } else {
        throw std::out_of_range("Індекс за межами діапазону");
    }
}

void List::print() const {
    for (const auto &phone : phones) {
        phone.print();
    }
}

const Phone& List::findCheapestPhone(float diagonal) const {
    const Phone *cheapest = nullptr;
    for (const auto &phone : phones) {
        if (phone.getScreen() == diagonal) {
            if (!cheapest || phone.getPrice() < cheapest->getPrice()) {
                cheapest = &phone;
            }
        }
    }

    if (cheapest) {
        return *cheapest;
    } else {
        throw std::runtime_error("Телефон не знайдено");
    }
}
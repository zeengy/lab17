#include <iostream>
#include "list.h"
#include "entity.h"

void printMenu() {
    std::cout << "Меню:\n";
    std::cout << "1. Додати телефон\n";
    std::cout << "2. Видалити телефон\n";
    std::cout << "3. Показати всі телефони\n";
    std::cout << "4. Знайти найдешевший телефон\n";
    std::cout << "5. Вийти\n";
}

int main() {
    List phoneList;
    int choice;
    std::string model;
    float price, screen;

    while (true) {
        printMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Введіть модель: ";
                std::cin >> model;
                std::cout << "Введіть ціну: ";
                std::cin >> price;
                std::cout << "Введіть діагональ: ";
                std::cin >> screen;
                phoneList.addPhone(Phone(model, price, screen));
                break;
            case 2:
                std::cout << "Введіть індекс для видалення: ";
                size_t index;
                std::cin >> index;
                phoneList.removePhone(index);
                break;
            case 3:
                phoneList.print();
                break;
            case 4:
                std::cout << "Введіть діагональ: ";
                std::cin >> screen;
                phoneList.findCheapestPhone(screen).print();
                break;
            case 5:
                return 0;
            default:
                std::cout << "Невірний вибір!\n";
        }
    }

    return 0;
}
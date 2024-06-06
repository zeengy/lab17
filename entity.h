#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>

class Phone {
private:
    std::string model;
    float price;
    float screen;

public:
    Phone();
    Phone(const std::string &model, float price, float screen);
    Phone(const Phone &other);
    ~Phone();

    std::string getModel() const;
    void setModel(const std::string &model);

    float getPrice() const;
    void setPrice(float price);

    float getScreen() const;
    void setScreen(float screen);

    void print() const;
};

#endif // ENTITY_H
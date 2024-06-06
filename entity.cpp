#include "entity.h"

Phone::Phone() : model(""), price(0.0), screen(0.0) {
    std::cout << "Default constructor called\n";
}

Phone::Phone(const std::string &model, float price, float screen) 
    : model(model), price(price), screen(screen) {
    std::cout << "Parameterized constructor called\n";
}

Phone::Phone(const Phone &other) 
    : model(other.model), price(other.price), screen(other.screen) {
    std::cout << "Copy constructor called\n";
}

Phone::~Phone() {
    std::cout << "Destructor called\n";
}

std::string Phone::getModel() const {
    return model;
}

void Phone::setModel(const std::string &model) {
    this->model = model;
}

float Phone::getPrice() const {
    return price;
}

void Phone::setPrice(float price) {
    this->price = price;
}

float Phone::getScreen() const {
    return screen;
}

void Phone::setScreen(float screen) {
    this->screen = screen;
}

void Phone::print() const {
    std::cout << "Model: " << model << ", Price: " << price << ", Screen: " << screen << "\n";
}
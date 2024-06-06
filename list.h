#ifndef LIST_H
#define LIST_H

#include "entity.h"
#include <vector>

class List {
private:
    std::vector<Phone> phones;

public:
    void addPhone(const Phone &phone);
    void removePhone(size_t index);
    Phone& getPhone(size_t index);
    void print() const;
    const Phone& findCheapestPhone(float diagonal) const;
};

#endif // LIST_H
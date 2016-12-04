#include "Child.h"
#include <iostream>

Child::Child() {
    cout << "Child ctor" << endl;
}

Child::Child(const Child& child) {
    cout << "Child cctor" << endl;
    this->name = child.name;
}

Child& Child::operator=(const Child& child) {
    cout << "Assignment" << endl;
    this->name = child.name;
    return *this;
}

ostream& operator<<(ostream& os, const Child& child) {
    os << "Child:" << child.name;
    return os;
}

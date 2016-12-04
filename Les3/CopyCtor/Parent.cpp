#include "Parent.h"

Parent::Parent() {
}

Parent::Parent(const Parent& parent) {
    cout << "Parent cctor" << endl;
    this->child = parent.child;
    this->name = parent.name;
}

ostream& operator<<(ostream& os, const Parent& parent) {
    os << "Parent:" << parent.name << " " << parent.child << endl;
    return os;
}

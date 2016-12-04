#include "ParentP.h"

ParentP::ParentP() {
}

ParentP::ParentP(const ParentP& parent) {
    cout << "Parent CCTOR" << endl;
    this->child = parent.child;
    this->name = parent.name;
}

ostream& operator<<(ostream& os, const ParentP& parent) {
    os << "Parent:" << parent.name << " " << *parent.child << endl;
    return os;
}

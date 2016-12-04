#include "ParentPEigen.h"

ParentPEigen::ParentPEigen() {
    cout << "ParentPEigen ctor" << endl;
}

ParentPEigen::ParentPEigen(const ParentPEigen& p) {
    cout << "ParentPEigen CCTOR" << endl;
    this->name = p.name;
    this->child = p.child;
}

ostream& operator<<(ostream& os, const ParentPEigen& p) {
    os << "ParentPEigen:" << p.name << " " << *p.child << endl;
    return os;
}

ParentPEigen& ParentPEigen::operator=(const ParentPEigen& other) {
    this->name = other.name;

    // shallow copy!
    this->child = other.child;

    // deep copy
//    if (this->child) delete this->child; // opruimen - alleen als eigenaar
    this->child = new Child();
    this->child->name = other.child->name;

    return *this;
}

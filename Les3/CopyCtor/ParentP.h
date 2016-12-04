#pragma once

#include <iostream>

#include "Child.h"
#include "string"

using namespace std;

class ParentP {
    public:
        ParentP();

        ParentP(const ParentP& parent);

        Child* child;
        string name;

        friend ostream& operator<<(ostream& os, const ParentP& parent);
};


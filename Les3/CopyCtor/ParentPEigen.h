#pragma once

#include <iostream>
#include <string>

#include "Child.h"

using namespace std;

class ParentPEigen {
    public:
        ParentPEigen();

        ParentPEigen(const ParentPEigen& p);

        ParentPEigen& operator=(const ParentPEigen& child);

        string name;

        Child* child;

        friend ostream& operator<<(ostream& os, const ParentPEigen& p);
};


#pragma once

#include <iostream>

#include "Child.h"
#include "string"

using namespace std;

class Parent {
    public:
        Parent();

        Parent(const Parent& parent);

        Child child;
        string name;

        friend ostream& operator<<(ostream& os, const Parent& parent);
};


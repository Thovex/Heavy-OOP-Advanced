#pragma once

#include "string"

using namespace std;

class Child {
    public:
        Child();

        Child(const Child& child);

        string name;

        Child& operator=(const Child& child);

        friend ostream& operator<<(ostream& os, const Child& simple);
};
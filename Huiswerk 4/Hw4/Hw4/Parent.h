#pragma once

#include <string>
#include <ostream>

using namespace std;

class Parent {
    public:

		Parent(const Parent* parent);
        Parent(string name);
		void swap(Parent & other);
		Parent& operator=(Parent other);
		friend ostream& operator<<(ostream& os, const Parent& parent);

    private:
        string name;
};


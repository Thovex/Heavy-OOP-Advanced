#pragma once

#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class Collector {
    public:
        Collector() {
        }

        void add(T element) {
            elements.push_back(element);
        }

        void dump() {
            for (int i = 0; i < elements.size(); i++) {
                cout << elements[i] << endl;
            }
        }

    private:
        vector<T> elements;
};
#include <iostream>
#include "Collector.h"

using namespace std;

template<typename T>
void dumpCollector(Collector<T> c) {
//void dumpCollector(Collector c) {
    c.dump();
}

int main() {
    Collector<int> collectorInt;
    for (int i: {1, 3, 17, 143, 9}) {
        collectorInt.add(i);
    }
    dumpCollector(collectorInt);

    Collector<string> collectorString;
    for (string s: {"aap", "noot", "mies"}) {
        collectorString.add(s);
    }
    dumpCollector(collectorString);

    return 0;
}
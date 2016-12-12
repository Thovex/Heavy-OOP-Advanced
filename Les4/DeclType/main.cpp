#include <iostream>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto multiply(T first, U second) -> decltype(first * second) {
    return first * second;
};

int main() {
    auto i = 15;
    auto pietje = "dit is een string";
    auto henkie = string("dit is een string");

    cout << "type van i=" << typeid(i).name() << endl;
    cout << "type van pietje=" << typeid(pietje).name() << endl;
    cout << "type van henkie=" << typeid(henkie).name() << endl;

    auto result1 = multiply<int, float>(15, 27.2f);
    cout << result1 << " type=" << typeid(result1).name() << endl;

    auto result2 = multiply<int, int>(15, 27);
    cout << result2 << " type=" << typeid(result2).name() << endl;

    return 0;
}
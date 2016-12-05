#include <iostream>
#include <string>

using namespace std;

/* losse functies per type
int biggest(int a, int b) {
    if (a > b) return a;
    return b;
}

float biggest(float a, float b) {
    if (a > b) return a;
    return b;
}

string biggest(string a, string b) {
    if (a > b) return a;
    return b;
}
*/

// template functie
template<typename T>
T biggest(T first, T second) {
    if (first > second) return first;
    return second;
}


int main() {

    for (int i: {1, 3, 180, 2, -15}) {
//        cout << biggest<int>(i, 27) << endl;
//        cout << biggest(i, 2) << endl; // type inference
    }

    cout.precision(20);
    cout << biggest<float>(147.1543f, 234543.23423f) << endl;
//    cout << biggest(147, 234543.23423f) << endl; // type inference: selecteert <int>

    for (string s: {"aap", "noot", "mies", "boom", "roos", "vuur"}) {
        cout << biggest<string>(s, "henkie") << endl;
    }

    return 0;
}
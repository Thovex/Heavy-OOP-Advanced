#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

// deze template-functie gebruikt een 'function object' als predicate (net als vele STL algorithmes)
template<typename T>
void uploadWithProgress(int* data, int size, T pred) {
    // dummy
    for (int i = 0; i < 5; ++i) {
        this_thread::sleep_for(std::chrono::seconds(1));
        pred(size / 5 * i, size);
    }
}

// twee function objects (functors)
class ProgressPrinter {
    public:
        void operator()(int current, int total) {
            cout << "Uploaded " << current << " van " << total << endl;
        }
};

class ProgressFilePrinter {
    public:
        void operator()(int current, int total) {
            cout << "Uploaded " << current << " van " << total << endl;
        }
};

int main() {
    int* data;
    bool logToFile = true; // bv van commandline parameter

    ProgressPrinter p;
    ProgressFilePrinter f;

    uploadWithProgress(data, 100, p);
    uploadWithProgress(data, 100, f);

    return 0;
}
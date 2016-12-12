#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

// een typedef maakt de code leesbaarder, maar functionaliteit exact hetzelfde
typedef void (* progressFunc)(int, int);

void uploadWithProgress(int* data, int size, progressFunc myProgressFunction) {
    // dummy implementatie
    for (int i = 0; i < 5; ++i) {
        myProgressFunction(size / 5 * i, size);
        this_thread::sleep_for(std::chrono::seconds(1));
    }
    myProgressFunction(size, size);
}

void progress(int current, int total) {
    cout << "Uploaded " << current << " van " << total << endl;
}

void progressToFile(int current, int total) {
    cout << "IN EEN FILE: Uploaded " << current << " van " << total << endl;
}

int main() {
    int* data;
    bool logToFile = true; // bv van commandline parameter

    progressFunc myProgressFunction; // definieer function-pointer variabele, nu n.a.v. typedef

    // afhankelijk van de boolean, set function-pointer variabele naar adres van een van de twee functies
    if (logToFile) {
        myProgressFunction = &progressToFile;
    } else {
        myProgressFunction = &progress;
    }

    uploadWithProgress(data, 100, myProgressFunction);

    return 0;
}
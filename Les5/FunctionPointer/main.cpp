#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void uploadWithProgress(int* data, int size, void (* progressFunc)(int, int)) {
    // dummy implementatie
    for (int i = 0; i < 5; ++i) {
        (*progressFunc)(size / 5 * i, size);
        this_thread::sleep_for(std::chrono::seconds(1));
    }
    (*progressFunc)(size, size);
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

    void (* myProgress)(int, int); // definieer function-pointer variabele

    // afhankelijk van de boolean, set function-pointer variabele naar adres van een van de twee functies
    if (logToFile) {
        myProgress = &progressToFile;
    } else {
        myProgress = &progress;
    }

    uploadWithProgress(data, 100, myProgress);

    return 0;
}
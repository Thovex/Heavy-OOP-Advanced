#include <iostream>

#include <vector>

using namespace std;

int main() {
    vector<string> colours{"red", "green", "blue", "orange", "green", "orange", "black", "purple"};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
    // - de vector in 1 nieuwe vectoren te splitsen, 1 met alles voor 'purple', 1 met alles er na
    // - alle elementen UPPERCASE te maken.
    // - alle dubbele te verwijderen

    vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
    // - alle negatieve elementen te verwijderen
    // - voor alle elementen te bepalen of ze even of oneven zijn
    // - de som, het gemiddelde, en het product van alle getallen te berekenen

    return 0;
}
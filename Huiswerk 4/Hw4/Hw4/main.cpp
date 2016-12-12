#include <iostream>
#include <string>
#include "Parent.h"

using namespace std;

// LET OP: deze code compileert nu niet!! (waarom niet?...)
int main() {

    Parent* p1 = new Parent("Parent1");
    cout << *p1 << endl;

	// Dit is een deep copy..?
    Parent* p2 = new Parent(*p1); // roept de copy constructor aan
    cout << *p2 << endl;

    Parent* p3 = new Parent("Parent3");
    cout << *p3 << endl;

	// Dit is nu ook een deep copy.
    *p3 = *p1; // roept de assignment operator aan
    cout << *p3 << endl;

	string input;
	cin >> input;

    return 0;
}
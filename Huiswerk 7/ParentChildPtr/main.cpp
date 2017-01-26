#include <iostream>
#include <string>
#include "Parent.h"
#include "Child.h"
#include <vector>
#include <memory>

using namespace std;

Parent switchParentValue(Parent b, int value, string name) {
	b.reinitialize(value, name);
	return b;
}

void main() {

	Parent parent(150, "Aaa");

	cout << parent << endl;

	Parent newParent = switchParentValue(&parent, 100, "Bbb");

	cout << newParent << endl;

	string input;
	cin >> input;
		
	return;
}
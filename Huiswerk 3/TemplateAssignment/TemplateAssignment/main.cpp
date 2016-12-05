#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> stringVec = { "John", "Bob", "Joe", "Zack", "Randy" };
vector<float> floatVec = { 2, 3, 1, 7, 30 };

template<class T> T sortshit(vector<T> theVector) {
	sort(theVector.begin(), theVector.end());
	for (T &s : theVector) {
		cout << s << " ";
	}
	return NULL;
}

template<> string sortshit(vector<string> theVector) {
	sort(theVector.begin(), theVector.end());
	for (string &s : theVector) {
		cout << s << " ";
	}
	return "0";
}


int main() {

	sortshit(floatVec);
	sortshit(stringVec);

	string input;
	cin >> input;

	return 0;
}
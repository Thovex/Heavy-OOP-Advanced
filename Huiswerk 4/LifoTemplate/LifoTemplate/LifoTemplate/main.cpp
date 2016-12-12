#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T> class Stack {
	private:
		vector<T> item;

	public:
		void push(T const&);
		void pop(); 
		T peek() const;
};

template <class T> void Stack<T>::push(T const& elem) {
	item.push_back(elem);
}

template <class T> void Stack<T>::pop() {
	item.pop_back();
}

template <class T> T Stack<T>::peek() const {
	return item.back();
}

int main() {
	Stack<float> floatStack;
	Stack<string> stringStack;

	floatStack.push(7);
	cout << floatStack.peek() << endl;

	stringStack.push("hello");
	stringStack.push("hehehe");
	cout << stringStack.peek() << std::endl;


	stringStack.pop();

	string input;
	cin >> input;

}
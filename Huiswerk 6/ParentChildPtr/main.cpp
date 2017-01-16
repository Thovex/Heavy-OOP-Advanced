#include <iostream>
#include <string>
#include "Parent.h"
#include "Child.h"
#include <vector>
#include <memory>

using namespace std;

vector<Parent> parents;

void main() {

	/*Parent* pParent = new Parent("TestStandard");
	parentPtr pUnique(new Parent("TestUnique"));

	Parent* pParent = new Parent("Normal Pointer!");
	unique_ptr<Parent> pUnique = std::make_unique<Parent>("Unique Pointer!");
	shared_ptr<Parent> pShared = std::make_shared<Parent>("Shared Pointer!");

	*/

	unique_ptr<Parent> MainSharedParent = std::make_unique<Parent>("Papa");
	unique_ptr<Child> kid0 = std::make_unique<Child>("Abraham");
	unique_ptr<Child> kid1 = std::make_unique<Child>("Some other kid");

	shared_ptr<Parent> sharedParent = std::make_shared<Parent>("Mama"); // top
	shared_ptr<Parent> sharedParent2(new Parent(*sharedParent)); // new values
	shared_ptr<Parent> sharedParent3 = sharedParent; // shares values 

	parents.push_back(*sharedParent);
	parents.push_back(*sharedParent2);
	parents.push_back(*sharedParent3);

	sharedParent->getChild(*kid0);

	sharedParent2->getChild(*kid0);
	sharedParent2->getChild(*kid1);

	sharedParent2->deleteKid(0);

	std::cout << "Amount of Parents: " << parents.size() << "\n";

	sharedParent->printChildren();
	sharedParent2->printChildren();
	sharedParent3->printChildren();

	string input;
	cin >> input;
		
	return;
}
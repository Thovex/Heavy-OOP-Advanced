#include <iostream>
#include "Child.h"
#include "Parent.h"
#include "ParentP.h"
#include "ParentPEigen.h"

int main() {

    Child child1;
    child1.name = "one";
    Child child2;
    child2.name = "two";

    cout << child1 << endl;
    cout << child2 << endl;

    Child child3;
    child3 = child1;     // toewijzen aan bestaand object: assignment operator
    cout << child3 << endl;

    Child child4 = child1; // nieuw object: copy constructor (met een shallow copy)
    cout << child4 << endl;

    // copy ctor met geneste objecten
    Parent parent1;
    parent1.name = "parent1";
    parent1.child = child1;
    cout << parent1 << endl;

    Parent parent2;
    parent2 = parent1;         // parent2 is nu copie van parent1 - inclusief copie van child!
    parent2.name = "parent2";  // zet naam terug voor duidelijkheid
    parent2.child.name = "child in parent2";

    // iedere parent heeft zijn eigen copie van child1 gekregen
    cout << parent1 << endl;
    cout << parent2 << endl;


    // nu hetzelfde, maar met pointers naar child
    ParentP parentP1;
    parentP1.child = &child1;
    parentP1.name = "ParentP1";
    cout << parentP1 << endl;

    ParentP parentP2;
    parentP2 = parentP1;
    parentP2.name = "ParentP2";
    cout << parentP2 << endl;

    // nu hebben beide parents een pointer naar 1 en hetzelfde child object
    // wijzigingen in child1 zie je in beide parents terug:
    child1.name = "gedeeldChild1";
    cout << parentP1 << endl;
    cout << parentP2 << endl;

    // parents met een eigen copie van 't child object
    ParentPEigen parentPE1;
    parentPE1.name = "ParentPE1";
    parentPE1.child = &child1;
    parentPE1.child->name = "eigenchild1";

    ParentPEigen parentPE2;
    parentPE2 = parentPE1;
    parentPE2.name = "ParentPE2";

    cout << parentPE1 << endl;
    cout << parentPE2 << endl;

    parentPE2.child->name = "eigenchild2";

    cout << parentPE1 << endl;
    cout << parentPE2 << endl;

    return 0;
}
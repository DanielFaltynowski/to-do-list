#include <iostream>
using namespace std;
#include "Headers/List.h"

int main() {
    List list;
    Assignment assignment1("Zadanie1", "Some zadanie", 10);
    Assignment assignment2("Zadanie2", "Some zadanie", 10);
    Assignment assignment3("Zadanie3", "Some zadanie", 10);
    list.addAssignment(assignment1);
    list.addAssignment(assignment2);
    list.addAssignment(assignment3);
    list.showAssignments();
    list.deleteAssignment(1);
    list.showAssignments();

    return 0;
}

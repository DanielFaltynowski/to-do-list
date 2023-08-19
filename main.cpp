#include <iostream>
#include <string>
#include "Headers/List.h"

using namespace std;

List list;

void pressAnyKey();
void menu(bool *breaker);
void showAssignments();
void showAssignments(unsigned short priority);
void addAssignment();
void deleteAssignment();
void editAssignment();

int main()
{
    bool breaker = true;

    cout << "Welcome, here is a simple console application." << endl << endl;

    while (breaker)
    {
        cout << "---To-Do List---" << endl;
        cout << "\t1. Show all assignments." << endl;
        cout << "\t2. Show assignments with selected priority." << endl;
        cout << "\t3. Add assignment." << endl;
        cout << "\t4. Delete assignment." << endl;
        cout << "\t5. Edit assignment." << endl;
        cout << "\t6. Exit." << endl << endl;

        menu(&breaker);
    }
    return 0;
}

void pressAnyKey()
{
    cout << endl << "Press any key to continue!" << endl;
    string userInput;
    getline(cin, userInput);
    getline(cin, userInput);
    cout << endl << endl << endl;
}

void menu(bool *breaker)
{
    cout << endl << "Select option: ";
    unsigned short option;
    cin >> option;
    cout << endl;

    switch (option)
    {
        case 1:
            showAssignments();
            pressAnyKey();
            break;
        case 2:
            unsigned short priority;
            cout << "Provide the minimum priority: ";
            cin >> priority;
            showAssignments(priority);
            pressAnyKey();
            break;
        case 3:
            addAssignment();
            pressAnyKey();
            break;
        case 4:
            deleteAssignment();
            pressAnyKey();
            break;
        case 5:
            editAssignment();
            pressAnyKey();
            break;
        case 6:
            *breaker = false;
            cout << "Have a nice day!" << endl;
            break;
    }
}

void showAssignments()
{
    list.showAssignments();
}

void showAssignments(unsigned short priority)
{
    list.showAssignments(priority);
}

void addAssignment()
{
    cout << "What needs to be done?" << endl;
    string label;
    getline(cin, label);
    getline(cin, label);

    cout << "Add a description to the assignment." << endl;
    string description;
    getline(cin, description);

    cout << "How important is this task?" << endl;
    unsigned short priority;
    cin >> priority;

    Assignment assignment(label, description, priority);
    list.addAssignment(assignment);

    cout << endl << "Added!" << endl;
}

void deleteAssignment()
{
    cout << "Provide the assignment ID for deletion." << endl;
    int id;
    cin >> id;
    list.deleteAssignment(id);

    cout << endl << "Deleted!" << endl;
}

void editAssignment() {
    cout << "Provide the assignment ID you want to edit." << endl;
    int id;
    cin >> id;

    cout << "Edit label." << endl;
    string label;
    getline(cin, label);
    getline(cin, label);

    cout << "Edit description." << endl;
    string description;
    getline(cin, description);

    cout << "Edit priority." << endl;
    unsigned short priority;
    cin >> priority;

    list.editAssignment(id, label, description, priority);

    cout << endl << "Edited!" << endl;
}
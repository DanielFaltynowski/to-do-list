#ifndef TO_DO_LIST_LIST_H
#define TO_DO_LIST_LIST_H
#include <iostream>
#include "Assignment.h"

using namespace std;

class List
{
public:
    //Methods
    void showAssignments()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "---" << "Id: " << i << "---" << endl;
            cout << "Label: " << list[i].getLabel() << endl
                 << "Description: " << list[i].getDescription() << endl
                 << "Priority: " << list[i].getPriority() << endl << endl;
        }
    }

    void showAssignments(unsigned short priority)
    {
        for (int i = 0; i < counter; i++)
        {
            if (priority <= list[i].getPriority())
            {
                cout << "---" << "Id: " << i << "---" << endl;
                cout << "Label: " << list[i].getLabel() << endl
                     << "Description: " << list[i].getDescription() << endl
                     << "Priority: " << list[i].getPriority() << endl << endl;
            }
        }
    }

    void addAssignment(Assignment assignment)
    {
        for (int i = 0; i < 100; i++)
        {
            if (i == counter)
            {
                list[i] = assignment;
                counter++;
                break;
            }
        }
    }

    void deleteAssignment(int number)
    {
        bool ptr = false;
        for (int i = 0; i < counter; i++)
        {
            if (i == number)
            {
                ptr = true;
                continue;
            }
            if (ptr)
            {
                list[i - 1] = list[i];
            }
        }
        counter--;
    }

    void editAssignment(int number, string label, string description, unsigned short priority)
    {
        list[number].setLabel(label);
        list[number].setDescription(description);
        list[number].setPriority(priority);
    }

protected:
    int counter = 0;
    Assignment list[100];
};

#endif //TO_DO_LIST_LIST_H

#ifndef TO_DO_LIST_LIST_H
#define TO_DO_LIST_LIST_H
#include <iostream>
#include "Assignment.h"

using namespace std;

class List
{
public:
    void showAssignments()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << i << ". " << list[i].getLabel()
                 << "; Description: " << list[i].getDescription()
                 << "; Priority: " << list[i].getPriority() << endl;
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

protected:
    int counter = 0;
    Assignment list[100];
};

#endif //TO_DO_LIST_LIST_H

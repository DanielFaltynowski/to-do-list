#ifndef TO_DO_LIST_ASSIGNMENT_H
#define TO_DO_LIST_ASSIGNMENT_H
#include <iostream>

using namespace std;

class Assignment
{
public:
    // Constructors
    Assignment()
    {
        this->label = "Set label...";
        this->description = "Set description...";
        this->priority = 0;
    }

    Assignment(string label, string description, unsigned short priority)
    {
        this->label = label;
        this->description = description;
        this->priority = priority;
    }

    // Methods
    string getLabel()
    {
        return this->label;
    }

    string getDescription()
    {
        return this->description;
    }

    unsigned short getPriority()
    {
        return this->priority;
    }

    void setLabel(string label)
    {
        this->label = label;
    }

    void setDescription(string description)
    {
        this->description = description;
    }

    void setPriority(unsigned short priority)
    {
        this->priority = priority;
    }

protected:
    string label;
    string description;
    unsigned short priority;
};

#endif //TO_DO_LIST_ASSIGNMENT_H

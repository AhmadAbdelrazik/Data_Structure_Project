
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "doctor.h"

class LinkedList
{
private:
    Doctor *head;
    Doctor *tail;
    int count;

public:
    LinkedList();
    void insertDoctorFront();
    void insertDoctorBack();
    void deleteDoctor(int id);
    Doctor *searchDoctor(int id);
};

#endif // LINKED_LIST_H

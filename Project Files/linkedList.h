
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "doctor.h"

class LinkedList
{
public:
    Doctor *head;
    Doctor *tail;
    int count;

private:
    LinkedList();
    void insertDoctorFront(Doctor *doctor);
    void insertDoctorBack(Doctor *doctor);
    void deleteDoctor(int id);
    Doctor *searchDoctor(int id);
};

#endif // LINKED_LIST_H

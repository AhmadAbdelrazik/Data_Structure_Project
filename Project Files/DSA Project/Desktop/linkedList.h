
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "doctor.h"

// Class representing a linked list of doctors
class LinkedList
{
private:
    Doctor *head;  // Pointer to the front of the linked list
    Doctor *tail;  // Pointer to the back of the linked list
    int count;     // Number of doctors in the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList();

    // Function to insert a doctor at the front of the linked list
    void insertDoctorFront();

    // Function to insert a doctor at the back of the linked list
    void insertDoctorBack();

    // Function to delete a doctor from the linked list based on their ID
    void deleteDoctor(int id);

    // Function to search for a doctor in the linked list based on their ID
    Doctor *searchDoctor(int id);
};

#endif // LINKED_LIST_H

#include "linkedList.h"

LinkedList ::LinkedList() : head(NULL), tail(NULL), count(0)
{
}

void LinkedList ::insertDoctorFront()
{
    Doctor *doctor = new Doctor;

    count++;
    if (head == NULL && tail == NULL)
    {
        head = doctor;
        tail = doctor;
    }
    else
    {
        doctor->next = head;
        head->prev = doctor;
        head = doctor;
        doctor->prev = NULL;
    }
}
void LinkedList ::insertDoctorBack()
{
    Doctor *doctor = new Doctor;

    count++;
    if (head == NULL && tail == NULL)
    {
        head = doctor;
        tail = doctor;
    }
    else
    {
        doctor->prev = tail;
        tail->next = doctor;
        tail = doctor;
        doctor->next = NULL;
    }
}

void LinkedList ::deleteDoctor(int id)
{
    Doctor *current = head;

    while (current != NULL)
    {
        if (current->getId() == id)
        {
            count--;
            cout << "Doctor : " << current->getName() << " has been removed.\n";
            delete current;
            return;
        }
        current = current->next;
    }
    cout << "Doctor " << id << " has not been found.\n";
}

Doctor *LinkedList ::searchDoctor(int id)
{
    Doctor *current = head;

    while (current != NULL)
    {
        if (current->getId() == id)
        {
            cout << "Doctor " << current->getName() << " has been found.\n";
            return current;
        }
        current = current->next;
    }
    cout << "Doctor " << id << " has not been found.\n";
    return NULL;
}

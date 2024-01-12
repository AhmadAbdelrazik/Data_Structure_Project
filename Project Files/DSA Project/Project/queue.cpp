#include "queue.h"

Queue ::Queue(int capacity) : head(NULL),
                              tail(NULL), count(0), m_capacity(capacity)
{
}

void Queue ::addQueue()
{
    if (isFull())
    {
        cout << "The Queue is Full\n";
        return;
    }

    Patient *newPatient = new Patient;

    if (count == 0)
    {
        head = newPatient;
        tail = newPatient;
        newPatient->next = NULL;
        newPatient->prev = NULL;
    }
    else
    {
        tail->next = newPatient;
        newPatient->next = NULL;
        newPatient->prev = tail;
        tail = newPatient;
    }
    count++;
}

void Queue ::deleteQueue()
{
    if (!count)
    {
        cout << "\n\nNo patients found in queue\n\n";
        return;
    }

    if (count == 1)
    {
        head->printInfo();
        cout << "\n\nPatient has been treated\n\n";
        delete head;
        head = NULL;
        tail = NULL;
        count--;
    }
    else
    {
        head->printInfo();
        cout << "\n\nPatient has been treated\n\n";
        head = head->next;
        delete head->prev;
        head->prev = 0;
        count--;
    }
}

void Queue ::destroyQueue()
{
    if (!count)
    {
        cout << "Queue is Empty \n";
        return;
    }
    cout << "Emptying the Queue : \n\n";
    while (head != NULL)
    {
        Patient *q = head;

        cout << "Patient with id : " << head->getId();
        cout << " has been removed\n\n";
        head = head->next;
        delete q;
    }

    tail = NULL;
    count = 0;
}

void Queue ::front()
{
    if (count == 0)
    {
        cout << "The queue is Empty \n";
        return;
    }

    head->printInfo();
}

void Queue ::back()
{
    if (count == 0)
    {
        cout << "The queue is Empty \n";
        return;
    }

    tail->printInfo();
}

bool Queue ::isFull()
{
    return count == m_capacity;
}

bool Queue ::isEmpty()
{
    return count == 0;
}

#ifndef QUEUE_H
#define QUEUE_H

#include "patient.h"

class Queue
{
private:
    Patient *head;
    Patient *tail;
    int count;
    int m_capacity;

public:
    Queue(int capacity);
    void addQueue();
    void deleteQueue();
    void destroyQueue();
    void front();
    void back();
    bool isFull();
    bool isEmpty();
};

#endif // QUEUE_H

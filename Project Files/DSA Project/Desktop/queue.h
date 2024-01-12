#ifndef QUEUE_H
#define QUEUE_H

#include "patient.h"

// Class representing a Queue of patients
class Queue
{
private:
    Patient *head;   // Pointer to the front of the queue
    Patient *tail;   // Pointer to the back of the queue
    int count;       // Number of patients in the queue
    int m_capacity;  // Maximum capacity of the queue

public:
    // Constructor to initialize the queue with a specified capacity
    Queue(int capacity);

    // Function to add a patient to the back of the queue
    void addQueue();

    // Function to delete the patient at the front of the queue
    void deleteQueue();

    // Function to destroy the entire queue
    void destroyQueue();

    // Function to get information about the patient at the front of the queue
    void front();

    // Function to get information about the patient at the back of the queue
    void back();

    // Function to check if the queue is full
    bool isFull();

    // Function to check if the queue is empty
    bool isEmpty();
};

#endif // QUEUE_H

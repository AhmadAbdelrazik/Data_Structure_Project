#ifndef PATIENT_H
#define PATIENT_H

#include "libraries.h"

// Class representing a patient
class Patient
{
private:
    int m_id;          // Unique identifier for the patient
    int m_age;         // Age of the patient
    string m_name;     // Name of the patient
    string m_diagnosis;// Diagnosis information for the patient

public:
    Patient *next;     // Pointer to the next patient in the list
    Patient *prev;     // Pointer to the previous patient in the list

    // Constructor for the Patient class
    Patient();

    // Setter and getter functions for the patient's ID
    void setId(int id);
    int getId();

    // Setter and getter functions for the patient's age
    void setAge(int age);
    int getAge();

    // Setter and getter functions for the patient's name
    void setName(string name);
    string getName();

    // Setter and getter functions for the patient's diagnosis
    void setDiagnosis(string diagnosis);
    string getDiagnosis();

    // Function to print information about the patient
    void printInfo();
};

#endif // PATIENT_H

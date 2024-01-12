#ifndef PATIENT_H
#define PATIENT_H

#include "libraries.h"

class Patient
{
private:
    int m_id;
    int m_age;
    string m_name;
    string m_diagnosis;

public:
    Patient *next;
    Patient *prev;

    Patient();
    void setId(int id);
    int getId();
    void setAge(int age);
    int getAge();
    void setName(string name);
    string getName();
    void setDiagnosis(string diagnosis);
    string getDiagnosis();
    void printInfo();
};

#endif // PATIENT_H

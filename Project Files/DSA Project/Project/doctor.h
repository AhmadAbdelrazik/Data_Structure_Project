#ifndef DOCTOR_H
#define DOCTOR_H

#include "libraries.h"

class Doctor
{
private:
    int m_id;
    string m_name;
    string m_specialty;
    int m_experienceYears;

public:
    Doctor *next;
    Doctor *prev;
    Doctor();
    void setId(int id);
    int getId();
    void setName(string name);
    string getName();
    void setSpecialty(string specialty);
    string getSpecialty();
    void setExperienceYears(int experienceYears);
    int getExperienceYears();
    void printInfo();
};

#endif // DOCTOR_H

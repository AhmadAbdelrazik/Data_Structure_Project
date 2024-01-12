#ifndef DOCTOR_H
#define DOCTOR_H

#include "libraries.h"

// Class representing a Doctor
class Doctor
{
private:
    int m_id;                // Unique identifier for the doctor
    string m_name;           // Name of the doctor
    string m_specialty;      // Specialty of the doctor (e.g., Cardiology, Pediatrics)
    int m_experienceYears;   // Number of years of experience of the doctor

public:
    Doctor *next;            // Pointer to the next doctor in the list
    Doctor *prev;            // Pointer to the previous doctor in the list

    // Constructor for the Doctor class
    Doctor();

    // Setter and getter functions for the doctor's ID
    void setId(int id);
    int getId();

    // Setter and getter functions for the doctor's name
    void setName(string name);
    string getName();

    // Setter and getter functions for the doctor's specialty
    void setSpecialty(string specialty);
    string getSpecialty();

    // Setter and getter functions for the doctor's experience years
    void setExperienceYears(int experienceYears);
    int getExperienceYears();

    // Function to print information about the doctor
    void printInfo();
};

#endif // DOCTOR_H

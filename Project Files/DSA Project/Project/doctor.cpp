#include "doctor.h"

Doctor ::Doctor()
{
    cout << "Enter the doctor's Name : ";
    getline(cin >> ws, m_name);
    cout << "Enter the doctor's ID : ";
    cin >> m_id;
    cout << "Enter the doctor's Specialty : ";
    cin.ignore();
    getline(cin >> ws, m_specialty);
    cout << "Enter the doctor's Experience Years : ";
    cin >> m_experienceYears;

    next = NULL;
    prev = NULL;
}

void Doctor ::setId(int id)
{
    if (id > 0)
        m_id = id;
}

int Doctor ::getId()
{
    return m_id;
}

void Doctor ::setName(string name)
{
    m_name = name;
}

string Doctor ::getName()
{
    return m_name;
}

void Doctor ::setSpecialty(string specialty)
{
    m_specialty = specialty;
}

string Doctor ::getSpecialty()
{
    return m_specialty;
}

void Doctor ::setExperienceYears(int experienceYears)
{
    if (experienceYears >= 0)
        m_experienceYears = experienceYears;
}

int Doctor ::getExperienceYears()
{
    return m_experienceYears;
}

void Doctor ::printInfo()
{
    cout << "Doctor's Name : " << m_name << endl;
    cout << "Doctor's ID : " << m_id << endl;
    cout << "Doctor's Specialty : " << m_specialty << endl;
    cout << "Doctor's Experience Years : " << m_experienceYears << endl;
    cout << endl;
}
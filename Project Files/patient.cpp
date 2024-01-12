#include "patient.h"

Patient ::Patient()
{
    cout << "Enter Patient's Name : ";
    cin.ignore();
    getline(cin, m_name);
    cout << "Enter Patient's ID : ";
    cin >> m_id;
    cout << "Enter Patient's Diagnosis : ";
    cin.ignore();
    getline(cin, m_diagnosis);
    cout << "Enter Patient's Age : ";
    cin >> m_age;

    printInfo();
}

void Patient ::setId(int id)
{
    if (id > 0)
        m_id = id;
}

int Patient ::getId()
{
    return m_id;
}

void Patient ::setAge(int age)
{
    if (age > 0)
        m_age = age;
}

int Patient ::getAge()
{
    return m_age;
}

void Patient ::setName(string name)
{
    m_name = name;
}

string Patient ::getName()
{
    return m_name;
}

void Patient ::setDiagnosis(string diagnosis)
{
    m_diagnosis = diagnosis;
}

string Patient ::getDiagnosis()
{
    return m_diagnosis;
}

void Patient ::printInfo()
{
    cout << "Patient's Name : " << m_name << endl;
    cout << "Patient's ID : " << m_id << endl;
    cout << "Patient's Age : " << m_age << endl;
    cout << "Patient's Diagnosis : " << m_diagnosis << endl;
    cout << endl;
}

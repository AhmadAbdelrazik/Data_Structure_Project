#include "main.h"
#include <iostream>
#include <Windows.h>

int main()
{
    int capacity;

    cout << "Hospital Management System\n";
    cout << "Enter the Queue capacity : ";
    cin >> capacity;

    while (capacity <= 1)
    {
        cout << "Please Enter Valid Capacity : ";
        cin >> capacity;
    }

    Queue hospital(capacity);
    LinkedList My_Doctors;

    cout << "Add first Patient :\n\n";

    hospital.addQueue();

    cout << "\nAdd Second patient : \n\n";
    hospital.addQueue();

    cout << "\nAdd third patient : \n\n";
    hospital.addQueue();

    cout << "\nTreat a patient (remove) : \n\n";
    hospital.deleteQueue();

    Sleep(1500);

    cout << "The patient in front : \n\n";
    hospital.front();

    cout << "The patient at the back : \n\n";
    hospital.back();

    Sleep(1500);

    cout << "\nClearing the hospital Queue (Destroy)\n\n";
    hospital.destroyQueue();

    cout << "--------------------------------------------\n";
    cout << "--------------------------------------------\n";
    cout << "--------------------------------------------\n";

    cout << "\n\nAdd Doctor from front\n\n";
    My_Doctors.insertDoctorFront();
    cout << "\n\nAdd Doctor from front\n\n";
    My_Doctors.insertDoctorFront();

    cout << "\n\nAdd Doctor from back\n\n";
    My_Doctors.insertDoctorBack();
    cout << "\n\nAdd Doctor from back\n\n";
    My_Doctors.insertDoctorBack();

    int doctor_id;

    cout << "\n\nSearch For a doctor\n\n";

    cout << "Enter the doctor's ID : ";
    cin >> doctor_id;
    My_Doctors.searchDoctor(doctor_id);

    cout << "\n\nSearch For a doctor\n\n";

    cout << "Enter the doctor's ID : ";
    cin >> doctor_id;
    My_Doctors.searchDoctor(doctor_id);

    cout << "\n\nDelete a doctor\n\n";

    cout << "Enter the doctor's ID : ";
    cin >> doctor_id;
    My_Doctors.deleteDoctor(doctor_id);

    cout << "\n\nDelete a doctor\n\n";

    cout << "Enter the doctor's ID : ";
    cin >> doctor_id;
    My_Doctors.deleteDoctor(doctor_id);

    return 0;
}

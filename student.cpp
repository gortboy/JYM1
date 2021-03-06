#include <iostream>
#include "student.h"

// Constructor
Student::Student(string studentID,
                 string firstName,
                 string lastName,
                 string emailAddress,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram degreeProgram) {
    v_Age            = age;
    v_DaysToComplete = {daysInCourse1, daysInCourse2, daysInCourse3};
    v_Email          = emailAddress;
    v_FirstName      = firstName;
    v_LastName       = lastName;
    v_StudentId      = studentID;
    v_Degree         = degreeProgram;
}

// Getters
string Student::StudentId() {
    return v_StudentId;
}

string Student::FirstName() {
    return v_FirstName;
}

string Student::LastName() {
    return v_LastName;
}

string Student::Email() {
    return v_Email;
}

int Student::Age() {
    return v_Age;
}

array<int, 3> Student::DaysToComplete() {
    return v_DaysToComplete;
}

string Student::Degree() {
    return v_Degree;
}

// Setters
void Student::SetStudentId(string id) {
    v_StudentId = id;
}

void Student::SetFirstName(string firstName) {
    v_FirstName = firstName;
}

void Student::SetLastName(string lastName) {
    v_LastName = lastName;
}

void Student::SetEmail(string email) {
    v_Email = email;
}

void Student::SetAge(int age) {
    v_Age = age;
}

void Student::SetDaysToComplete(array<int, 3> daysToComplete) {
    v_DaysToComplete = daysToComplete;
}

void Student::SetDegree(string degree) {
    v_Degree = degree;
}

// Print
void Student::Print() {
    cout << "A1 [tab] First Name: ";
    cout << v_FirstName;
    cout << " [tab] Last Name: ";
    cout << v_LastName;
    cout << " [tab] Age: ";
    cout << to_string(v_Age);
    cout << " [tab] daysInCourse: ";
    cout << "{";
    for (int i = 0; i < v_DaysToComplete.size(); i++) {
        cout << to_string(v_DaysToComplete[i]);
        if (i < v_DaysToComplete.size() - 1)
            cout << ",";
    }
    cout << "} ";
    // days
    cout << " Degree Program: ";
    cout << v_Degree << endl;
}

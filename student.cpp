/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.cpp
 * Author: Ryan George
 * 
 * Created on August 21, 2018, 10:33 AM
 */

#include "student.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

student::student(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3) {
    studentID = setId;
    firstName = setFirst;
    lastName = setLast;
    emailAddress = setEmail;
    age = setAge;
    daysInCourse[0] = setDays1;
    daysInCourse[1] = setDays2;
    daysInCourse[2] = setDays3;
}
student::~student() {
    return;
}

void   student::SetStudentID(string studentID1) {
    studentID = studentID1;
}
void   student::SetFirstName(string firstName1) {
    firstName = firstName1;
}
void   student::SetLastName(string  lastName1) {
    lastName = lastName1;
}
void   student::SetEmailAddress(string emailAddress1) {
    emailAddress = emailAddress1; 
}
void   student::SetAge(int ageStudent1) {
    age = ageStudent1;
}
void   student::SetDaysInCourse(int days1, int days2, int days3) {
    daysInCourse[0] = days1;
    daysInCourse[1] = days2;
    daysInCourse[2] = days3; 
}
void student::SetDegreeProgram(Degree degrProgram) {
    degreeProgram = degrProgram;
}

    
string student::GetStudentID(){
    return studentID;
}
string student::GetFirstName() {
    return firstName;
}
string student::GetLastName() {
    return lastName;
}
string student::GetEmailAddress(){
    return emailAddress;
}
int    student::GetAge(){
    return age;
}
int*    student::GetDaysInCourse() {
    return daysInCourse;
}
Degree student::GetDegreeProgram() {
}

void student::Print() {
    
    cout << right << setw(15) << "First Name: " << GetFirstName();
    cout << right << setw(14) << "Last Name: " << GetLastName();
    cout << right << setw(18) << "Email Address: " << GetEmailAddress();
    cout << right << setw(8) << "Age: " << GetAge();
    cout << right << setw(18) << "daysInCourse: {";
    const int numDays = 3;
    int* days = GetDaysInCourse();
    
    for (int i = 0; i < numDays; ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << days[i];
    }
            
    cout << "}";
    
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   student.h
 * Author: Ryan George
 *
 * Created on August 21, 2018, 10:33 AM
 */

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class student {
public:
    student(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3);
    ~student();
    
    void   SetStudentID(string studentID1);
    void   SetFirstName(string firstName1);
    void   SetLastName(string  lastName1);
    void   SetEmailAddress(string emailAddress1);
    void   SetAge(int ageStudent1);
    void   SetDaysInCourse(int days1, int days2, int days3);
    void   SetDegreeProgram (Degree degrProgram);
    
    string GetStudentID();
    string GetFirstName();
    string GetLastName();
    string GetEmailAddress();
    int    GetAge();
    int*   GetDaysInCourse();
    virtual Degree GetDegreeProgram();
    virtual void Print();
    Degree degreeProgram;
    
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int    age;
    int    daysInCourse[3];

};
#endif /* STUDENT_H */

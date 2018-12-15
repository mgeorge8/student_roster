/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.h
 * Author: Ryan George
 *
 * Created on August 21, 2018, 10:36 AM
 */

using namespace std;
#include <string>
#include <cstring>
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#ifndef ROSTER_H
#define ROSTER_H

const int MAX = 5;

class roster {
public:
    roster();
    ~roster();
    void RosterFunction();
    void add(string stuID, string stufirstName, string stulastName, string stuemailAddress, int stuage, int days1, int days2, int days3, Degree sDegree);
    void remove(string stuID);
    void printAll();
    void printDaysInCourse(string stuID);
    void printInvalidEmails();
    void printByDegreeProgram(Degree degreeProgram);
    student find(string stuID);
    student* classRosterArray[MAX]; 
private:
    
    int currPosition;

};

#endif /* ROSTER_H */

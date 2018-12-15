/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   softwareStudent.h
 * Author: Ryan George
 *
 * Created on August 21, 2018, 10:36 AM
 */

using namespace std;
#include <string>
#include "student.h"
#include "degree.h"
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

class softwareStudent : public student {
public:
    softwareStudent(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3);
    Degree GetDegreeProgram() {
        return software;
    }
    void Print();
private:
    Degree software;
};

#endif /* SOFTWARESTUDENT_H */

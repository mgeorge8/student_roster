/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   networkStudent.h
 * Author: Ryan George
 *
 * Created on August 21, 2018, 10:35 AM
 */

#include <string>
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include "student.h"
#include "degree.h"
using namespace std;

class networkStudent : public student {
public:
    networkStudent(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3);
    Degree GetDegreeProgram(){
        return networking;
    }
    void Print();
private:
    Degree networking;
};

#endif /* NETWORKSTUDENT_H */

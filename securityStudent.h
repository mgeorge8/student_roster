/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   securityStudent.h
 * Author: Ryan George
 *
 * Created on August 21, 2018, 10:36 AM
 */

using namespace std;
#include <string>
#include "student.h"
#include "degree.h"
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

class securityStudent : public student {
public:
    securityStudent(string setId, string setFirst, string setLast, string setEmail, int setAge, int days1, int days2, int days3);
    Degree GetDegreeProgram(){
        return security;
    }
    void Print();
    
private:
    Degree security;
};

#endif /* SECURITYSTUDENT_H */

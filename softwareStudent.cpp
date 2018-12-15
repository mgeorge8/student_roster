/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   softwareStudent.cpp
 * Author: Ryan George
 * 
 * Created on August 21, 2018, 10:36 AM
 */

#include <string>
#include <iomanip>
#include "degree.h"
#include "softwareStudent.h"
using namespace std;

softwareStudent::softwareStudent(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3)
   : student(setId, setFirst, setLast, setEmail, setAge, setDays1, setDays2, setDays3) {
    software = SOFTWARE;
}
void softwareStudent::Print() {
    student::Print();
    cout << right << setw(29) << "Degree Program: Software" << endl;
}
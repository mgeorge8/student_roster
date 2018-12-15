/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   networkStudent.cpp
 * Author: Ryan George
 * 
 * Created on August 21, 2018, 10:35 AM
 */

#include <string>
#include <iomanip>
#include "networkStudent.h"
#include "degree.h"
using namespace std;

   
networkStudent::networkStudent(string setId, string setFirst, string setLast, string setEmail, int setAge, int setDays1, int setDays2, int setDays3)
   : student(setId, setFirst, setLast, setEmail, setAge, setDays1, setDays2, setDays3) {
    networking = NETWORKING;
}
void networkStudent::Print() {
    student::Print();
    cout << right << setw(29) << "Degree Program: Networking" << endl;
}
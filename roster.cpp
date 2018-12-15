/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   roster.cpp
 * Author: Ryan George
 * 
 * Created on August 21, 2018, 10:37 AM
 */


#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include "roster.h"
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
using namespace std;

roster::roster() {
    currPosition = 0;
}

roster::~roster() {
    int i = 0;
    for (int i = 0; i < MAX; ++i) {
        delete classRosterArray[i];
    }
}

void roster::add(string stuID, string stufirstName, string stulastName, string stuemailAddress, int stuage, int days1, int days2, int days3, Degree sDegree) {

    if (sDegree == Degree(1)) {
        classRosterArray[currPosition] = new networkStudent(stuID, stufirstName, stulastName, stuemailAddress, stuage, days1, days2, days3);
    }
    if (sDegree == Degree(2)) {
        classRosterArray[currPosition] = new softwareStudent(stuID, stufirstName, stulastName, stuemailAddress, stuage, days1, days2, days3);
    }
    if (sDegree == Degree(0)) {
        classRosterArray[currPosition] = new securityStudent(stuID, stufirstName, stulastName, stuemailAddress, stuage, days1, days2, days3);
    }

    ++currPosition;
}

void roster::remove(string stuID) {
    int h = 0;
    for (h = 0; h < MAX; ++h) {
        if (classRosterArray[h] != NULL) {
            string student1 = classRosterArray[h]->GetStudentID();
            if (stuID == student1) {
                classRosterArray[h] = NULL;
            }
        } else {
            cout << "ERROR: Student ID not found" << endl;
        }
    }
    return;
}

void roster::printAll() {
    for (int c = 0; c < MAX; ++c) {
        cout << c + 1;
        classRosterArray[c]->Print();
    }
    return;
}

void roster::printDaysInCourse(string stuID) {
    int h = 0;
    for (h = 0; h < MAX; ++h) {
        string student1 = classRosterArray[h]->GetStudentID();
        if (stuID == student1) {
            const int numDays = 3;
            int* days = classRosterArray[h]->GetDaysInCourse();
            double average = 0.0;
            int totaldays = 0;
            for (int i = 0; i < numDays; ++i) {
                totaldays += days[i];

            }
            average = double(totaldays) / 3.0;
            cout << average << endl;
            break;
        }
    }
}

void roster::printInvalidEmails() {
    for (int h = 0; h < MAX; ++h) {
        string stuEmail = classRosterArray[h]->GetEmailAddress();
        size_t found = stuEmail.find(".");
        if (found == string::npos) {
            cout << stuEmail << endl;
        }
        found = stuEmail.find(" ");
        if (found != string::npos) {
            cout << stuEmail << endl;
        }
        found = stuEmail.find("@");
        if (found == string::npos) {
            cout << stuEmail << endl;
        }
    }
}

void roster::printByDegreeProgram(Degree degreeProgram) {
    Degree stuDegree = degreeProgram;
    for (int h = 0; h < MAX; ++h) {
        Degree student1 = classRosterArray[h]->GetDegreeProgram();
        if (stuDegree == student1) {
            classRosterArray[h]->Print();
        }


    }
}

int main() {


    cout << "C867 Scripting and Programming Applications: C++" << endl;
    cout << "Student ID: #000874696" << endl;
    cout << "Melissa George" << endl;

    const string studentData [MAX] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Melissa,George,melissalgeorge8@gmail.com,22,20,25,30,SOFTWARE"};

    roster* Roster = new roster();
    int i = 0;
    string theStudent[9];
    char delimiter[] = ",";
    int j = 0;

    string sID;
    string sFirstName;
    string sLastName;
    string sEmailAddress;
    int sAge;
    int days1;
    int days2;
    int days3;


    for (int i = 0; i < MAX; ++i) {
        string arrayString = studentData[i] + ",";
        char *token = std::strtok(&arrayString[0], delimiter);
        j = 0;
        while (token != NULL && j < 9) {
            theStudent[j] = token;
            ++j;
            token = std::strtok(NULL, delimiter);
        }

        sID = theStudent[0];
        sFirstName = theStudent[1];
        sLastName = theStudent[2];
        sEmailAddress = theStudent[3];
        sAge = atoi(theStudent[4].c_str());
        days1 = atoi(theStudent[5].c_str());
        days2 = atoi(theStudent[6].c_str());
        days3 = atoi(theStudent[7].c_str());
        int days123[3] = {days1, days2, days3};

        if (i == 0) {
            Degree deg = Degree(0);
            Roster->add(sID, sFirstName, sLastName, sEmailAddress, sAge, days1, days2, days3, deg);

        }
        if (i == 1) {
            Degree deg = Degree(1);
            Roster->add(sID, sFirstName, sLastName, sEmailAddress, sAge, days1, days2, days3, deg);
        }
        if (i == 2) {
            Degree deg = Degree(2);
            Roster->add(sID, sFirstName, sLastName, sEmailAddress, sAge, days1, days2, days3, deg);
        }
        if (i == 3) {
            Degree deg = Degree(0);
            Roster->add(sID, sFirstName, sLastName, sEmailAddress, sAge, days1, days2, days3, deg);
        }
        if (i == 4) {
            Degree deg = Degree(2);
            Roster->add(sID, sFirstName, sLastName, sEmailAddress, sAge, days1, days2, days3, deg);
        }
    }

    Roster->printAll();
    Roster->printInvalidEmails();
    for (int i = 0; i < MAX; ++i) {
        string student1 = Roster->classRosterArray[i]->GetStudentID();
        Roster->printDaysInCourse(student1);
    }
    Roster->printByDegreeProgram(SOFTWARE);
    Roster->remove("A3");
    Roster->remove("A3");
    delete Roster;

}




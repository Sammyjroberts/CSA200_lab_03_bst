//
//  Student.cpp
//  lab_03_bst
//
//  Created by Dean Roberts on 9/16/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#include "Student.hpp"
void Student::setStudentInfo(string fName, string lName, int newId) {
    this->firstName = fName;
    this->lastName = lName;
    this->id = newId;
}
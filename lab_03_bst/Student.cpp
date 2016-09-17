//
//  Student.cpp
//  lab_03_bst
//
//  Created by Dean Roberts on 9/16/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#include "Student.hpp"
void Student::setStudentInfo(int newId, const string &fName, const string &lName) {
    this->firstName = fName;
    this->lastName = lName;
    this->id = newId;
}
bool Student::operator< (const Student &s) {
    return this->id < s.id;
}
bool Student::operator> (const Student &s) {
    return this->id > s.id;
}
bool Student::operator== (const Student &s) {
    return this->id == s.id;
}

ostream& operator<<(ostream& out, const Student &s)  {
    out << s.firstName << " " << s.lastName << " id: " << s.id;
    return out;
}
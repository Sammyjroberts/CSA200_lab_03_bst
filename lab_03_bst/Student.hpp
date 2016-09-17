//
//  Student.hpp
//  lab_03_bst
//
//  Created by Dean Roberts on 9/16/16.
//  Copyright © 2016 Dean Roberts. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Student {
    friend ostream& operator<<(ostream& out, const Student &s);
public:
    Student() : id(0){}
    ~Student(){};
    void setStudentInfo(int newId, const string &fName, const string &lName);
    bool operator< (const Student &s);
    bool operator> (const Student &s);
    bool operator== (const Student &s);
private:
    int id;
    string firstName;
    string lastName;
};
#endif /* Student_hpp */

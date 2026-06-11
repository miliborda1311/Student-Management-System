#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    string course;

    Student(int id, string name, string course);
};

#endif
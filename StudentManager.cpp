#include <iostream>
#include "StudentManager.h"

using namespace std;

void StudentManager::addStudent() {
    int id;
    string name, course;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Course: ";
    getline(cin, course);

    students.push_back(Student(id, name, course));

    cout << "Student Added Successfully!\n";
}

void StudentManager::displayStudents() {
    for (auto &s : students) {
        cout << "\nID: " << s.id;
        cout << "\nName: " << s.name;
        cout << "\nCourse: " << s.course << "\n";
    }
}

void StudentManager::searchStudent() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;

    for (auto &s : students) {
        if (s.id == id) {
            cout << "Student Found: " << s.name << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

void StudentManager::deleteStudent() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;

    for (auto it = students.begin(); it != students.end(); it++) {
        if (it->id == id) {
            students.erase(it);
            cout << "Student Deleted!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}
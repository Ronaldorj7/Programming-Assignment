#include "student.h"
#include <iostream>
#include <cmath>

using namespace std;


Student::Student(string studentName) {
    name = studentName;
}

void Student::addGrade(double grade) {
    grades.push_back(grade);
}

double Student::calculateAverage() {
    if (grades.empty()) {
        return 0.0;
}

    double total = 0.0;
    for (double grade:grades){
        total += grade;
    }
    return total / grades.size();
}

void Student::printDetails() {
    cout << "Student Name: " << name << endl;
    double average = calculateAverage();

    double roundedAverage = round(average * 100) / 100.0;

    cout << "Average Grade: " << roundedAverage << endl;
}

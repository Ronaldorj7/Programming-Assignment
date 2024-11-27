#include "student.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    Student student1("Anthony Morales");

    student1.addGrade(95.00);
    student1.addGrade(83.00);
    student1.addGrade(70.00);

    student1.printDetails();

    return 0;

}
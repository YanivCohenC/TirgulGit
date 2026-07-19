#include <iostream>

// Forward declarations of features
void manageGrades();
void manageAttendance();
void manageCourses();

int main() {
    std::cout << "=== STUDENT MANAGEMENT SYSTEM ===" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    manageGrades();
    manageAttendance();
    manageCourses();

    return 0;
}
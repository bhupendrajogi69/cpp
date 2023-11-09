#include <iostream>

using namespace std;

struct Student {
    string name;
    int rollNo;
    char gender;
    float percentage;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[100]; // Assuming a maximum of 100 students

    for (int i = 0; i < n; i++) {
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter roll number for student " << i + 1 << ": ";
        cin >> students[i].rollNo;
        cout << "Enter gender for student " << i + 1 << " (M/F): ";
        cin >> students[i].gender;
        cout << "Enter percentage for student " << i + 1 << ": ";
        cin >> students[i].percentage;
    }

    cout << "Student Information:\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << ", Roll No: " << students[i].rollNo
             << ", Gender: " << students[i].gender << ", Percentage: " << students[i].percentage << "%" << endl;
    }

return 0;
}
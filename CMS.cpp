#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int studentID;
    int roomNumber;
    string messSelection;

public:
    Student(string _name, int _studentID, int _roomNumber, string _messSelection) {
        name = _name;
        studentID = _studentID;
        roomNumber = _roomNumber;
        messSelection = _messSelection;
    }

    void updateMessSelection(string newMessSelection) {
        messSelection = newMessSelection;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Mess Selection: " << messSelection << endl;
    }
};

int main() {
    string name, messSelection;
    int studentID, roomNumber;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter room number: ";
    cin >> roomNumber;

    cin.ignore(); // Ignore newline character

    cout << "Enter mess selection (veg/non-veg/special): ";
    getline(cin, messSelection);

    Student student(name, studentID, roomNumber, messSelection);

    student.printDetails();

    // Update mess selection after a month
    string newMessSelection;
    cout << "Enter new mess selection: ";
    getline(cin, newMessSelection);

    student.updateMessSelection(newMessSelection);

    student.printDetails();

    return 0;
}
